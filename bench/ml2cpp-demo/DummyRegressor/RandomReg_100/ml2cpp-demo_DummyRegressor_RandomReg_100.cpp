// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : DummyRegressor
// Dataset : RandomReg_100

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_DummyRegressor_RandomReg_100.exe ml2cpp-demo_DummyRegressor_RandomReg_100.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12", "Feature_13", "Feature_14", "Feature_15", "Feature_16", "Feature_17", "Feature_18", "Feature_19", "Feature_20", "Feature_21", "Feature_22", "Feature_23", "Feature_24", "Feature_25", "Feature_26", "Feature_27", "Feature_28", "Feature_29", "Feature_30", "Feature_31", "Feature_32", "Feature_33", "Feature_34", "Feature_35", "Feature_36", "Feature_37", "Feature_38", "Feature_39", "Feature_40", "Feature_41", "Feature_42", "Feature_43", "Feature_44", "Feature_45", "Feature_46", "Feature_47", "Feature_48", "Feature_49", "Feature_50", "Feature_51", "Feature_52", "Feature_53", "Feature_54", "Feature_55", "Feature_56", "Feature_57", "Feature_58", "Feature_59", "Feature_60", "Feature_61", "Feature_62", "Feature_63", "Feature_64", "Feature_65", "Feature_66", "Feature_67", "Feature_68", "Feature_69", "Feature_70", "Feature_71", "Feature_72", "Feature_73", "Feature_74", "Feature_75", "Feature_76", "Feature_77", "Feature_78", "Feature_79", "Feature_80", "Feature_81", "Feature_82", "Feature_83", "Feature_84", "Feature_85", "Feature_86", "Feature_87", "Feature_88", "Feature_89", "Feature_90", "Feature_91", "Feature_92", "Feature_93", "Feature_94", "Feature_95", "Feature_96", "Feature_97", "Feature_98", "Feature_99" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29, std::any Feature_30, std::any Feature_31, std::any Feature_32, std::any Feature_33, std::any Feature_34, std::any Feature_35, std::any Feature_36, std::any Feature_37, std::any Feature_38, std::any Feature_39, std::any Feature_40, std::any Feature_41, std::any Feature_42, std::any Feature_43, std::any Feature_44, std::any Feature_45, std::any Feature_46, std::any Feature_47, std::any Feature_48, std::any Feature_49, std::any Feature_50, std::any Feature_51, std::any Feature_52, std::any Feature_53, std::any Feature_54, std::any Feature_55, std::any Feature_56, std::any Feature_57, std::any Feature_58, std::any Feature_59, std::any Feature_60, std::any Feature_61, std::any Feature_62, std::any Feature_63, std::any Feature_64, std::any Feature_65, std::any Feature_66, std::any Feature_67, std::any Feature_68, std::any Feature_69, std::any Feature_70, std::any Feature_71, std::any Feature_72, std::any Feature_73, std::any Feature_74, std::any Feature_75, std::any Feature_76, std::any Feature_77, std::any Feature_78, std::any Feature_79, std::any Feature_80, std::any Feature_81, std::any Feature_82, std::any Feature_83, std::any Feature_84, std::any Feature_85, std::any Feature_86, std::any Feature_87, std::any Feature_88, std::any Feature_89, std::any Feature_90, std::any Feature_91, std::any Feature_92, std::any Feature_93, std::any Feature_94, std::any Feature_95, std::any Feature_96, std::any Feature_97, std::any Feature_98, std::any Feature_99) {

		tTable lTable;

		std::any  lEstimator = -11.471614782695335;
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0], iTable.at("Feature_13")[0], iTable.at("Feature_14")[0], iTable.at("Feature_15")[0], iTable.at("Feature_16")[0], iTable.at("Feature_17")[0], iTable.at("Feature_18")[0], iTable.at("Feature_19")[0], iTable.at("Feature_20")[0], iTable.at("Feature_21")[0], iTable.at("Feature_22")[0], iTable.at("Feature_23")[0], iTable.at("Feature_24")[0], iTable.at("Feature_25")[0], iTable.at("Feature_26")[0], iTable.at("Feature_27")[0], iTable.at("Feature_28")[0], iTable.at("Feature_29")[0], iTable.at("Feature_30")[0], iTable.at("Feature_31")[0], iTable.at("Feature_32")[0], iTable.at("Feature_33")[0], iTable.at("Feature_34")[0], iTable.at("Feature_35")[0], iTable.at("Feature_36")[0], iTable.at("Feature_37")[0], iTable.at("Feature_38")[0], iTable.at("Feature_39")[0], iTable.at("Feature_40")[0], iTable.at("Feature_41")[0], iTable.at("Feature_42")[0], iTable.at("Feature_43")[0], iTable.at("Feature_44")[0], iTable.at("Feature_45")[0], iTable.at("Feature_46")[0], iTable.at("Feature_47")[0], iTable.at("Feature_48")[0], iTable.at("Feature_49")[0], iTable.at("Feature_50")[0], iTable.at("Feature_51")[0], iTable.at("Feature_52")[0], iTable.at("Feature_53")[0], iTable.at("Feature_54")[0], iTable.at("Feature_55")[0], iTable.at("Feature_56")[0], iTable.at("Feature_57")[0], iTable.at("Feature_58")[0], iTable.at("Feature_59")[0], iTable.at("Feature_60")[0], iTable.at("Feature_61")[0], iTable.at("Feature_62")[0], iTable.at("Feature_63")[0], iTable.at("Feature_64")[0], iTable.at("Feature_65")[0], iTable.at("Feature_66")[0], iTable.at("Feature_67")[0], iTable.at("Feature_68")[0], iTable.at("Feature_69")[0], iTable.at("Feature_70")[0], iTable.at("Feature_71")[0], iTable.at("Feature_72")[0], iTable.at("Feature_73")[0], iTable.at("Feature_74")[0], iTable.at("Feature_75")[0], iTable.at("Feature_76")[0], iTable.at("Feature_77")[0], iTable.at("Feature_78")[0], iTable.at("Feature_79")[0], iTable.at("Feature_80")[0], iTable.at("Feature_81")[0], iTable.at("Feature_82")[0], iTable.at("Feature_83")[0], iTable.at("Feature_84")[0], iTable.at("Feature_85")[0], iTable.at("Feature_86")[0], iTable.at("Feature_87")[0], iTable.at("Feature_88")[0], iTable.at("Feature_89")[0], iTable.at("Feature_90")[0], iTable.at("Feature_91")[0], iTable.at("Feature_92")[0], iTable.at("Feature_93")[0], iTable.at("Feature_94")[0], iTable.at("Feature_95")[0], iTable.at("Feature_96")[0], iTable.at("Feature_97")[0], iTable.at("Feature_98")[0], iTable.at("Feature_99")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/RandomReg_100.csv");
	return 0;
}
