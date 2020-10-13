// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : LGBMRegressor
// Dataset : RandomReg_10

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_LGBMRegressor_RandomReg_10.exe ml2cpp-demo_LGBMRegressor_RandomReg_10.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	namespace LGBM_Tree_0 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {32.746200772783446 }} ,
				{ 4 ,  {16.35685888558626 }} ,
				{ 5 ,  {26.55858030807355 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( ( Feature_2 <= 0.4633442915635686 ) ? ( ( ( Feature_6 <= -0.19785263541739564 ) ? ( 4 ) : ( 5 ) ) ) : ( 3 ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace LGBM_Tree_0
	

	namespace LGBM_Tree_1 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {6.023330282395886 }} ,
				{ 4 ,  {-9.546544489860535 }} ,
				{ 5 ,  {0.14509103724668768 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( ( Feature_2 <= 0.4633442915635686 ) ? ( ( ( Feature_6 <= -0.19785263541739564 ) ? ( 4 ) : ( 5 ) ) ) : ( 3 ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace LGBM_Tree_1
	

	namespace LGBM_Tree_2 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {5.722164007084024 }} ,
				{ 4 ,  {-7.8801029828878555 }} ,
				{ 5 ,  {1.1954605499039526 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( ( Feature_2 <= 0.4633442915635686 ) ? ( ( ( Feature_5 <= 0.45500511241557645 ) ? ( 4 ) : ( 5 ) ) ) : ( 3 ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace LGBM_Tree_2
	

	namespace LGBM_Tree_3 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-6.086806035262567 }} ,
				{ 6 ,  {-0.8521560813441422 }} ,
				{ 7 ,  {9.623245660066605 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( ( Feature_1 <= -0.6104019941272986 ) ? ( 2 ) : ( ( ( Feature_2 <= 0.4633442915635686 ) ? ( 6 ) : ( 7 ) ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace LGBM_Tree_3
	

	namespace LGBM_Tree_4 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-4.65805237342914 }} ,
				{ 6 ,  {-1.8667952474951743 }} ,
				{ 7 ,  {8.542741489410401 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( ( Feature_8 <= -0.15789261826699202 ) ? ( 2 ) : ( ( ( Feature_2 <= 0.18410375978829144 ) ? ( 6 ) : ( 7 ) ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace LGBM_Tree_4
	

	namespace LGBM_Tree_5 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-4.193964002723209 }} ,
				{ 6 ,  {0.2966920852661133 }} ,
				{ 7 ,  {7.866703109741211 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( ( Feature_1 <= -0.19500725638808467 ) ? ( 2 ) : ( ( ( Feature_8 <= -0.08420545265254369 ) ? ( 6 ) : ( 7 ) ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace LGBM_Tree_5
	

	namespace LGBM_Tree_6 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {5.493027937412262 }} ,
				{ 4 ,  {-6.561676018238067 }} ,
				{ 5 ,  {1.9566135623238303 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( ( Feature_2 <= 0.5585674071555415 ) ? ( ( ( Feature_7 <= 0.16329535342121068 ) ? ( 4 ) : ( 5 ) ) ) : ( 3 ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace LGBM_Tree_6
	

	namespace LGBM_Tree_7 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-5.50080465608173 }} ,
				{ 6 ,  {-2.7341144788832894 }} ,
				{ 7 ,  {6.435566604137421 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( ( Feature_1 <= -0.6104019941272986 ) ? ( 2 ) : ( ( ( Feature_8 <= -0.15789261826699202 ) ? ( 6 ) : ( 7 ) ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace LGBM_Tree_7
	

	namespace LGBM_Tree_8 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-4.967426937421163 }} ,
				{ 6 ,  {-0.6187176295689175 }} ,
				{ 7 ,  {7.561222980239176 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( ( Feature_4 <= -0.5162992655484951 ) ? ( 2 ) : ( ( ( Feature_2 <= 0.4633442915635686 ) ? ( 6 ) : ( 7 ) ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace LGBM_Tree_8
	

	namespace LGBM_Tree_9 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-6.317852896735783 }} ,
				{ 6 ,  {-2.838640162785506 }} ,
				{ 7 ,  {7.166515947977702 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( ( Feature_5 <= -0.4875688158672278 ) ? ( 2 ) : ( ( ( Feature_8 <= -0.15789261826699202 ) ? ( 6 ) : ( 7 ) ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace LGBM_Tree_9
	

	namespace LGBM_Tree_10 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-3.7725048169111597 }} ,
				{ 6 ,  {0.43184781528654553 }} ,
				{ 7 ,  {6.902944211959839 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( ( Feature_1 <= -0.19500725638808467 ) ? ( 2 ) : ( ( ( Feature_8 <= -0.08420545265254369 ) ? ( 6 ) : ( 7 ) ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace LGBM_Tree_10
	

	namespace LGBM_Tree_11 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 3 ,  {4.561142703794665 }} ,
				{ 4 ,  {-6.227999674862829 }} ,
				{ 5 ,  {1.9608283829689026 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( ( Feature_2 <= 0.4633442915635686 ) ? ( ( ( Feature_5 <= 0.637277131244996 ) ? ( 4 ) : ( 5 ) ) ) : ( 3 ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace LGBM_Tree_11
	

	namespace LGBM_Tree_12 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-4.607918028235436 }} ,
				{ 6 ,  {-0.47535212093165946 }} ,
				{ 7 ,  {6.888518155162984 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( ( Feature_4 <= -0.5162992655484951 ) ? ( 2 ) : ( ( ( Feature_2 <= 0.4633442915635686 ) ? ( 6 ) : ( 7 ) ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace LGBM_Tree_12
	

	namespace LGBM_Tree_13 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-3.5869268933931986 }} ,
				{ 6 ,  {0.42814759643515576 }} ,
				{ 7 ,  {6.544952235221863 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( ( Feature_1 <= -0.19500725638808467 ) ? ( 2 ) : ( ( ( Feature_8 <= -0.08420545265254369 ) ? ( 6 ) : ( 7 ) ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace LGBM_Tree_13
	

	namespace LGBM_Tree_14 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-5.782482641722475 }} ,
				{ 6 ,  {-2.475708982245676 }} ,
				{ 7 ,  {6.440923217137655 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( ( Feature_5 <= -0.4875688158672278 ) ? ( 2 ) : ( ( ( Feature_8 <= -0.15789261826699202 ) ? ( 6 ) : ( 7 ) ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace LGBM_Tree_14
	

	namespace LGBM_Tree_15 {
	
		typedef std::vector<double> tNodeData;
		std::map<int, tNodeData> Decision_Tree_Node_data = {
				{ 2 ,  {-4.313408274650574 }} ,
				{ 6 ,  {-0.4734426932675498 }} ,
				{ 7 ,  {6.484483802047643 }} 
		};
		
	
		int get_decision_tree_node_index(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = ( ( Feature_4 <= -0.5162992655484951 ) ? ( 2 ) : ( ( ( Feature_2 <= 0.4633442915635686 ) ? ( 6 ) : ( 7 ) ) ) );
		
			return lNodeIndex;
		}
		
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "Estimator" };
	
			return lOutputs;
		}
	
		tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
			int lNodeIndex = get_decision_tree_node_index(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9);
	
			std::vector<double> lNodeValue = Decision_Tree_Node_data[ lNodeIndex ];
	
	
			tTable lTable;
	
			std::any  lEstimator = lNodeValue [ 0 ];
			lTable[ "Estimator" ] = { lEstimator };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);
	
			return lTable;
		}
	
	} // eof namespace LGBM_Tree_15
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
		std::vector<tTable> lTreeScores = { 
			LGBM_Tree_0::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			LGBM_Tree_1::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			LGBM_Tree_2::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			LGBM_Tree_3::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			LGBM_Tree_4::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			LGBM_Tree_5::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			LGBM_Tree_6::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			LGBM_Tree_7::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			LGBM_Tree_8::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			LGBM_Tree_9::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			LGBM_Tree_10::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			LGBM_Tree_11::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			LGBM_Tree_12::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			LGBM_Tree_13::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			LGBM_Tree_14::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9),
			LGBM_Tree_15::compute_regression(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9)
		};

		tTable lAggregatedTable = aggregate_lgb_scores(lTreeScores, {"Estimator"});


		tTable lTable;

		std::any  lEstimator = lAggregatedTable["Estimator"][0];
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/RandomReg_10.csv");
	return 0;
}
