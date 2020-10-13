// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : MLPRegressor
// Dataset : diabetes

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_MLPRegressor_diabetes.exe ml2cpp-demo_MLPRegressor_diabetes.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	namespace InputLayer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "input_0", "input_1", "input_2", "input_3", "input_4", "input_5", "input_6", "input_7", "input_8", "input_9" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
	
			tTable lTable;
	
			lTable["input_0"] = { Feature_0 };
			lTable["input_1"] = { Feature_1 };
			lTable["input_2"] = { Feature_2 };
			lTable["input_3"] = { Feature_3 };
			lTable["input_4"] = { Feature_4 };
			lTable["input_5"] = { Feature_5 };
			lTable["input_6"] = { Feature_6 };
			lTable["input_7"] = { Feature_7 };
			lTable["input_8"] = { Feature_8 };
			lTable["input_9"] = { Feature_9 };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace InputLayer
	

	namespace HiddenLayer_1 {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "input_0", "input_1", "input_2", "input_3", "input_4", "input_5", "input_6", "input_7", "input_8", "input_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "output_1_0", "output_1_1", "output_1_2" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any input_0, std::any input_1, std::any input_2, std::any input_3, std::any input_4, std::any input_5, std::any input_6, std::any input_7, std::any input_8, std::any input_9) {
	
			tTable lTable;
	
			double output_1_0_BA = -0.09875367154272953 * input_0 + -0.4339055907906126 * input_1 + -0.5374070809517781 * input_2 + -0.6010101948280507 * input_3 + 0.25506300743779625 * input_4 + 0.5277822475570382 * input_5 + -0.26776266378562114 * input_6 + -0.054437906543034306 * input_7 + -0.021645156933573835 * input_8 + -0.23616034790043028 * input_9 + -0.317960748726666;
	
			double output_1_1_BA = 0.13157933891994325 * input_0 + 0.008428130490510125 * input_1 + -0.42319157439853494 * input_2 + 0.3603005831706481 * input_3 + 0.18973064001521714 * input_4 + 0.50898879450643 * input_5 + -0.3034063209494553 * input_6 + -0.64902365221739 * input_7 + 0.5726749037111144 * input_8 + -0.09596343656170843 * input_9 + -0.4152095736844888;
	
			double output_1_2_BA = 1.4071395807532576 * input_0 + -17.700975742762562 * input_1 + 42.20072380742929 * input_2 + 23.86526373182992 * input_3 + -25.10549979864037 * input_4 + 13.651526668943344 * input_5 + -20.31738476071187 * input_6 + -5.874100743335809 * input_7 + 54.362721655006254 * input_8 + 6.760053115358735 * input_9 + 5.196215012185789;
	
			lTable["output_1_0"] = { relu(output_1_0_BA) };
			lTable["output_1_1"] = { relu(output_1_1_BA) };
			lTable["output_1_2"] = { relu(output_1_2_BA) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("input_0")[0], iTable.at("input_1")[0], iTable.at("input_2")[0], iTable.at("input_3")[0], iTable.at("input_4")[0], iTable.at("input_5")[0], iTable.at("input_6")[0], iTable.at("input_7")[0], iTable.at("input_8")[0], iTable.at("input_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace HiddenLayer_1
	

	namespace HiddenLayer_2 {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "output_1_0", "output_1_1", "output_1_2" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "output_2_0", "output_2_1", "output_2_2", "output_2_3", "output_2_4" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any output_1_0, std::any output_1_1, std::any output_1_2) {
	
			tTable lTable;
	
			double output_2_0_BA = -0.740624973048512 * output_1_0 + 0.5914611384689146 * output_1_1 + -0.08240700119151911 * output_1_2 + -0.30926147194668663;
	
			double output_2_1_BA = -0.1493925454743893 * output_1_0 + 0.6651783323618027 * output_1_1 + -1.1259388742672791 * output_1_2 + -17.220912806105556;
	
			double output_2_2_BA = 0.003345110305414898 * output_1_0 + 0.45776703285469333 * output_1_1 + 5.435239375511152 * output_1_2 + 11.830091994659053;
	
			double output_2_3_BA = 0.11108931049766428 * output_1_0 + -0.504737903275837 * output_1_1 + -0.406627853329003 * output_1_2 + -0.7964330424336139;
	
			double output_2_4_BA = -0.6221494319620285 * output_1_0 + 0.4332107523505195 * output_1_1 + -0.6588732113056165 * output_1_2 + -0.5537916280920224;
	
			lTable["output_2_0"] = { relu(output_2_0_BA) };
			lTable["output_2_1"] = { relu(output_2_1_BA) };
			lTable["output_2_2"] = { relu(output_2_2_BA) };
			lTable["output_2_3"] = { relu(output_2_3_BA) };
			lTable["output_2_4"] = { relu(output_2_4_BA) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("output_1_0")[0], iTable.at("output_1_1")[0], iTable.at("output_1_2")[0]);
	
			return lTable;
		}
	
	} // eof namespace HiddenLayer_2
	

	namespace OutputLayer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "output_2_0", "output_2_1", "output_2_2", "output_2_3", "output_2_4" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any output_2_0, std::any output_2_1, std::any output_2_2, std::any output_2_3, std::any output_2_4) {
	
			tTable lTable;
	
			double output_3_0_BA = -0.20671372846156774 * output_2_0 + 4.3645667795077125 * output_2_1 + 2.3587658271051963 * output_2_2 + 0.7008352728432226 * output_2_3 + -0.2489737445348888 * output_2_4 + 54.71210230286189;
	
			lTable["Estimator"] = { output_3_0_BA };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("output_2_0")[0], iTable.at("output_2_1")[0], iTable.at("output_2_2")[0], iTable.at("output_2_3")[0], iTable.at("output_2_4")[0]);
	
			return lTable;
		}
	
	} // eof namespace OutputLayer
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
		tTable lTable_InputLayer = InputLayer::compute_features(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);

		tTable lTable_HiddenLayer_1 = HiddenLayer_1::compute_model_outputs_from_table( lTable_InputLayer );

		tTable lTable_HiddenLayer_2 = HiddenLayer_2::compute_model_outputs_from_table( lTable_HiddenLayer_1 );

		tTable lTable_OutputLayer = OutputLayer::compute_model_outputs_from_table( lTable_HiddenLayer_2 );


		tTable lTable;

		std::any  lEstimator = lTable_OutputLayer[ "Estimator" ][0];
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/diabetes.csv");
	return 0;
}
