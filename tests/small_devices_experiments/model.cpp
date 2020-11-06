

#include "xtensa_missing_symbols.i"
#include "Generic.i"
#include "model_auto_generated.i"

// #include <iostream>

int main() {
  tTable lTable;
  for(uint i=0; i<64; i++) {
    lTable["Feature_" + std::to_string(i)] = {tNumeric(i)};
  }
  tTable lTable2 = dt::compute_model_outputs_from_table(lTable);
  std::string lTableAsString= dump_table_as_string(lTable2);
  // std::cout << lTableAsString << "\n";
  // score_csv_file("outputs/ml2cpp-demo/datasets/digits.csv");
  return 0;
}
