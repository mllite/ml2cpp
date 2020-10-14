// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : MLPClassifier
// Dataset : BreastCancer

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_MLPClassifier_BreastCancer.exe ml2cpp-demo_MLPClassifier_BreastCancer.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1 };

		return lClasses;
	}

	namespace InputLayer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12", "Feature_13", "Feature_14", "Feature_15", "Feature_16", "Feature_17", "Feature_18", "Feature_19", "Feature_20", "Feature_21", "Feature_22", "Feature_23", "Feature_24", "Feature_25", "Feature_26", "Feature_27", "Feature_28", "Feature_29" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "input_0", "input_1", "input_2", "input_3", "input_4", "input_5", "input_6", "input_7", "input_8", "input_9", "input_10", "input_11", "input_12", "input_13", "input_14", "input_15", "input_16", "input_17", "input_18", "input_19", "input_20", "input_21", "input_22", "input_23", "input_24", "input_25", "input_26", "input_27", "input_28", "input_29" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29) {
	
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
			lTable["input_10"] = { Feature_10 };
			lTable["input_11"] = { Feature_11 };
			lTable["input_12"] = { Feature_12 };
			lTable["input_13"] = { Feature_13 };
			lTable["input_14"] = { Feature_14 };
			lTable["input_15"] = { Feature_15 };
			lTable["input_16"] = { Feature_16 };
			lTable["input_17"] = { Feature_17 };
			lTable["input_18"] = { Feature_18 };
			lTable["input_19"] = { Feature_19 };
			lTable["input_20"] = { Feature_20 };
			lTable["input_21"] = { Feature_21 };
			lTable["input_22"] = { Feature_22 };
			lTable["input_23"] = { Feature_23 };
			lTable["input_24"] = { Feature_24 };
			lTable["input_25"] = { Feature_25 };
			lTable["input_26"] = { Feature_26 };
			lTable["input_27"] = { Feature_27 };
			lTable["input_28"] = { Feature_28 };
			lTable["input_29"] = { Feature_29 };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0], iTable.at("Feature_13")[0], iTable.at("Feature_14")[0], iTable.at("Feature_15")[0], iTable.at("Feature_16")[0], iTable.at("Feature_17")[0], iTable.at("Feature_18")[0], iTable.at("Feature_19")[0], iTable.at("Feature_20")[0], iTable.at("Feature_21")[0], iTable.at("Feature_22")[0], iTable.at("Feature_23")[0], iTable.at("Feature_24")[0], iTable.at("Feature_25")[0], iTable.at("Feature_26")[0], iTable.at("Feature_27")[0], iTable.at("Feature_28")[0], iTable.at("Feature_29")[0]);
	
			return lTable;
		}
	
	} // eof namespace InputLayer
	

	namespace HiddenLayer_1 {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "input_0", "input_1", "input_2", "input_3", "input_4", "input_5", "input_6", "input_7", "input_8", "input_9", "input_10", "input_11", "input_12", "input_13", "input_14", "input_15", "input_16", "input_17", "input_18", "input_19", "input_20", "input_21", "input_22", "input_23", "input_24", "input_25", "input_26", "input_27", "input_28", "input_29" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "output_1_0", "output_1_1", "output_1_2" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any input_0, std::any input_1, std::any input_2, std::any input_3, std::any input_4, std::any input_5, std::any input_6, std::any input_7, std::any input_8, std::any input_9, std::any input_10, std::any input_11, std::any input_12, std::any input_13, std::any input_14, std::any input_15, std::any input_16, std::any input_17, std::any input_18, std::any input_19, std::any input_20, std::any input_21, std::any input_22, std::any input_23, std::any input_24, std::any input_25, std::any input_26, std::any input_27, std::any input_28, std::any input_29) {
	
			tTable lTable;
	
			double output_1_0_BA = -0.06198260337205883 * input_0 + -0.2723402352008534 * input_1 + -0.3373028002666197 * input_2 + -0.37722320544274063 * input_3 + 0.16008993871245308 * input_4 + 0.33126178709200843 * input_5 + -0.16806086019890867 * input_6 + -0.03416787565413934 * input_7 + -0.013585552376749388 * input_8 + -0.14822571097811582 * input_9 + -0.1995667079360125 * input_10 + -0.3646600871758468 * input_11 + 0.054696829197697756 * input_12 + 0.3275125704553369 * input_13 + 0.21329914122044302 * input_14 + 0.17195641020713567 * input_15 + -0.10582385499985814 * input_16 + -0.3921364107081572 * input_17 + -0.33927877530036904 * input_18 + -0.10616321507868111 * input_19 + -0.41359109823599444 * input_20 + 0.3251769739263268 * input_21 + 0.21445757235802143 * input_22 + -0.3538176470849407 * input_23 + 0.24817490974990378 * input_24 + -0.007549470346112857 * input_25 + 0.22645699278144354 * input_26 + 0.0015159757332007446 * input_27 + -0.24920572092732776 * input_28 + 0.20336066771977598 * input_29 + 0.2592603509840756;
	
			double output_1_1_BA = 0.08429899043881638 * input_0 + 0.007856650632109106 * input_1 + -0.25465996422928705 * input_2 + 0.28690772317931396 * input_3 + 0.11909755896875299 * input_4 + 0.3194765889800202 * input_5 + -0.19042795698676268 * input_6 + -0.40735617534705587 * input_7 + 0.35946376778427697 * input_8 + -0.06022210051049355 * input_9 + -0.26056854279948394 * input_10 + -0.07338373721872343 * input_11 + -0.3060764761515203 * input_12 + 0.22771366486176225 * input_13 + 0.03916627591156331 * input_14 + -0.2002077142522734 * input_15 + 0.12343804403991684 * input_16 + -0.2726667551557759 * input_17 + 0.06809709555700826 * input_18 + 0.2635942948790753 * input_19 + -0.4240167757490319 * input_20 + -0.004602504093412051 * input_21 + -0.30222297554647687 * input_22 + 0.0694964903293315 * input_23 + 0.194633051873655 * input_24 + -0.0666548803449774 * input_25 + 0.09165186239240898 * input_26 + 0.25049330203796194 * input_27 + -0.048838699962117364 * input_28 + -0.3727249342768987 * input_29 + -0.04329047574634146;
	
			double output_1_2_BA = 0.40297017550736575 * input_0 + -0.27839776380583775 * input_1 + 0.21893986878756255 * input_2 + 0.021801974093859634 * input_3 + -0.27289960372535177 * input_4 + -0.1480716739809121 * input_5 + 0.27265243603031714 * input_6 + -0.25549159656789744 * input_7 + -0.3180524094628854 * input_8 + 0.35709772750189867 * input_9 + -0.005140796772468292 * input_10 + 0.0015367823155619158 * input_11 + 0.2910566716797081 * input_12 + -0.2500029612133405 * input_13 + -0.37902295891411186 * input_14 + -0.3244099568894889 * input_15 + 0.08540741797452005 * input_16 + -0.042383818109437 * input_17 + 0.2988365708009642 * input_18 + -0.048963599603643354 * input_19 + -0.13730087413891237 * input_20 + 0.19387855639279566 * input_21 + -0.43286921935576916 * input_22 + 0.18908892241185563 * input_23 + 0.4147591224814542 * input_24 + 0.09330578238153964 * input_25 + 0.16699625028084444 * input_26 + 0.39899494112448947 * input_27 + 0.14154131926772195 * input_28 + 0.13425215421581804 * input_29 + -0.36994523599490076;
	
			lTable["output_1_0"] = { relu(output_1_0_BA) };
			lTable["output_1_1"] = { relu(output_1_1_BA) };
			lTable["output_1_2"] = { relu(output_1_2_BA) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("input_0")[0], iTable.at("input_1")[0], iTable.at("input_2")[0], iTable.at("input_3")[0], iTable.at("input_4")[0], iTable.at("input_5")[0], iTable.at("input_6")[0], iTable.at("input_7")[0], iTable.at("input_8")[0], iTable.at("input_9")[0], iTable.at("input_10")[0], iTable.at("input_11")[0], iTable.at("input_12")[0], iTable.at("input_13")[0], iTable.at("input_14")[0], iTable.at("input_15")[0], iTable.at("input_16")[0], iTable.at("input_17")[0], iTable.at("input_18")[0], iTable.at("input_19")[0], iTable.at("input_20")[0], iTable.at("input_21")[0], iTable.at("input_22")[0], iTable.at("input_23")[0], iTable.at("input_24")[0], iTable.at("input_25")[0], iTable.at("input_26")[0], iTable.at("input_27")[0], iTable.at("input_28")[0], iTable.at("input_29")[0]);
	
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
	
			double output_2_0_BA = 0.5570017973900633 * output_1_0 + -0.6318512101770242 * output_1_1 + -0.6027942165371536 * output_1_2 + -0.0885848948970186;
	
			double output_2_1_BA = -0.6117147514890253 * output_1_0 + -0.7801455651795172 * output_1_1 + -0.2035282128043682 * output_1_2 + 0.7261678101839508;
	
			double output_2_2_BA = 0.3181665565311362 * output_1_0 + 0.24520744606805434 * output_1_1 + -0.8551662103689538 * output_1_2 + 0.5639237733304812;
	
			double output_2_3_BA = -0.8421902249097659 * output_1_0 + -0.41727811634085143 * output_1_1 + 0.21219649398318208 * output_1_2 + 0.7034423435981434;
	
			double output_2_4_BA = -0.6948083782391425 * output_1_0 + -0.26953164813581026 * output_1_1 + -0.6617365102202873 * output_1_2 + -0.815750113657602;
	
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
			std::vector<std::string> lOutputs = { "output_3_0" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any output_2_0, std::any output_2_1, std::any output_2_2, std::any output_2_3, std::any output_2_4) {
	
			tTable lTable;
	
			double output_3_0_BA = 0.17801854651136906 * output_2_0 + -0.13753622957449535 * output_2_1 + 0.8117441155638517 * output_2_2 + -0.03219695025529653 * output_2_3 + 0.3793758554387943 * output_2_4 + 0.6117846928082863;
	
			lTable["output_3_0"] = { logistic(output_3_0_BA) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("output_2_0")[0], iTable.at("output_2_1")[0], iTable.at("output_2_2")[0], iTable.at("output_2_3")[0], iTable.at("output_2_4")[0]);
	
			return lTable;
		}
	
	} // eof namespace OutputLayer
	

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

		tTable lTable_InputLayer = InputLayer::compute_features(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9, Feature_10, Feature_11, Feature_12, Feature_13, Feature_14, Feature_15, Feature_16, Feature_17, Feature_18, Feature_19, Feature_20, Feature_21, Feature_22, Feature_23, Feature_24, Feature_25, Feature_26, Feature_27, Feature_28, Feature_29);

		tTable lTable_HiddenLayer_1 = HiddenLayer_1::compute_model_outputs_from_table( lTable_InputLayer );

		tTable lTable_HiddenLayer_2 = HiddenLayer_2::compute_model_outputs_from_table( lTable_HiddenLayer_1 );

		tTable lTable_OutputLayer = OutputLayer::compute_model_outputs_from_table( lTable_HiddenLayer_2 );


		tTable lTable;

		lTable["Score"] = { 
			std::any(),
			std::any() 
		} ;
		lTable["Proba"] = { 
			1.0 - lTable_OutputLayer[ "output_3_0" ][0],
			lTable_OutputLayer[ "output_3_0" ][0] 
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

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/BreastCancer.csv");
	return 0;
}
