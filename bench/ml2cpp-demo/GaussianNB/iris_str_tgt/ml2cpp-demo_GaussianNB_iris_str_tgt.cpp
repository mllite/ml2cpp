// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : GaussianNB
// Dataset : iris_str_tgt

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_GaussianNB_iris_str_tgt.exe ml2cpp-demo_GaussianNB_iris_str_tgt.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { CLASS_0, CLASS_1, CLASS_2 };

		return lClasses;
	}

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { 
			"Score_CLASS_0", "Score_CLASS_1", "Score_CLASS_2",
			"Proba_CLASS_0", "Proba_CLASS_1", "Proba_CLASS_2",
			"LogProba_CLASS_0", "LogProba_CLASS_1", "LogProba_CLASS_2",
			"Decision", "DecisionProba" };

		return lOutputs;
	}

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3) {
		auto lClasses = get_classes();

		tTable lLogLikelihoodTable = tTable();

		lLogLikelihoodTable["Score"] = {
			-1.1765738301378215 + log_normal_cdf( Feature_0 , 4.95945945945946 , 0.12078889993257921 ) + log_normal_cdf( Feature_1 , 3.42972972972973 , 0.15073776771928485 ) + log_normal_cdf( Feature_2 , 1.4837837837837833 , 0.026764064286121922 ) + log_normal_cdf( Feature_3 , 0.26216216216216226 , 0.012081814468736983 ),
			-1.0986122886681098 + log_normal_cdf( Feature_0 , 5.914999999999999 , 0.2922750029274661 ) + log_normal_cdf( Feature_1 , 2.7600000000000007 , 0.10790000292746597 ) + log_normal_cdf( Feature_2 , 4.245 , 0.22997500292746606 ) + log_normal_cdf( Feature_3 , 1.325 , 0.04237500292746598 ),
			-1.0262916270884836 + log_normal_cdf( Feature_0 , 6.548837209302325 , 0.35831260433363155 ) + log_normal_cdf( Feature_1 , 2.9674418604651165 , 0.09940508675656276 ) + log_normal_cdf( Feature_2 , 5.502325581395348 , 0.23976203645910477 ) + log_normal_cdf( Feature_3 , 2.01860465116279 , 0.0787236373244373 ) 
		};

		tTable lSoftMaxTable = soft_max(lLogLikelihoodTable);


		tTable lTable = lSoftMaxTable;

		int lBestClass = get_arg_max( lTable["Proba"] );
		auto lDecision = lClasses[lBestClass];
		lTable["Decision"] = { lDecision } ;
		lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };

		recompute_log_probas( lTable );

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/iris_str_tgt.csv");
	return 0;
}