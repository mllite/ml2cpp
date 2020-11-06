// ml2cpp generic part.

#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>


#include <any>

typedef float tNumeric;
typedef unsigned int uint;
typedef std::vector<std::any> tAnyVector;
typedef std::map<std::string, tAnyVector> tTable;


tNumeric to_double(std::any const & iAny) {
  if(iAny.has_value()) {
    tNumeric lValue = std::any_cast<tNumeric>(iAny);
    return lValue;    
  }
  return tNumeric(0);
}

std::string std_any_to_string(std::any const & iAny) {
  tNumeric lValue = std::any_cast<tNumeric>(iAny);
  std::string lOutput = std::to_string(lValue);
  return lOutput;
}

bool lessThanAny(std::any const & iAny1, std::any const & iAny2) {
  if(iAny1.has_value() && iAny2.has_value()) {
    return to_double(iAny1) < to_double(iAny2);
  }
  return false;
}

namespace std {
  bool operator<=(std::any const & iAny1, std::any const & iAny2) {
    if(iAny1.has_value() && iAny2.has_value()) {
      return to_double(iAny1) <= to_double(iAny2);
    }
    return false;
  }

}

uint get_arg_max(tAnyVector const & iVec) {
  return std::max_element(iVec.begin(), iVec.end(), lessThanAny) - iVec.begin();
}


namespace __gnu_cxx {
  void __verbose_terminate_handler() {
    for(;;);
  }
}
 
extern "C" void __cxa_pure_virtual() {
  for(;;);
}



std::string dump_table_as_string(tTable const & iTable){
  std::string lColumnsStr = "{ ";
  for(auto const & lKey : iTable) {
    tAnyVector const & lVec = lKey.second;
    for(uint i=0; i < lVec.size(); ++i){
      lColumnsStr = lColumnsStr + lKey.first  + "." + std::to_string(i) + " : " + std_any_to_string(lVec[i]) + " , ";
    }
  }
  lColumnsStr = lColumnsStr + " }";
  return lColumnsStr;
}
