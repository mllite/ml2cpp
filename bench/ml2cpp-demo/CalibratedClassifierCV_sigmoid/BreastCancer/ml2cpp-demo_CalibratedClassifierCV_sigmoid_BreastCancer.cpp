// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : CalibratedClassifierCV_sigmoid
// Dataset : BreastCancer

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_CalibratedClassifierCV_sigmoid_BreastCancer.exe ml2cpp-demo_CalibratedClassifierCV_sigmoid_BreastCancer.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1 };

		return lClasses;
	}

	namespace BestEstimator_0 {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 1 };
	
			return lClasses;
		}
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 4 ,  {0.0, 1.0 }} ,
				{ 6 ,  {1.0, 0.0 }} ,
				{ 7 ,  {0.0, 1.0 }} ,
				{ 10 ,  {0.0, 1.0 }} ,
				{ 11 ,  {1.0, 0.0 }} ,
				{ 13 ,  {1.0, 0.0 }} ,
				{ 14 ,  {0.0, 1.0 }} ,
				{ 17 ,  {0.0, 1.0 }} ,
				{ 18 ,  {1.0, 0.0 }} ,
				{ 19 ,  {1.0, 0.0 }} ,
				{ 21 ,  {0.0, 1.0 }} ,
				{ 23 ,  {0.0, 1.0 }} ,
				{ 26 ,  {1.0, 0.0 }} ,
				{ 27 ,  {0.0, 1.0 }} ,
				{ 28 ,  {1.0, 0.0 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29) {
			int lNodeIndex = (Feature_27 <= 0.14695000648498535) ? ( (Feature_23 <= 953.9500122070312) ? ( (Feature_27 <= 0.12230000272393227) ? ( (Feature_10 <= 0.6430999934673309) ? ( 4 ) : ( (Feature_1 <= 18.934999465942383) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_10 <= 0.40389999747276306) ? ( (Feature_21 <= 33.91499900817871) ? ( 10 ) : ( 11 ) ) : ( (Feature_7 <= 0.06902500055730343) ? ( 13 ) : ( 14 ) ) ) ) : ( (Feature_26 <= 0.190700002014637) ? ( (Feature_22 <= 122.05000305175781) ? ( 17 ) : ( 18 ) ) : ( 19 ) ) ) : ( (Feature_0 <= 10.405499935150146) ? ( 21 ) : ( (Feature_26 <= 0.20340000092983246) ? ( 23 ) : ( (Feature_7 <= 0.05633999966084957) ? ( (Feature_7 <= 0.054854998365044594) ? ( 26 ) : ( 27 ) ) : ( 28 ) ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12", "Feature_13", "Feature_14", "Feature_15", "Feature_16", "Feature_17", "Feature_18", "Feature_19", "Feature_20", "Feature_21", "Feature_22", "Feature_23", "Feature_24", "Feature_25", "Feature_26", "Feature_27", "Feature_28", "Feature_29" };
	
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
	
		tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29) {
			auto lClasses = get_classes();
	
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9, Feature_10, Feature_11, Feature_12, Feature_13, Feature_14, Feature_15, Feature_16, Feature_17, Feature_18, Feature_19, Feature_20, Feature_21, Feature_22, Feature_23, Feature_24, Feature_25, Feature_26, Feature_27, Feature_28, Feature_29);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			lTable["Score"] = { 
				std::any(),
				std::any() 
			} ;
			lTable["Proba"] = { 
				1.0 - logistic(5.756413424714995 * coalesce( std::any() , lNodeValue [ 1 ] ) + -2.5569469411985817),
				logistic(5.756413424714995 * coalesce( std::any() , lNodeValue [ 1 ] ) + -2.5569469411985817) 
			} ;
			int lBestClass = get_arg_max( lTable["Proba"] );
			auto lDecision = lClasses[lBestClass];
			lTable["Decision"] = { lDecision } ;
			lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };
	
			recompute_log_probas( lTable );
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0], iTable.at("Feature_13")[0], iTable.at("Feature_14")[0], iTable.at("Feature_15")[0], iTable.at("Feature_16")[0], iTable.at("Feature_17")[0], iTable.at("Feature_18")[0], iTable.at("Feature_19")[0], iTable.at("Feature_20")[0], iTable.at("Feature_21")[0], iTable.at("Feature_22")[0], iTable.at("Feature_23")[0], iTable.at("Feature_24")[0], iTable.at("Feature_25")[0], iTable.at("Feature_26")[0], iTable.at("Feature_27")[0], iTable.at("Feature_28")[0], iTable.at("Feature_29")[0]);
	
			return lTable;
		}
	
	} // eof namespace BestEstimator_0
	

	namespace BestEstimator_1 {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 1 };
	
			return lClasses;
		}
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {1.0, 0.0 }} ,
				{ 5 ,  {0.0, 1.0 }} ,
				{ 7 ,  {0.0, 1.0 }} ,
				{ 8 ,  {0.6666666666666666, 0.3333333333333333 }} ,
				{ 9 ,  {1.0, 0.0 }} ,
				{ 14 ,  {0.0, 1.0 }} ,
				{ 15 ,  {1.0, 0.0 }} ,
				{ 16 ,  {1.0, 0.0 }} ,
				{ 17 ,  {1.0, 0.0 }} ,
				{ 18 ,  {0.0, 1.0 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29) {
			int lNodeIndex = (Feature_27 <= 0.1436000019311905) ? ( (Feature_23 <= 961.5500183105469) ? ( (Feature_18 <= 0.008710499852895737) ? ( 3 ) : ( (Feature_27 <= 0.1318499967455864) ? ( 5 ) : ( (Feature_23 <= 779.75) ? ( 7 ) : ( 8 ) ) ) ) : ( 9 ) ) : ( (Feature_16 <= 0.13565000146627426) ? ( (Feature_6 <= 0.08810999989509583) ? ( (Feature_28 <= 0.3084000051021576) ? ( (Feature_20 <= 18.149999618530273) ? ( 14 ) : ( 15 ) ) : ( 16 ) ) : ( 17 ) ) : ( 18 ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12", "Feature_13", "Feature_14", "Feature_15", "Feature_16", "Feature_17", "Feature_18", "Feature_19", "Feature_20", "Feature_21", "Feature_22", "Feature_23", "Feature_24", "Feature_25", "Feature_26", "Feature_27", "Feature_28", "Feature_29" };
	
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
	
		tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29) {
			auto lClasses = get_classes();
	
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9, Feature_10, Feature_11, Feature_12, Feature_13, Feature_14, Feature_15, Feature_16, Feature_17, Feature_18, Feature_19, Feature_20, Feature_21, Feature_22, Feature_23, Feature_24, Feature_25, Feature_26, Feature_27, Feature_28, Feature_29);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			lTable["Score"] = { 
				std::any(),
				std::any() 
			} ;
			lTable["Proba"] = { 
				1.0 - logistic(4.699592373623906 * coalesce( std::any() , lNodeValue [ 1 ] ) + -1.9242110761990234),
				logistic(4.699592373623906 * coalesce( std::any() , lNodeValue [ 1 ] ) + -1.9242110761990234) 
			} ;
			int lBestClass = get_arg_max( lTable["Proba"] );
			auto lDecision = lClasses[lBestClass];
			lTable["Decision"] = { lDecision } ;
			lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };
	
			recompute_log_probas( lTable );
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0], iTable.at("Feature_13")[0], iTable.at("Feature_14")[0], iTable.at("Feature_15")[0], iTable.at("Feature_16")[0], iTable.at("Feature_17")[0], iTable.at("Feature_18")[0], iTable.at("Feature_19")[0], iTable.at("Feature_20")[0], iTable.at("Feature_21")[0], iTable.at("Feature_22")[0], iTable.at("Feature_23")[0], iTable.at("Feature_24")[0], iTable.at("Feature_25")[0], iTable.at("Feature_26")[0], iTable.at("Feature_27")[0], iTable.at("Feature_28")[0], iTable.at("Feature_29")[0]);
	
			return lTable;
		}
	
	} // eof namespace BestEstimator_1
	

	namespace BestEstimator_2 {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 1 };
	
			return lClasses;
		}
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 4 ,  {0.0, 1.0 }} ,
				{ 6 ,  {0.06666666666666667, 0.9333333333333333 }} ,
				{ 7 ,  {0.75, 0.25 }} ,
				{ 9 ,  {0.0, 1.0 }} ,
				{ 11 ,  {0.0, 1.0 }} ,
				{ 12 ,  {1.0, 0.0 }} ,
				{ 13 ,  {1.0, 0.0 }} ,
				{ 16 ,  {0.0, 1.0 }} ,
				{ 19 ,  {0.0, 1.0 }} ,
				{ 20 ,  {1.0, 0.0 }} ,
				{ 21 ,  {1.0, 0.0 }} ,
				{ 22 ,  {0.0, 1.0 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29) {
			int lNodeIndex = (Feature_27 <= 0.14239999651908875) ? ( (Feature_23 <= 1058.0) ? ( (Feature_13 <= 48.70000076293945) ? ( (Feature_27 <= 0.1221500001847744) ? ( 4 ) : ( (Feature_10 <= 0.41290000081062317) ? ( 6 ) : ( 7 ) ) ) : ( (Feature_4 <= 0.09071999788284302) ? ( 9 ) : ( (Feature_21 <= 20.864999771118164) ? ( 11 ) : ( 12 ) ) ) ) : ( 13 ) ) : ( (Feature_16 <= 0.12629999965429306) ? ( (Feature_12 <= 1.2384999990463257) ? ( 16 ) : ( (Feature_1 <= 15.345000267028809) ? ( (Feature_7 <= 0.06742499954998493) ? ( 19 ) : ( 20 ) ) : ( 21 ) ) ) : ( 22 ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12", "Feature_13", "Feature_14", "Feature_15", "Feature_16", "Feature_17", "Feature_18", "Feature_19", "Feature_20", "Feature_21", "Feature_22", "Feature_23", "Feature_24", "Feature_25", "Feature_26", "Feature_27", "Feature_28", "Feature_29" };
	
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
	
		tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29) {
			auto lClasses = get_classes();
	
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9, Feature_10, Feature_11, Feature_12, Feature_13, Feature_14, Feature_15, Feature_16, Feature_17, Feature_18, Feature_19, Feature_20, Feature_21, Feature_22, Feature_23, Feature_24, Feature_25, Feature_26, Feature_27, Feature_28, Feature_29);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			lTable["Score"] = { 
				std::any(),
				std::any() 
			} ;
			lTable["Proba"] = { 
				1.0 - logistic(5.460676238424655 * coalesce( std::any() , lNodeValue [ 1 ] ) + -2.2609055007805776),
				logistic(5.460676238424655 * coalesce( std::any() , lNodeValue [ 1 ] ) + -2.2609055007805776) 
			} ;
			int lBestClass = get_arg_max( lTable["Proba"] );
			auto lDecision = lClasses[lBestClass];
			lTable["Decision"] = { lDecision } ;
			lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };
	
			recompute_log_probas( lTable );
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0], iTable.at("Feature_13")[0], iTable.at("Feature_14")[0], iTable.at("Feature_15")[0], iTable.at("Feature_16")[0], iTable.at("Feature_17")[0], iTable.at("Feature_18")[0], iTable.at("Feature_19")[0], iTable.at("Feature_20")[0], iTable.at("Feature_21")[0], iTable.at("Feature_22")[0], iTable.at("Feature_23")[0], iTable.at("Feature_24")[0], iTable.at("Feature_25")[0], iTable.at("Feature_26")[0], iTable.at("Feature_27")[0], iTable.at("Feature_28")[0], iTable.at("Feature_29")[0]);
	
			return lTable;
		}
	
	} // eof namespace BestEstimator_2
	

	namespace BestEstimator_3 {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 1 };
	
			return lClasses;
		}
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 4 ,  {1.0, 0.0 }} ,
				{ 5 ,  {0.0, 1.0 }} ,
				{ 7 ,  {0.0, 1.0 }} ,
				{ 9 ,  {0.047619047619047616, 0.9523809523809523 }} ,
				{ 10 ,  {1.0, 0.0 }} ,
				{ 11 ,  {1.0, 0.0 }} ,
				{ 14 ,  {0.0, 1.0 }} ,
				{ 15 ,  {1.0, 0.0 }} ,
				{ 16 ,  {0.0, 1.0 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29) {
			int lNodeIndex = (Feature_27 <= 0.14559999853372574) ? ( (Feature_23 <= 1058.0) ? ( (Feature_18 <= 0.010340000037103891) ? ( (Feature_7 <= 0.03027999959886074) ? ( 4 ) : ( 5 ) ) : ( (Feature_13 <= 32.98499870300293) ? ( 7 ) : ( (Feature_21 <= 29.18000030517578) ? ( 9 ) : ( 10 ) ) ) ) : ( 11 ) ) : ( (Feature_16 <= 0.13565000146627426) ? ( (Feature_26 <= 0.20340000092983246) ? ( 14 ) : ( 15 ) ) : ( 16 ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12", "Feature_13", "Feature_14", "Feature_15", "Feature_16", "Feature_17", "Feature_18", "Feature_19", "Feature_20", "Feature_21", "Feature_22", "Feature_23", "Feature_24", "Feature_25", "Feature_26", "Feature_27", "Feature_28", "Feature_29" };
	
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
	
		tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29) {
			auto lClasses = get_classes();
	
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9, Feature_10, Feature_11, Feature_12, Feature_13, Feature_14, Feature_15, Feature_16, Feature_17, Feature_18, Feature_19, Feature_20, Feature_21, Feature_22, Feature_23, Feature_24, Feature_25, Feature_26, Feature_27, Feature_28, Feature_29);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			lTable["Score"] = { 
				std::any(),
				std::any() 
			} ;
			lTable["Proba"] = { 
				1.0 - logistic(4.949259195511302 * coalesce( std::any() , lNodeValue [ 1 ] ) + -2.0321952231560854),
				logistic(4.949259195511302 * coalesce( std::any() , lNodeValue [ 1 ] ) + -2.0321952231560854) 
			} ;
			int lBestClass = get_arg_max( lTable["Proba"] );
			auto lDecision = lClasses[lBestClass];
			lTable["Decision"] = { lDecision } ;
			lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };
	
			recompute_log_probas( lTable );
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0], iTable.at("Feature_13")[0], iTable.at("Feature_14")[0], iTable.at("Feature_15")[0], iTable.at("Feature_16")[0], iTable.at("Feature_17")[0], iTable.at("Feature_18")[0], iTable.at("Feature_19")[0], iTable.at("Feature_20")[0], iTable.at("Feature_21")[0], iTable.at("Feature_22")[0], iTable.at("Feature_23")[0], iTable.at("Feature_24")[0], iTable.at("Feature_25")[0], iTable.at("Feature_26")[0], iTable.at("Feature_27")[0], iTable.at("Feature_28")[0], iTable.at("Feature_29")[0]);
	
			return lTable;
		}
	
	} // eof namespace BestEstimator_3
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12", "Feature_13", "Feature_14", "Feature_15", "Feature_16", "Feature_17", "Feature_18", "Feature_19", "Feature_20", "Feature_21", "Feature_22", "Feature_23", "Feature_24", "Feature_25", "Feature_26", "Feature_27", "Feature_28", "Feature_29" };

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

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29) {
		auto lClasses = get_classes();

		std::vector<tTable> lBaseScores = { 
			BestEstimator_0::compute_classification_scores(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9, Feature_10, Feature_11, Feature_12, Feature_13, Feature_14, Feature_15, Feature_16, Feature_17, Feature_18, Feature_19, Feature_20, Feature_21, Feature_22, Feature_23, Feature_24, Feature_25, Feature_26, Feature_27, Feature_28, Feature_29),
			BestEstimator_1::compute_classification_scores(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9, Feature_10, Feature_11, Feature_12, Feature_13, Feature_14, Feature_15, Feature_16, Feature_17, Feature_18, Feature_19, Feature_20, Feature_21, Feature_22, Feature_23, Feature_24, Feature_25, Feature_26, Feature_27, Feature_28, Feature_29),
			BestEstimator_2::compute_classification_scores(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9, Feature_10, Feature_11, Feature_12, Feature_13, Feature_14, Feature_15, Feature_16, Feature_17, Feature_18, Feature_19, Feature_20, Feature_21, Feature_22, Feature_23, Feature_24, Feature_25, Feature_26, Feature_27, Feature_28, Feature_29),
			BestEstimator_3::compute_classification_scores(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9, Feature_10, Feature_11, Feature_12, Feature_13, Feature_14, Feature_15, Feature_16, Feature_17, Feature_18, Feature_19, Feature_20, Feature_21, Feature_22, Feature_23, Feature_24, Feature_25, Feature_26, Feature_27, Feature_28, Feature_29)
		};

		tTable lAggregatedTable = aggregate_calibrated_scores(lBaseScores, {"Proba", "Score"});


		tTable lTable = lAggregatedTable;

		int lBestClass = get_arg_max( lTable["Proba"] );
		auto lDecision = lClasses[lBestClass];
		lTable["Decision"] = { lDecision } ;
		lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };

		recompute_log_probas( lTable );

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0], iTable.at("Feature_13")[0], iTable.at("Feature_14")[0], iTable.at("Feature_15")[0], iTable.at("Feature_16")[0], iTable.at("Feature_17")[0], iTable.at("Feature_18")[0], iTable.at("Feature_19")[0], iTable.at("Feature_20")[0], iTable.at("Feature_21")[0], iTable.at("Feature_22")[0], iTable.at("Feature_23")[0], iTable.at("Feature_24")[0], iTable.at("Feature_25")[0], iTable.at("Feature_26")[0], iTable.at("Feature_27")[0], iTable.at("Feature_28")[0], iTable.at("Feature_29")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/BreastCancer.csv");
	return 0;
}
