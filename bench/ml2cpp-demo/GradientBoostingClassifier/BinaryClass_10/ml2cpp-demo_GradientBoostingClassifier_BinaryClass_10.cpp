// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : GradientBoostingClassifier
// Dataset : BinaryClass_10

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_GradientBoostingClassifier_BinaryClass_10.exe ml2cpp-demo_GradientBoostingClassifier_BinaryClass_10.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1 };

		return lClasses;
	}

	namespace SubModel_0_0 {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 1 };
	
			return lClasses;
		}
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.15384615 }} ,
				{ 4 ,  {-2. }} ,
				{ 5 ,  {2. }} ,
				{ 7 ,  {2. }} ,
				{ 8 ,  {-2. }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = (Feature_9 <= 0.034406057093292475) ? ( (Feature_5 <= 2.3706862926483154) ? ( (Feature_5 <= -1.1672475934028625) ? ( 3 ) : ( 4 ) ) : ( 5 ) ) : ( (Feature_6 <= 1.9341034293174744) ? ( 7 ) : ( 8 ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { 
				"Score_0", "Score_1",
				"Proba_0", "Proba_1",
				"LogProba_0", "LogProba_1" };
	
			return lOutputs;
		}
	
		tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			auto lClasses = get_classes();
	
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			lTable["Score"] = { 
				lNodeValue [ 0 ],
				0.0 
			} ;
			lTable["Proba"] = { 
				std::any(),
				std::any() 
			} ;
	
			recompute_log_probas( lTable );
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_0_0
	

	namespace SubModel_1_0 {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 1 };
	
			return lClasses;
		}
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {-0.13847004 }} ,
				{ 4 ,  {-1.81873075 }} ,
				{ 5 ,  {1.81873075 }} ,
				{ 7 ,  {1.81873075 }} ,
				{ 8 ,  {-1.81873075 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = (Feature_9 <= 0.034406057093292475) ? ( (Feature_5 <= 2.3706862926483154) ? ( (Feature_5 <= -1.1672475934028625) ? ( 3 ) : ( 4 ) ) : ( 5 ) ) : ( (Feature_6 <= 1.9341034293174744) ? ( 7 ) : ( 8 ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { 
				"Score_0", "Score_1",
				"Proba_0", "Proba_1",
				"LogProba_0", "LogProba_1" };
	
			return lOutputs;
		}
	
		tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			auto lClasses = get_classes();
	
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			lTable["Score"] = { 
				lNodeValue [ 0 ],
				0.0 
			} ;
			lTable["Proba"] = { 
				std::any(),
				std::any() 
			} ;
	
			recompute_log_probas( lTable );
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace SubModel_1_0
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { 
			"Score_0", "Score_1",
			"Proba_0", "Proba_1",
			"LogProba_0", "LogProba_1",
			"Decision", "DecisionProba" };

		return lOutputs;
	}

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
		auto lClasses = get_classes();

		std::vector<tTable> lTreeScores = { 
			SubModel_0_0::compute_classification_scores(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			SubModel_1_0::compute_classification_scores(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9)
		};

		tTable lAggregatedTable = aggregate_gb_scores(lTreeScores, {"Proba", "Score"});

		auto lLogSumExp = ln( + exp(ln(0.5) + 0.1 * lAggregatedTable["Score"][ 0 ]) + exp(ln(0.5) + 0.1 * lAggregatedTable["Score"][ 1 ]));

		lAggregatedTable["Score"][ 0 ] = exp(ln(0.5) + 0.1 * lAggregatedTable["Score"][ 0 ] - lLogSumExp);

		lAggregatedTable["Score"][ 1 ] = exp(ln(0.5) + 0.1 * lAggregatedTable["Score"][ 1 ] - lLogSumExp);

		tTable lSoftMaxTable = soft_max( lAggregatedTable );

		lSoftMaxTable[ "Score" ] = lAggregatedTable[ "Score" ];


		tTable lTable = lSoftMaxTable;

		int lBestClass = get_arg_max( lTable["Proba"] );
		auto lDecision = lClasses[lBestClass];
		lTable["Decision"] = { lDecision } ;
		lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };

		recompute_log_probas( lTable );

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/BinaryClass_10.csv");
	return 0;
}
