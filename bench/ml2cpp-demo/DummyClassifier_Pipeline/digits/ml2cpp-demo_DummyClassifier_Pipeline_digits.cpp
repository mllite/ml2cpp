// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : DummyClassifier_Pipeline
// Dataset : digits

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_DummyClassifier_Pipeline_digits.exe ml2cpp-demo_DummyClassifier_Pipeline_digits.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

		return lClasses;
	}

	namespace imputer {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12", "Feature_13", "Feature_14", "Feature_15", "Feature_16", "Feature_17", "Feature_18", "Feature_19", "Feature_20", "Feature_21", "Feature_22", "Feature_23", "Feature_24", "Feature_25", "Feature_26", "Feature_27", "Feature_28", "Feature_29", "Feature_30", "Feature_31", "Feature_32", "Feature_33", "Feature_34", "Feature_35", "Feature_36", "Feature_37", "Feature_38", "Feature_39", "Feature_40", "Feature_41", "Feature_42", "Feature_43", "Feature_44", "Feature_45", "Feature_46", "Feature_47", "Feature_48", "Feature_49", "Feature_50", "Feature_51", "Feature_52", "Feature_53", "Feature_54", "Feature_55", "Feature_56", "Feature_57", "Feature_58", "Feature_59", "Feature_60", "Feature_61", "Feature_62", "Feature_63" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "impter_2", "impter_3", "impter_4", "impter_5", "impter_6", "impter_7", "impter_8", "impter_9", "impter_10", "impter_11", "impter_12", "impter_13", "impter_14", "impter_15", "impter_16", "impter_17", "impter_18", "impter_19", "impter_20", "impter_21", "impter_22", "impter_23", "impter_24", "impter_25", "impter_26", "impter_27", "impter_28", "impter_29", "impter_30", "impter_31", "impter_32", "impter_33", "impter_34", "impter_35", "impter_36", "impter_37", "impter_38", "impter_39", "impter_40", "impter_41", "impter_42", "impter_43", "impter_44", "impter_45", "impter_46", "impter_47", "impter_48", "impter_49", "impter_50", "impter_51", "impter_52", "impter_53", "impter_54", "impter_55", "impter_56", "impter_57", "impter_58", "impter_59", "impter_60", "impter_61", "impter_62", "impter_63", "impter_64", "impter_65" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29, std::any Feature_30, std::any Feature_31, std::any Feature_32, std::any Feature_33, std::any Feature_34, std::any Feature_35, std::any Feature_36, std::any Feature_37, std::any Feature_38, std::any Feature_39, std::any Feature_40, std::any Feature_41, std::any Feature_42, std::any Feature_43, std::any Feature_44, std::any Feature_45, std::any Feature_46, std::any Feature_47, std::any Feature_48, std::any Feature_49, std::any Feature_50, std::any Feature_51, std::any Feature_52, std::any Feature_53, std::any Feature_54, std::any Feature_55, std::any Feature_56, std::any Feature_57, std::any Feature_58, std::any Feature_59, std::any Feature_60, std::any Feature_61, std::any Feature_62, std::any Feature_63) {
	
			tTable lTable;
	
			lTable["impter_2"] = { ((Feature_0 == std::any()) ?  ( 0.0 ) : ( Feature_0)) };
			lTable["impter_3"] = { ((Feature_1 == std::any()) ?  ( 0.2950591510090466 ) : ( Feature_1)) };
			lTable["impter_4"] = { ((Feature_2 == std::any()) ?  ( 5.104384133611691 ) : ( Feature_2)) };
			lTable["impter_5"] = { ((Feature_3 == std::any()) ?  ( 11.791927627000696 ) : ( Feature_3)) };
			lTable["impter_6"] = { ((Feature_4 == std::any()) ?  ( 11.84829505915101 ) : ( Feature_4)) };
			lTable["impter_7"] = { ((Feature_5 == std::any()) ?  ( 5.823242867084203 ) : ( Feature_5)) };
			lTable["impter_8"] = { ((Feature_6 == std::any()) ?  ( 1.394572025052192 ) : ( Feature_6)) };
			lTable["impter_9"] = { ((Feature_7 == std::any()) ?  ( 0.13430758524704245 ) : ( Feature_7)) };
			lTable["impter_10"] = { ((Feature_8 == std::any()) ?  ( 0.0055671537926235215 ) : ( Feature_8)) };
			lTable["impter_11"] = { ((Feature_9 == std::any()) ?  ( 1.977035490605428 ) : ( Feature_9)) };
			lTable["impter_12"] = { ((Feature_10 == std::any()) ?  ( 10.362560890744607 ) : ( Feature_10)) };
			lTable["impter_13"] = { ((Feature_11 == std::any()) ?  ( 12.03061934585943 ) : ( Feature_11)) };
			lTable["impter_14"] = { ((Feature_12 == std::any()) ?  ( 10.271398747390396 ) : ( Feature_12)) };
			lTable["impter_15"] = { ((Feature_13 == std::any()) ?  ( 8.121781489213639 ) : ( Feature_13)) };
			lTable["impter_16"] = { ((Feature_14 == std::any()) ?  ( 1.8921363952679193 ) : ( Feature_14)) };
			lTable["impter_17"] = { ((Feature_15 == std::any()) ?  ( 0.11760612386917188 ) : ( Feature_15)) };
			lTable["impter_18"] = { ((Feature_16 == std::any()) ?  ( 0.0020876826722338203 ) : ( Feature_16)) };
			lTable["impter_19"] = { ((Feature_17 == std::any()) ?  ( 2.5427974947807934 ) : ( Feature_17)) };
			lTable["impter_20"] = { ((Feature_18 == std::any()) ?  ( 9.935281837160751 ) : ( Feature_18)) };
			lTable["impter_21"] = { ((Feature_19 == std::any()) ?  ( 7.099512874043145 ) : ( Feature_19)) };
			lTable["impter_22"] = { ((Feature_20 == std::any()) ?  ( 7.132915796798887 ) : ( Feature_20)) };
			lTable["impter_23"] = { ((Feature_21 == std::any()) ?  ( 7.81419624217119 ) : ( Feature_21)) };
			lTable["impter_24"] = { ((Feature_22 == std::any()) ?  ( 1.8434237995824634 ) : ( Feature_22)) };
			lTable["impter_25"] = { ((Feature_23 == std::any()) ?  ( 0.05775922059846903 ) : ( Feature_23)) };
			lTable["impter_26"] = { ((Feature_24 == std::any()) ?  ( 0.0006958942240779402 ) : ( Feature_24)) };
			lTable["impter_27"] = { ((Feature_25 == std::any()) ?  ( 2.4808629088378567 ) : ( Feature_25)) };
			lTable["impter_28"] = { ((Feature_26 == std::any()) ?  ( 9.143354210160055 ) : ( Feature_26)) };
			lTable["impter_29"] = { ((Feature_27 == std::any()) ?  ( 8.960334029227557 ) : ( Feature_27)) };
			lTable["impter_30"] = { ((Feature_28 == std::any()) ?  ( 10.03688239387613 ) : ( Feature_28)) };
			lTable["impter_31"] = { ((Feature_29 == std::any()) ?  ( 7.5949895615866385 ) : ( Feature_29)) };
			lTable["impter_32"] = { ((Feature_30 == std::any()) ?  ( 2.337508698677801 ) : ( Feature_30)) };
			lTable["impter_33"] = { ((Feature_31 == std::any()) ?  ( 0.0027835768963117608 ) : ( Feature_31)) };
			lTable["impter_34"] = { ((Feature_32 == std::any()) ?  ( 0.0 ) : ( Feature_32)) };
			lTable["impter_35"] = { ((Feature_33 == std::any()) ?  ( 2.3319415448851775 ) : ( Feature_33)) };
			lTable["impter_36"] = { ((Feature_34 == std::any()) ?  ( 7.608907446068198 ) : ( Feature_34)) };
			lTable["impter_37"] = { ((Feature_35 == std::any()) ?  ( 9.028531663187195 ) : ( Feature_35)) };
			lTable["impter_38"] = { ((Feature_36 == std::any()) ?  ( 10.270006958942242 ) : ( Feature_36)) };
			lTable["impter_39"] = { ((Feature_37 == std::any()) ?  ( 8.806541405706332 ) : ( Feature_37)) };
			lTable["impter_40"] = { ((Feature_38 == std::any()) ?  ( 2.8754349338900487 ) : ( Feature_38)) };
			lTable["impter_41"] = { ((Feature_39 == std::any()) ?  ( 0.0 ) : ( Feature_39)) };
			lTable["impter_42"] = { ((Feature_40 == std::any()) ?  ( 0.010438413361169102 ) : ( Feature_40)) };
			lTable["impter_43"] = { ((Feature_41 == std::any()) ?  ( 1.5755045233124565 ) : ( Feature_41)) };
			lTable["impter_44"] = { ((Feature_42 == std::any()) ?  ( 6.858733472512178 ) : ( Feature_42)) };
			lTable["impter_45"] = { ((Feature_43 == std::any()) ?  ( 7.258872651356993 ) : ( Feature_43)) };
			lTable["impter_46"] = { ((Feature_44 == std::any()) ?  ( 7.710508002783577 ) : ( Feature_44)) };
			lTable["impter_47"] = { ((Feature_45 == std::any()) ?  ( 8.281141266527488 ) : ( Feature_45)) };
			lTable["impter_48"] = { ((Feature_46 == std::any()) ?  ( 3.432150313152401 ) : ( Feature_46)) };
			lTable["impter_49"] = { ((Feature_47 == std::any()) ?  ( 0.031315240083507306 ) : ( Feature_47)) };
			lTable["impter_50"] = { ((Feature_48 == std::any()) ?  ( 0.009046624913013222 ) : ( Feature_48)) };
			lTable["impter_51"] = { ((Feature_49 == std::any()) ?  ( 0.708420320111343 ) : ( Feature_49)) };
			lTable["impter_52"] = { ((Feature_50 == std::any()) ?  ( 7.492693110647181 ) : ( Feature_50)) };
			lTable["impter_53"] = { ((Feature_51 == std::any()) ?  ( 9.529575504523313 ) : ( Feature_51)) };
			lTable["impter_54"] = { ((Feature_52 == std::any()) ?  ( 9.541405706332638 ) : ( Feature_52)) };
			lTable["impter_55"] = { ((Feature_53 == std::any()) ?  ( 8.754349338900488 ) : ( Feature_53)) };
			lTable["impter_56"] = { ((Feature_54 == std::any()) ?  ( 3.7397355601948505 ) : ( Feature_54)) };
			lTable["impter_57"] = { ((Feature_55 == std::any()) ?  ( 0.21920668058455114 ) : ( Feature_55)) };
			lTable["impter_58"] = { ((Feature_56 == std::any()) ?  ( 0.0006958942240779402 ) : ( Feature_56)) };
			lTable["impter_59"] = { ((Feature_57 == std::any()) ?  ( 0.26374391092553934 ) : ( Feature_57)) };
			lTable["impter_60"] = { ((Feature_58 == std::any()) ?  ( 5.474599860821155 ) : ( Feature_58)) };
			lTable["impter_61"] = { ((Feature_59 == std::any()) ?  ( 12.097425191370911 ) : ( Feature_59)) };
			lTable["impter_62"] = { ((Feature_60 == std::any()) ?  ( 11.8580375782881 ) : ( Feature_60)) };
			lTable["impter_63"] = { ((Feature_61 == std::any()) ?  ( 6.716771050800278 ) : ( Feature_61)) };
			lTable["impter_64"] = { ((Feature_62 == std::any()) ?  ( 2.0869867780097424 ) : ( Feature_62)) };
			lTable["impter_65"] = { ((Feature_63 == std::any()) ?  ( 0.3862212943632568 ) : ( Feature_63)) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0], iTable.at("Feature_13")[0], iTable.at("Feature_14")[0], iTable.at("Feature_15")[0], iTable.at("Feature_16")[0], iTable.at("Feature_17")[0], iTable.at("Feature_18")[0], iTable.at("Feature_19")[0], iTable.at("Feature_20")[0], iTable.at("Feature_21")[0], iTable.at("Feature_22")[0], iTable.at("Feature_23")[0], iTable.at("Feature_24")[0], iTable.at("Feature_25")[0], iTable.at("Feature_26")[0], iTable.at("Feature_27")[0], iTable.at("Feature_28")[0], iTable.at("Feature_29")[0], iTable.at("Feature_30")[0], iTable.at("Feature_31")[0], iTable.at("Feature_32")[0], iTable.at("Feature_33")[0], iTable.at("Feature_34")[0], iTable.at("Feature_35")[0], iTable.at("Feature_36")[0], iTable.at("Feature_37")[0], iTable.at("Feature_38")[0], iTable.at("Feature_39")[0], iTable.at("Feature_40")[0], iTable.at("Feature_41")[0], iTable.at("Feature_42")[0], iTable.at("Feature_43")[0], iTable.at("Feature_44")[0], iTable.at("Feature_45")[0], iTable.at("Feature_46")[0], iTable.at("Feature_47")[0], iTable.at("Feature_48")[0], iTable.at("Feature_49")[0], iTable.at("Feature_50")[0], iTable.at("Feature_51")[0], iTable.at("Feature_52")[0], iTable.at("Feature_53")[0], iTable.at("Feature_54")[0], iTable.at("Feature_55")[0], iTable.at("Feature_56")[0], iTable.at("Feature_57")[0], iTable.at("Feature_58")[0], iTable.at("Feature_59")[0], iTable.at("Feature_60")[0], iTable.at("Feature_61")[0], iTable.at("Feature_62")[0], iTable.at("Feature_63")[0]);
	
			return lTable;
		}
	
	} // eof namespace imputer
	

	namespace scaler {
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "impter_2", "impter_3", "impter_4", "impter_5", "impter_6", "impter_7", "impter_8", "impter_9", "impter_10", "impter_11", "impter_12", "impter_13", "impter_14", "impter_15", "impter_16", "impter_17", "impter_18", "impter_19", "impter_20", "impter_21", "impter_22", "impter_23", "impter_24", "impter_25", "impter_26", "impter_27", "impter_28", "impter_29", "impter_30", "impter_31", "impter_32", "impter_33", "impter_34", "impter_35", "impter_36", "impter_37", "impter_38", "impter_39", "impter_40", "impter_41", "impter_42", "impter_43", "impter_44", "impter_45", "impter_46", "impter_47", "impter_48", "impter_49", "impter_50", "impter_51", "impter_52", "impter_53", "impter_54", "impter_55", "impter_56", "impter_57", "impter_58", "impter_59", "impter_60", "impter_61", "impter_62", "impter_63", "impter_64", "impter_65" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { "scaler_2", "scaler_3", "scaler_4", "scaler_5", "scaler_6", "scaler_7", "scaler_8", "scaler_9", "scaler_10", "scaler_11", "scaler_12", "scaler_13", "scaler_14", "scaler_15", "scaler_16", "scaler_17", "scaler_18", "scaler_19", "scaler_20", "scaler_21", "scaler_22", "scaler_23", "scaler_24", "scaler_25", "scaler_26", "scaler_27", "scaler_28", "scaler_29", "scaler_30", "scaler_31", "scaler_32", "scaler_33", "scaler_34", "scaler_35", "scaler_36", "scaler_37", "scaler_38", "scaler_39", "scaler_40", "scaler_41", "scaler_42", "scaler_43", "scaler_44", "scaler_45", "scaler_46", "scaler_47", "scaler_48", "scaler_49", "scaler_50", "scaler_51", "scaler_52", "scaler_53", "scaler_54", "scaler_55", "scaler_56", "scaler_57", "scaler_58", "scaler_59", "scaler_60", "scaler_61", "scaler_62", "scaler_63", "scaler_64", "scaler_65" };
	
			return lOutputs;
		}
	
		tTable compute_features(std::any impter_2, std::any impter_3, std::any impter_4, std::any impter_5, std::any impter_6, std::any impter_7, std::any impter_8, std::any impter_9, std::any impter_10, std::any impter_11, std::any impter_12, std::any impter_13, std::any impter_14, std::any impter_15, std::any impter_16, std::any impter_17, std::any impter_18, std::any impter_19, std::any impter_20, std::any impter_21, std::any impter_22, std::any impter_23, std::any impter_24, std::any impter_25, std::any impter_26, std::any impter_27, std::any impter_28, std::any impter_29, std::any impter_30, std::any impter_31, std::any impter_32, std::any impter_33, std::any impter_34, std::any impter_35, std::any impter_36, std::any impter_37, std::any impter_38, std::any impter_39, std::any impter_40, std::any impter_41, std::any impter_42, std::any impter_43, std::any impter_44, std::any impter_45, std::any impter_46, std::any impter_47, std::any impter_48, std::any impter_49, std::any impter_50, std::any impter_51, std::any impter_52, std::any impter_53, std::any impter_54, std::any impter_55, std::any impter_56, std::any impter_57, std::any impter_58, std::any impter_59, std::any impter_60, std::any impter_61, std::any impter_62, std::any impter_63, std::any impter_64, std::any impter_65) {
	
			tTable lTable;
	
			lTable["scaler_2"] = { ( ( impter_2 - 0.0 ) / 1.0 ) };
			lTable["scaler_3"] = { ( ( impter_3 - 0.2950591510090466 ) / 0.886335971513945 ) };
			lTable["scaler_4"] = { ( ( impter_4 - 5.104384133611691 ) / 4.714562522364591 ) };
			lTable["scaler_5"] = { ( ( impter_5 - 11.791927627000696 ) / 4.242705177561994 ) };
			lTable["scaler_6"] = { ( ( impter_6 - 11.84829505915101 ) / 4.298607850485783 ) };
			lTable["scaler_7"] = { ( ( impter_7 - 5.823242867084203 ) / 5.664052593352563 ) };
			lTable["scaler_8"] = { ( ( impter_8 - 1.394572025052192 ) / 3.3672537498889787 ) };
			lTable["scaler_9"] = { ( ( impter_9 - 0.13430758524704245 ) / 1.0738488961060884 ) };
			lTable["scaler_10"] = { ( ( impter_10 - 0.0055671537926235215 ) / 0.09121259500521199 ) };
			lTable["scaler_11"] = { ( ( impter_11 - 1.977035490605428 ) / 3.1765759513448373 ) };
			lTable["scaler_12"] = { ( ( impter_12 - 10.362560890744607 ) / 5.427455768043861 ) };
			lTable["scaler_13"] = { ( ( impter_13 - 12.03061934585943 ) / 3.9240043126958595 ) };
			lTable["scaler_14"] = { ( ( impter_14 - 10.271398747390396 ) / 4.751306782008032 ) };
			lTable["scaler_15"] = { ( ( impter_15 - 8.121781489213639 ) / 6.055742470420089 ) };
			lTable["scaler_16"] = { ( ( impter_16 - 1.8921363952679193 ) / 3.6358496015605493 ) };
			lTable["scaler_17"] = { ( ( impter_17 - 0.11760612386917188 ) / 0.8809135848407257 ) };
			lTable["scaler_18"] = { ( ( impter_18 - 0.0020876826722338203 ) / 0.04564344699180706 ) };
			lTable["scaler_19"] = { ( ( impter_19 - 2.5427974947807934 ) / 3.535939148296097 ) };
			lTable["scaler_20"] = { ( ( impter_20 - 9.935281837160751 ) / 5.674233427535142 ) };
			lTable["scaler_21"] = { ( ( impter_21 - 7.099512874043145 ) / 5.828968622118506 ) };
			lTable["scaler_22"] = { ( ( impter_22 - 7.132915796798887 ) / 6.164166380758013 ) };
			lTable["scaler_23"] = { ( ( impter_23 - 7.81419624217119 ) / 6.237214641441282 ) };
			lTable["scaler_24"] = { ( ( impter_24 - 1.8434237995824634 ) / 3.3552968495259408 ) };
			lTable["scaler_25"] = { ( ( impter_25 - 0.05775922059846903 ) / 0.47057168084472595 ) };
			lTable["scaler_26"] = { ( ( impter_26 - 0.0006958942240779402 ) / 0.0263706267522565 ) };
			lTable["scaler_27"] = { ( ( impter_27 - 2.4808629088378567 ) / 3.1579531140532993 ) };
			lTable["scaler_28"] = { ( ( impter_28 - 9.143354210160055 ) / 6.211448620771221 ) };
			lTable["scaler_29"] = { ( ( impter_29 - 8.960334029227557 ) / 5.872499336895779 ) };
			lTable["scaler_30"] = { ( ( impter_30 - 10.03688239387613 ) / 6.131194138822921 ) };
			lTable["scaler_31"] = { ( ( impter_31 - 7.5949895615866385 ) / 5.883009512311774 ) };
			lTable["scaler_32"] = { ( ( impter_32 - 2.337508698677801 ) / 3.7555163121005397 ) };
			lTable["scaler_33"] = { ( ( impter_33 - 0.0027835768963117608 ) / 0.05268613286220741 ) };
			lTable["scaler_34"] = { ( ( impter_34 - 0.0 ) / 1.0 ) };
			lTable["scaler_35"] = { ( ( impter_35 - 2.3319415448851775 ) / 3.520361676701363 ) };
			lTable["scaler_36"] = { ( ( impter_36 - 7.608907446068198 ) / 6.337427127154217 ) };
			lTable["scaler_37"] = { ( ( impter_37 - 9.028531663187195 ) / 6.255398792908601 ) };
			lTable["scaler_38"] = { ( ( impter_38 - 10.270006958942242 ) / 5.918328236602452 ) };
			lTable["scaler_39"] = { ( ( impter_39 - 8.806541405706332 ) / 5.862505948752236 ) };
			lTable["scaler_40"] = { ( ( impter_40 - 2.8754349338900487 ) / 3.521551388880749 ) };
			lTable["scaler_41"] = { ( ( impter_41 - 0.0 ) / 1.0 ) };
			lTable["scaler_42"] = { ( ( impter_42 - 0.010438413361169102 ) / 0.16012222149778146 ) };
			lTable["scaler_43"] = { ( ( impter_43 - 1.5755045233124565 ) / 3.0148158575591246 ) };
			lTable["scaler_44"] = { ( ( impter_44 - 6.858733472512178 ) / 6.5422093407655435 ) };
			lTable["scaler_45"] = { ( ( impter_45 - 7.258872651356993 ) / 6.490917554434448 ) };
			lTable["scaler_46"] = { ( ( impter_46 - 7.710508002783577 ) / 6.292873620677289 ) };
			lTable["scaler_47"] = { ( ( impter_47 - 8.281141266527488 ) / 5.713309549149251 ) };
			lTable["scaler_48"] = { ( ( impter_48 - 3.432150313152401 ) / 4.326500259143386 ) };
			lTable["scaler_49"] = { ( ( impter_49 - 0.031315240083507306 ) / 0.33325414598330405 ) };
			lTable["scaler_50"] = { ( ( impter_50 - 0.009046624913013222 ) / 0.22827664222063312 ) };
			lTable["scaler_51"] = { ( ( impter_51 - 0.708420320111343 ) / 1.7630768232183456 ) };
			lTable["scaler_52"] = { ( ( impter_52 - 7.492693110647181 ) / 5.6747357473393345 ) };
			lTable["scaler_53"] = { ( ( impter_53 - 9.529575504523313 ) / 5.230790022511772 ) };
			lTable["scaler_54"] = { ( ( impter_54 - 9.541405706332638 ) / 5.2515555146947035 ) };
			lTable["scaler_55"] = { ( ( impter_55 - 8.754349338900488 ) / 6.0343648977583975 ) };
			lTable["scaler_56"] = { ( ( impter_56 - 3.7397355601948505 ) / 4.953834269857758 ) };
			lTable["scaler_57"] = { ( ( impter_57 - 0.21920668058455114 ) / 1.0257471420649142 ) };
			lTable["scaler_58"] = { ( ( impter_58 - 0.0006958942240779402 ) / 0.02637062675225659 ) };
			lTable["scaler_59"] = { ( ( impter_59 - 0.26374391092553934 ) / 0.893431165157604 ) };
			lTable["scaler_60"] = { ( ( impter_60 - 5.474599860821155 ) / 5.06659361292149 ) };
			lTable["scaler_61"] = { ( ( impter_61 - 12.097425191370911 ) / 4.359965306758356 ) };
			lTable["scaler_62"] = { ( ( impter_62 - 11.8580375782881 ) / 4.889242282258171 ) };
			lTable["scaler_63"] = { ( ( impter_63 - 6.716771050800278 ) / 5.87255780345831 ) };
			lTable["scaler_64"] = { ( ( impter_64 - 2.0869867780097424 ) / 4.12826085471658 ) };
			lTable["scaler_65"] = { ( ( impter_65 - 0.3862212943632568 ) / 1.915153500596726 ) };
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_features(iTable.at("impter_2")[0], iTable.at("impter_3")[0], iTable.at("impter_4")[0], iTable.at("impter_5")[0], iTable.at("impter_6")[0], iTable.at("impter_7")[0], iTable.at("impter_8")[0], iTable.at("impter_9")[0], iTable.at("impter_10")[0], iTable.at("impter_11")[0], iTable.at("impter_12")[0], iTable.at("impter_13")[0], iTable.at("impter_14")[0], iTable.at("impter_15")[0], iTable.at("impter_16")[0], iTable.at("impter_17")[0], iTable.at("impter_18")[0], iTable.at("impter_19")[0], iTable.at("impter_20")[0], iTable.at("impter_21")[0], iTable.at("impter_22")[0], iTable.at("impter_23")[0], iTable.at("impter_24")[0], iTable.at("impter_25")[0], iTable.at("impter_26")[0], iTable.at("impter_27")[0], iTable.at("impter_28")[0], iTable.at("impter_29")[0], iTable.at("impter_30")[0], iTable.at("impter_31")[0], iTable.at("impter_32")[0], iTable.at("impter_33")[0], iTable.at("impter_34")[0], iTable.at("impter_35")[0], iTable.at("impter_36")[0], iTable.at("impter_37")[0], iTable.at("impter_38")[0], iTable.at("impter_39")[0], iTable.at("impter_40")[0], iTable.at("impter_41")[0], iTable.at("impter_42")[0], iTable.at("impter_43")[0], iTable.at("impter_44")[0], iTable.at("impter_45")[0], iTable.at("impter_46")[0], iTable.at("impter_47")[0], iTable.at("impter_48")[0], iTable.at("impter_49")[0], iTable.at("impter_50")[0], iTable.at("impter_51")[0], iTable.at("impter_52")[0], iTable.at("impter_53")[0], iTable.at("impter_54")[0], iTable.at("impter_55")[0], iTable.at("impter_56")[0], iTable.at("impter_57")[0], iTable.at("impter_58")[0], iTable.at("impter_59")[0], iTable.at("impter_60")[0], iTable.at("impter_61")[0], iTable.at("impter_62")[0], iTable.at("impter_63")[0], iTable.at("impter_64")[0], iTable.at("impter_65")[0]);
	
			return lTable;
		}
	
	} // eof namespace scaler
	

	namespace model {
	
		std::vector<std::any> get_classes(){
			std::vector<std::any> lClasses = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
			return lClasses;
		}
	
		std::vector<std::string> get_input_names(){
			std::vector<std::string> lFeatures = { "scaler_2", "scaler_3", "scaler_4", "scaler_5", "scaler_6", "scaler_7", "scaler_8", "scaler_9", "scaler_10", "scaler_11", "scaler_12", "scaler_13", "scaler_14", "scaler_15", "scaler_16", "scaler_17", "scaler_18", "scaler_19", "scaler_20", "scaler_21", "scaler_22", "scaler_23", "scaler_24", "scaler_25", "scaler_26", "scaler_27", "scaler_28", "scaler_29", "scaler_30", "scaler_31", "scaler_32", "scaler_33", "scaler_34", "scaler_35", "scaler_36", "scaler_37", "scaler_38", "scaler_39", "scaler_40", "scaler_41", "scaler_42", "scaler_43", "scaler_44", "scaler_45", "scaler_46", "scaler_47", "scaler_48", "scaler_49", "scaler_50", "scaler_51", "scaler_52", "scaler_53", "scaler_54", "scaler_55", "scaler_56", "scaler_57", "scaler_58", "scaler_59", "scaler_60", "scaler_61", "scaler_62", "scaler_63", "scaler_64", "scaler_65" };
	
			return lFeatures;
		}
	
		std::vector<std::string> get_output_names(){
			std::vector<std::string> lOutputs = { 
				"Score_0", "Score_1", "Score_2", "Score_3", "Score_4", "Score_5", "Score_6", "Score_7", "Score_8", "Score_9",
				"Proba_0", "Proba_1", "Proba_2", "Proba_3", "Proba_4", "Proba_5", "Proba_6", "Proba_7", "Proba_8", "Proba_9",
				"LogProba_0", "LogProba_1", "LogProba_2", "LogProba_3", "LogProba_4", "LogProba_5", "LogProba_6", "LogProba_7", "LogProba_8", "LogProba_9",
				"Decision", "DecisionProba" };
	
			return lOutputs;
		}
	
		tTable compute_classification_scores(std::any scaler_2, std::any scaler_3, std::any scaler_4, std::any scaler_5, std::any scaler_6, std::any scaler_7, std::any scaler_8, std::any scaler_9, std::any scaler_10, std::any scaler_11, std::any scaler_12, std::any scaler_13, std::any scaler_14, std::any scaler_15, std::any scaler_16, std::any scaler_17, std::any scaler_18, std::any scaler_19, std::any scaler_20, std::any scaler_21, std::any scaler_22, std::any scaler_23, std::any scaler_24, std::any scaler_25, std::any scaler_26, std::any scaler_27, std::any scaler_28, std::any scaler_29, std::any scaler_30, std::any scaler_31, std::any scaler_32, std::any scaler_33, std::any scaler_34, std::any scaler_35, std::any scaler_36, std::any scaler_37, std::any scaler_38, std::any scaler_39, std::any scaler_40, std::any scaler_41, std::any scaler_42, std::any scaler_43, std::any scaler_44, std::any scaler_45, std::any scaler_46, std::any scaler_47, std::any scaler_48, std::any scaler_49, std::any scaler_50, std::any scaler_51, std::any scaler_52, std::any scaler_53, std::any scaler_54, std::any scaler_55, std::any scaler_56, std::any scaler_57, std::any scaler_58, std::any scaler_59, std::any scaler_60, std::any scaler_61, std::any scaler_62, std::any scaler_63, std::any scaler_64, std::any scaler_65) {
			auto lClasses = get_classes();
	
	
			tTable lTable;
	
			lTable["Score"] = { 
				std::any(),
				std::any(),
				std::any(),
				std::any(),
				std::any(),
				std::any(),
				std::any(),
				std::any(),
				std::any(),
				std::any() 
			} ;
			lTable["Proba"] = { 
				0.1,
				0.1,
				0.1,
				0.1,
				0.1,
				0.1,
				0.1,
				0.1,
				0.1,
				0.1 
			} ;
			int lBestClass = get_arg_max( lTable["Proba"] );
			auto lDecision = lClasses[lBestClass];
			lTable["Decision"] = { lDecision } ;
			lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };
	
			recompute_log_probas( lTable );
	
			return lTable;
		}
	
		tTable compute_model_outputs_from_table( tTable const & iTable) {
			tTable lTable = compute_classification_scores(iTable.at("scaler_2")[0], iTable.at("scaler_3")[0], iTable.at("scaler_4")[0], iTable.at("scaler_5")[0], iTable.at("scaler_6")[0], iTable.at("scaler_7")[0], iTable.at("scaler_8")[0], iTable.at("scaler_9")[0], iTable.at("scaler_10")[0], iTable.at("scaler_11")[0], iTable.at("scaler_12")[0], iTable.at("scaler_13")[0], iTable.at("scaler_14")[0], iTable.at("scaler_15")[0], iTable.at("scaler_16")[0], iTable.at("scaler_17")[0], iTable.at("scaler_18")[0], iTable.at("scaler_19")[0], iTable.at("scaler_20")[0], iTable.at("scaler_21")[0], iTable.at("scaler_22")[0], iTable.at("scaler_23")[0], iTable.at("scaler_24")[0], iTable.at("scaler_25")[0], iTable.at("scaler_26")[0], iTable.at("scaler_27")[0], iTable.at("scaler_28")[0], iTable.at("scaler_29")[0], iTable.at("scaler_30")[0], iTable.at("scaler_31")[0], iTable.at("scaler_32")[0], iTable.at("scaler_33")[0], iTable.at("scaler_34")[0], iTable.at("scaler_35")[0], iTable.at("scaler_36")[0], iTable.at("scaler_37")[0], iTable.at("scaler_38")[0], iTable.at("scaler_39")[0], iTable.at("scaler_40")[0], iTable.at("scaler_41")[0], iTable.at("scaler_42")[0], iTable.at("scaler_43")[0], iTable.at("scaler_44")[0], iTable.at("scaler_45")[0], iTable.at("scaler_46")[0], iTable.at("scaler_47")[0], iTable.at("scaler_48")[0], iTable.at("scaler_49")[0], iTable.at("scaler_50")[0], iTable.at("scaler_51")[0], iTable.at("scaler_52")[0], iTable.at("scaler_53")[0], iTable.at("scaler_54")[0], iTable.at("scaler_55")[0], iTable.at("scaler_56")[0], iTable.at("scaler_57")[0], iTable.at("scaler_58")[0], iTable.at("scaler_59")[0], iTable.at("scaler_60")[0], iTable.at("scaler_61")[0], iTable.at("scaler_62")[0], iTable.at("scaler_63")[0], iTable.at("scaler_64")[0], iTable.at("scaler_65")[0]);
	
			return lTable;
		}
	
	} // eof namespace model
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12", "Feature_13", "Feature_14", "Feature_15", "Feature_16", "Feature_17", "Feature_18", "Feature_19", "Feature_20", "Feature_21", "Feature_22", "Feature_23", "Feature_24", "Feature_25", "Feature_26", "Feature_27", "Feature_28", "Feature_29", "Feature_30", "Feature_31", "Feature_32", "Feature_33", "Feature_34", "Feature_35", "Feature_36", "Feature_37", "Feature_38", "Feature_39", "Feature_40", "Feature_41", "Feature_42", "Feature_43", "Feature_44", "Feature_45", "Feature_46", "Feature_47", "Feature_48", "Feature_49", "Feature_50", "Feature_51", "Feature_52", "Feature_53", "Feature_54", "Feature_55", "Feature_56", "Feature_57", "Feature_58", "Feature_59", "Feature_60", "Feature_61", "Feature_62", "Feature_63" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { 
			"Score_0", "Score_1", "Score_2", "Score_3", "Score_4", "Score_5", "Score_6", "Score_7", "Score_8", "Score_9",
			"Proba_0", "Proba_1", "Proba_2", "Proba_3", "Proba_4", "Proba_5", "Proba_6", "Proba_7", "Proba_8", "Proba_9",
			"LogProba_0", "LogProba_1", "LogProba_2", "LogProba_3", "LogProba_4", "LogProba_5", "LogProba_6", "LogProba_7", "LogProba_8", "LogProba_9",
			"Decision", "DecisionProba" };

		return lOutputs;
	}

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29, std::any Feature_30, std::any Feature_31, std::any Feature_32, std::any Feature_33, std::any Feature_34, std::any Feature_35, std::any Feature_36, std::any Feature_37, std::any Feature_38, std::any Feature_39, std::any Feature_40, std::any Feature_41, std::any Feature_42, std::any Feature_43, std::any Feature_44, std::any Feature_45, std::any Feature_46, std::any Feature_47, std::any Feature_48, std::any Feature_49, std::any Feature_50, std::any Feature_51, std::any Feature_52, std::any Feature_53, std::any Feature_54, std::any Feature_55, std::any Feature_56, std::any Feature_57, std::any Feature_58, std::any Feature_59, std::any Feature_60, std::any Feature_61, std::any Feature_62, std::any Feature_63) {
		auto lClasses = get_classes();

		tTable lTable_imputer = imputer::compute_features(Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9, Feature_10, Feature_11, Feature_12, Feature_13, Feature_14, Feature_15, Feature_16, Feature_17, Feature_18, Feature_19, Feature_20, Feature_21, Feature_22, Feature_23, Feature_24, Feature_25, Feature_26, Feature_27, Feature_28, Feature_29, Feature_30, Feature_31, Feature_32, Feature_33, Feature_34, Feature_35, Feature_36, Feature_37, Feature_38, Feature_39, Feature_40, Feature_41, Feature_42, Feature_43, Feature_44, Feature_45, Feature_46, Feature_47, Feature_48, Feature_49, Feature_50, Feature_51, Feature_52, Feature_53, Feature_54, Feature_55, Feature_56, Feature_57, Feature_58, Feature_59, Feature_60, Feature_61, Feature_62, Feature_63);

		tTable lTable_scaler = scaler::compute_model_outputs_from_table( lTable_imputer );

		tTable lTable_model = model::compute_model_outputs_from_table( lTable_scaler );


		tTable lTable = lTable_model;

		int lBestClass = get_arg_max( lTable["Proba"] );
		auto lDecision = lClasses[lBestClass];
		lTable["Decision"] = { lDecision } ;
		lTable["DecisionProba"] = { lTable["Proba"][lBestClass] };

		recompute_log_probas( lTable );

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0], iTable.at("Feature_13")[0], iTable.at("Feature_14")[0], iTable.at("Feature_15")[0], iTable.at("Feature_16")[0], iTable.at("Feature_17")[0], iTable.at("Feature_18")[0], iTable.at("Feature_19")[0], iTable.at("Feature_20")[0], iTable.at("Feature_21")[0], iTable.at("Feature_22")[0], iTable.at("Feature_23")[0], iTable.at("Feature_24")[0], iTable.at("Feature_25")[0], iTable.at("Feature_26")[0], iTable.at("Feature_27")[0], iTable.at("Feature_28")[0], iTable.at("Feature_29")[0], iTable.at("Feature_30")[0], iTable.at("Feature_31")[0], iTable.at("Feature_32")[0], iTable.at("Feature_33")[0], iTable.at("Feature_34")[0], iTable.at("Feature_35")[0], iTable.at("Feature_36")[0], iTable.at("Feature_37")[0], iTable.at("Feature_38")[0], iTable.at("Feature_39")[0], iTable.at("Feature_40")[0], iTable.at("Feature_41")[0], iTable.at("Feature_42")[0], iTable.at("Feature_43")[0], iTable.at("Feature_44")[0], iTable.at("Feature_45")[0], iTable.at("Feature_46")[0], iTable.at("Feature_47")[0], iTable.at("Feature_48")[0], iTable.at("Feature_49")[0], iTable.at("Feature_50")[0], iTable.at("Feature_51")[0], iTable.at("Feature_52")[0], iTable.at("Feature_53")[0], iTable.at("Feature_54")[0], iTable.at("Feature_55")[0], iTable.at("Feature_56")[0], iTable.at("Feature_57")[0], iTable.at("Feature_58")[0], iTable.at("Feature_59")[0], iTable.at("Feature_60")[0], iTable.at("Feature_61")[0], iTable.at("Feature_62")[0], iTable.at("Feature_63")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/digits.csv");
	return 0;
}
