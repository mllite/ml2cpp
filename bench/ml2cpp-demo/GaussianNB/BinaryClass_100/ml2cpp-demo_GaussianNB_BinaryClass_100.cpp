// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : GaussianNB
// Dataset : BinaryClass_100

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_GaussianNB_BinaryClass_100.exe ml2cpp-demo_GaussianNB_BinaryClass_100.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> get_classes(){
		std::vector<std::any> lClasses = { 0, 1 };

		return lClasses;
	}

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9", "Feature_10", "Feature_11", "Feature_12", "Feature_13", "Feature_14", "Feature_15", "Feature_16", "Feature_17", "Feature_18", "Feature_19", "Feature_20", "Feature_21", "Feature_22", "Feature_23", "Feature_24", "Feature_25", "Feature_26", "Feature_27", "Feature_28", "Feature_29", "Feature_30", "Feature_31", "Feature_32", "Feature_33", "Feature_34", "Feature_35", "Feature_36", "Feature_37", "Feature_38", "Feature_39", "Feature_40", "Feature_41", "Feature_42", "Feature_43", "Feature_44", "Feature_45", "Feature_46", "Feature_47", "Feature_48", "Feature_49", "Feature_50", "Feature_51", "Feature_52", "Feature_53", "Feature_54", "Feature_55", "Feature_56", "Feature_57", "Feature_58", "Feature_59", "Feature_60", "Feature_61", "Feature_62", "Feature_63", "Feature_64", "Feature_65", "Feature_66", "Feature_67", "Feature_68", "Feature_69", "Feature_70", "Feature_71", "Feature_72", "Feature_73", "Feature_74", "Feature_75", "Feature_76", "Feature_77", "Feature_78", "Feature_79", "Feature_80", "Feature_81", "Feature_82", "Feature_83", "Feature_84", "Feature_85", "Feature_86", "Feature_87", "Feature_88", "Feature_89", "Feature_90", "Feature_91", "Feature_92", "Feature_93", "Feature_94", "Feature_95", "Feature_96", "Feature_97", "Feature_98", "Feature_99" };

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

	tTable compute_classification_scores(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9, std::any Feature_10, std::any Feature_11, std::any Feature_12, std::any Feature_13, std::any Feature_14, std::any Feature_15, std::any Feature_16, std::any Feature_17, std::any Feature_18, std::any Feature_19, std::any Feature_20, std::any Feature_21, std::any Feature_22, std::any Feature_23, std::any Feature_24, std::any Feature_25, std::any Feature_26, std::any Feature_27, std::any Feature_28, std::any Feature_29, std::any Feature_30, std::any Feature_31, std::any Feature_32, std::any Feature_33, std::any Feature_34, std::any Feature_35, std::any Feature_36, std::any Feature_37, std::any Feature_38, std::any Feature_39, std::any Feature_40, std::any Feature_41, std::any Feature_42, std::any Feature_43, std::any Feature_44, std::any Feature_45, std::any Feature_46, std::any Feature_47, std::any Feature_48, std::any Feature_49, std::any Feature_50, std::any Feature_51, std::any Feature_52, std::any Feature_53, std::any Feature_54, std::any Feature_55, std::any Feature_56, std::any Feature_57, std::any Feature_58, std::any Feature_59, std::any Feature_60, std::any Feature_61, std::any Feature_62, std::any Feature_63, std::any Feature_64, std::any Feature_65, std::any Feature_66, std::any Feature_67, std::any Feature_68, std::any Feature_69, std::any Feature_70, std::any Feature_71, std::any Feature_72, std::any Feature_73, std::any Feature_74, std::any Feature_75, std::any Feature_76, std::any Feature_77, std::any Feature_78, std::any Feature_79, std::any Feature_80, std::any Feature_81, std::any Feature_82, std::any Feature_83, std::any Feature_84, std::any Feature_85, std::any Feature_86, std::any Feature_87, std::any Feature_88, std::any Feature_89, std::any Feature_90, std::any Feature_91, std::any Feature_92, std::any Feature_93, std::any Feature_94, std::any Feature_95, std::any Feature_96, std::any Feature_97, std::any Feature_98, std::any Feature_99) {
		auto lClasses = get_classes();

		tTable lLogLikelihoodTable = tTable();

		lLogLikelihoodTable["Score"] = {
			-0.6443570163905132 + log_normal_cdf( Feature_0 , 0.019794588624992563 , 0.7934206557759292 ) + log_normal_cdf( Feature_1 , 0.05387954877089766 , 0.8821869029927489 ) + log_normal_cdf( Feature_2 , 0.11488781572325525 , 0.8589074180861208 ) + log_normal_cdf( Feature_3 , -0.05949727299190275 , 0.8257011109804056 ) + log_normal_cdf( Feature_4 , 0.8930763647512598 , 0.5543181749908661 ) + log_normal_cdf( Feature_5 , 0.08949249059529617 , 0.8182972515632199 ) + log_normal_cdf( Feature_6 , -0.06522451547763095 , 0.8225581965890518 ) + log_normal_cdf( Feature_7 , -0.08791441649040836 , 0.943054584219679 ) + log_normal_cdf( Feature_8 , 0.025350209804008636 , 1.1831175845260433 ) + log_normal_cdf( Feature_9 , 0.016900580854820914 , 0.551645321795294 ) + log_normal_cdf( Feature_10 , 0.1875007620182646 , 1.0806685996049772 ) + log_normal_cdf( Feature_11 , -0.09483651079466747 , 0.8506621140119561 ) + log_normal_cdf( Feature_12 , -0.1785982020829447 , 0.8596384549474384 ) + log_normal_cdf( Feature_13 , -0.18191036873091165 , 1.1685668539940415 ) + log_normal_cdf( Feature_14 , -0.004347323688788593 , 1.1623293756788855 ) + log_normal_cdf( Feature_15 , 0.1283845183799563 , 0.6261084012080401 ) + log_normal_cdf( Feature_16 , -0.14735711589120865 , 1.021524816783869 ) + log_normal_cdf( Feature_17 , -0.2276796172533036 , 0.9547124442514188 ) + log_normal_cdf( Feature_18 , 0.019408616103087622 , 1.8105810763483352 ) + log_normal_cdf( Feature_19 , -0.004980786663607562 , 0.7387857148024587 ) + log_normal_cdf( Feature_20 , -0.012853936651835691 , 0.9403755016369684 ) + log_normal_cdf( Feature_21 , 0.22277073351109422 , 1.307547836203844 ) + log_normal_cdf( Feature_22 , 0.15328063742696757 , 1.0904118022532128 ) + log_normal_cdf( Feature_23 , 0.23265290530960525 , 0.9387175187878449 ) + log_normal_cdf( Feature_24 , 0.10114909320441352 , 0.5991050322783882 ) + log_normal_cdf( Feature_25 , 0.023392448730903966 , 0.8223228581344799 ) + log_normal_cdf( Feature_26 , 0.10891851470116136 , 0.8775773513412668 ) + log_normal_cdf( Feature_27 , -0.032262110915383495 , 1.1077491642739135 ) + log_normal_cdf( Feature_28 , -0.022204573180693993 , 1.0136830742370346 ) + log_normal_cdf( Feature_29 , 0.036693650734853304 , 0.9689189355313023 ) + log_normal_cdf( Feature_30 , 0.0316765321536491 , 1.1387147372505586 ) + log_normal_cdf( Feature_31 , 0.0015193616563879938 , 0.8372317808285927 ) + log_normal_cdf( Feature_32 , 0.10018871048433792 , 1.035064215685892 ) + log_normal_cdf( Feature_33 , 0.39243511789808394 , 1.3260454383657048 ) + log_normal_cdf( Feature_34 , 0.32898340767368317 , 0.9746459912680695 ) + log_normal_cdf( Feature_35 , -0.021088501351309914 , 0.33641688432362665 ) + log_normal_cdf( Feature_36 , 0.07008004118550992 , 0.8972304820336925 ) + log_normal_cdf( Feature_37 , 0.282916623698697 , 0.7783624053296255 ) + log_normal_cdf( Feature_38 , 0.09888704165824835 , 1.162255351927528 ) + log_normal_cdf( Feature_39 , 0.20870520227015488 , 1.0935218470631352 ) + log_normal_cdf( Feature_40 , -0.12590656007024434 , 1.1215287195450232 ) + log_normal_cdf( Feature_41 , 0.12909574543337726 , 0.820536538825162 ) + log_normal_cdf( Feature_42 , -0.03923330293767345 , 1.313371628645498 ) + log_normal_cdf( Feature_43 , 0.05987753646448564 , 0.776482504385046 ) + log_normal_cdf( Feature_44 , 0.15335804412212967 , 1.1489905607640682 ) + log_normal_cdf( Feature_45 , -0.009250535507466956 , 1.2930539666841827 ) + log_normal_cdf( Feature_46 , -0.2990948797859349 , 0.9812140368790367 ) + log_normal_cdf( Feature_47 , 0.23739694973613715 , 1.0971665102609667 ) + log_normal_cdf( Feature_48 , 0.33709486949609224 , 0.9883879198141011 ) + log_normal_cdf( Feature_49 , 0.2271138706578479 , 1.4944858543708086 ) + log_normal_cdf( Feature_50 , -0.13205314511587624 , 1.5270166278215054 ) + log_normal_cdf( Feature_51 , -0.02533519451411991 , 1.3377417050546758 ) + log_normal_cdf( Feature_52 , 0.1856209425156102 , 0.9602258919412131 ) + log_normal_cdf( Feature_53 , -0.1671972903482089 , 0.6353283359825292 ) + log_normal_cdf( Feature_54 , 0.3113753089730967 , 1.426297579449859 ) + log_normal_cdf( Feature_55 , 0.12226634355631164 , 1.0298536924501425 ) + log_normal_cdf( Feature_56 , -0.05067441188833494 , 0.8824144471117256 ) + log_normal_cdf( Feature_57 , -0.925345520617862 , 0.3452115790996632 ) + log_normal_cdf( Feature_58 , -0.10667841264574966 , 0.8082290834917365 ) + log_normal_cdf( Feature_59 , 0.06698266262837926 , 1.4935209345186402 ) + log_normal_cdf( Feature_60 , 0.18222738617493864 , 0.7947624871877417 ) + log_normal_cdf( Feature_61 , 0.05715696849665879 , 0.7506501416153605 ) + log_normal_cdf( Feature_62 , -0.08609982182153482 , 0.8215802084121995 ) + log_normal_cdf( Feature_63 , -0.1364691018600721 , 0.8025367952762278 ) + log_normal_cdf( Feature_64 , -0.12247573821464235 , 0.8512143318508475 ) + log_normal_cdf( Feature_65 , -0.10898598628278744 , 0.9399744131037215 ) + log_normal_cdf( Feature_66 , -0.05332547881563886 , 0.8230179526127814 ) + log_normal_cdf( Feature_67 , -0.4176360500803034 , 0.6901584132477199 ) + log_normal_cdf( Feature_68 , -0.14841543337174562 , 1.1065988387325187 ) + log_normal_cdf( Feature_69 , 0.24335263210713945 , 0.8242792344063093 ) + log_normal_cdf( Feature_70 , 0.08801496346012337 , 0.8349620846994658 ) + log_normal_cdf( Feature_71 , -0.0850578189049838 , 0.8232855283108365 ) + log_normal_cdf( Feature_72 , -0.26039944268284065 , 1.024176450831044 ) + log_normal_cdf( Feature_73 , 0.21076983196756766 , 0.9684461583743982 ) + log_normal_cdf( Feature_74 , -0.1683610522305435 , 1.0564285362473878 ) + log_normal_cdf( Feature_75 , 0.23572070105917883 , 1.2402781824788423 ) + log_normal_cdf( Feature_76 , -0.225280368081331 , 1.0902223237454864 ) + log_normal_cdf( Feature_77 , 0.3555690513985725 , 0.06298456421584024 ) + log_normal_cdf( Feature_78 , 0.05993614873442727 , 1.0320398996618156 ) + log_normal_cdf( Feature_79 , 0.011891179985572629 , 1.2980640612748493 ) + log_normal_cdf( Feature_80 , -0.11975335939357816 , 0.8460377146975909 ) + log_normal_cdf( Feature_81 , -0.14552276964087024 , 0.7686732206432407 ) + log_normal_cdf( Feature_82 , -0.12203128386833016 , 0.7007497977177675 ) + log_normal_cdf( Feature_83 , 0.027295259208443383 , 1.1503505961446323 ) + log_normal_cdf( Feature_84 , 0.08450724374202644 , 0.8622045353449733 ) + log_normal_cdf( Feature_85 , 0.1287604240937586 , 0.7924317181153981 ) + log_normal_cdf( Feature_86 , 0.2644170368428714 , 1.361437149616644 ) + log_normal_cdf( Feature_87 , -0.13581011579523133 , 0.906498891650221 ) + log_normal_cdf( Feature_88 , -0.07088021173341379 , 0.7536500873097689 ) + log_normal_cdf( Feature_89 , 0.011337551441278565 , 0.877436229282162 ) + log_normal_cdf( Feature_90 , 0.3297772655685176 , 0.6626699126746745 ) + log_normal_cdf( Feature_91 , 0.06124591095302724 , 1.2282854773303926 ) + log_normal_cdf( Feature_92 , -0.13281880506682206 , 1.1604193599502974 ) + log_normal_cdf( Feature_93 , 0.09816603559407577 , 1.0774892203722959 ) + log_normal_cdf( Feature_94 , -0.04432665508262422 , 1.03263470323209 ) + log_normal_cdf( Feature_95 , 0.14573844053936702 , 0.6974540475342939 ) + log_normal_cdf( Feature_96 , 0.23318206686580054 , 0.9909494720314814 ) + log_normal_cdf( Feature_97 , 0.22297500914427748 , 1.0325410265393171 ) + log_normal_cdf( Feature_98 , -0.17572923813625282 , 0.8571409324050053 ) + log_normal_cdf( Feature_99 , 0.17277396476940649 , 0.9094039815817555 ),
			-0.7444404749474959 + log_normal_cdf( Feature_0 , 0.2918784198423757 , 0.654533243436735 ) + log_normal_cdf( Feature_1 , -0.13044869060009245 , 0.938627527874805 ) + log_normal_cdf( Feature_2 , 0.12424644273978813 , 1.1095905172275486 ) + log_normal_cdf( Feature_3 , -0.29990729048661824 , 0.8605197044255282 ) + log_normal_cdf( Feature_4 , -0.8495190243649432 , 1.108446125160258 ) + log_normal_cdf( Feature_5 , 0.4139775617134418 , 1.269421491857508 ) + log_normal_cdf( Feature_6 , -0.16722254418045204 , 0.7616553093279548 ) + log_normal_cdf( Feature_7 , -0.348651305493939 , 0.6283810797314088 ) + log_normal_cdf( Feature_8 , 0.21438092420793456 , 0.9541110823230581 ) + log_normal_cdf( Feature_9 , 0.04260867366275549 , 0.8027174998396528 ) + log_normal_cdf( Feature_10 , 0.025966300266437602 , 1.456514585480682 ) + log_normal_cdf( Feature_11 , 0.1078888541255943 , 1.3955549556594677 ) + log_normal_cdf( Feature_12 , 0.03450553033015382 , 0.8938062124283949 ) + log_normal_cdf( Feature_13 , -0.03885125053631652 , 0.7379137917990867 ) + log_normal_cdf( Feature_14 , -0.2597767745554097 , 1.0900136413511834 ) + log_normal_cdf( Feature_15 , -0.2639954747143873 , 1.1561640084496423 ) + log_normal_cdf( Feature_16 , -0.13568453874079053 , 0.7321866295352656 ) + log_normal_cdf( Feature_17 , -0.014765536068403742 , 1.1954511828731447 ) + log_normal_cdf( Feature_18 , -0.18592002166169416 , 1.6581256222648277 ) + log_normal_cdf( Feature_19 , -0.15552097648806476 , 1.0671319610035392 ) + log_normal_cdf( Feature_20 , 0.1376651389913864 , 0.8642071193233284 ) + log_normal_cdf( Feature_21 , -0.01792476704799153 , 1.6114561696209497 ) + log_normal_cdf( Feature_22 , -0.04296076908571887 , 0.5531943605686669 ) + log_normal_cdf( Feature_23 , 0.06403144722485822 , 0.7682188266985105 ) + log_normal_cdf( Feature_24 , -0.2110032227585434 , 0.5419821191832286 ) + log_normal_cdf( Feature_25 , -0.14577685205182442 , 0.6531551224049529 ) + log_normal_cdf( Feature_26 , 0.08203078059226424 , 1.0079730841553693 ) + log_normal_cdf( Feature_27 , 0.2553177733223129 , 1.2679055764519447 ) + log_normal_cdf( Feature_28 , 0.09312539545152342 , 0.7467447819670968 ) + log_normal_cdf( Feature_29 , 0.08876819127972477 , 1.5547242399602823 ) + log_normal_cdf( Feature_30 , -0.06562232177125303 , 1.0899637308506347 ) + log_normal_cdf( Feature_31 , -0.23818036813429808 , 1.0606586942099638 ) + log_normal_cdf( Feature_32 , 0.13960794021186765 , 0.987277629434836 ) + log_normal_cdf( Feature_33 , 0.04770117076065322 , 0.5719898669731597 ) + log_normal_cdf( Feature_34 , 0.13251689783270607 , 0.5671245913412516 ) + log_normal_cdf( Feature_35 , 0.1773498257033296 , 1.1208984255034273 ) + log_normal_cdf( Feature_36 , -0.14733919978334517 , 0.8507538853486368 ) + log_normal_cdf( Feature_37 , 0.2630792631072191 , 0.7856778369697014 ) + log_normal_cdf( Feature_38 , -0.1583268728690875 , 0.763945476694461 ) + log_normal_cdf( Feature_39 , -0.1669091619603902 , 0.9879616064104461 ) + log_normal_cdf( Feature_40 , -0.08687856483048613 , 0.7939574088616652 ) + log_normal_cdf( Feature_41 , -0.08709961316765284 , 1.3448552862124012 ) + log_normal_cdf( Feature_42 , -0.1603662789617598 , 0.6523541031284661 ) + log_normal_cdf( Feature_43 , -0.05360307010712552 , 0.9139148888526177 ) + log_normal_cdf( Feature_44 , -0.09178043165694104 , 1.1077261616278926 ) + log_normal_cdf( Feature_45 , -0.29558030038383404 , 0.6423899660615046 ) + log_normal_cdf( Feature_46 , -0.0204797619456042 , 1.0930566554557575 ) + log_normal_cdf( Feature_47 , 0.2657079123053793 , 0.9670925559076236 ) + log_normal_cdf( Feature_48 , -0.06471752265867832 , 0.7224126945746864 ) + log_normal_cdf( Feature_49 , -0.036590464760650754 , 0.7831722079439467 ) + log_normal_cdf( Feature_50 , -0.13388991213688947 , 1.3592166774910852 ) + log_normal_cdf( Feature_51 , -0.06082276683268923 , 1.0177874574409709 ) + log_normal_cdf( Feature_52 , 0.11513534573920825 , 1.1938840839565663 ) + log_normal_cdf( Feature_53 , -0.14828451728456907 , 0.6894113914434182 ) + log_normal_cdf( Feature_54 , 0.03324330136186313 , 0.7953740608126575 ) + log_normal_cdf( Feature_55 , -0.028241048974077514 , 0.9773020445930182 ) + log_normal_cdf( Feature_56 , 0.030988452376955175 , 0.9985352789781851 ) + log_normal_cdf( Feature_57 , 0.9185662055430868 , 1.1809449978985382 ) + log_normal_cdf( Feature_58 , -0.1611814081806529 , 0.6935758181571369 ) + log_normal_cdf( Feature_59 , 0.17578207188470754 , 0.7226745894548193 ) + log_normal_cdf( Feature_60 , -0.3401635009350173 , 1.263570749813992 ) + log_normal_cdf( Feature_61 , 0.2641648956340186 , 0.8328937975881704 ) + log_normal_cdf( Feature_62 , 0.08125074729541426 , 0.8460420571440721 ) + log_normal_cdf( Feature_63 , 0.1123588989296834 , 1.3456439553560589 ) + log_normal_cdf( Feature_64 , 0.07775462133477613 , 0.6969875628206943 ) + log_normal_cdf( Feature_65 , 0.15070293228453271 , 0.7017557054484146 ) + log_normal_cdf( Feature_66 , 0.17278142414267003 , 0.8827393810795638 ) + log_normal_cdf( Feature_67 , -0.02440801588858139 , 1.032442120829732 ) + log_normal_cdf( Feature_68 , -0.34957302223912595 , 1.058739782592179 ) + log_normal_cdf( Feature_69 , -0.13117783995716248 , 0.7083569110408316 ) + log_normal_cdf( Feature_70 , -0.007458258518597889 , 0.7158175099858239 ) + log_normal_cdf( Feature_71 , -0.2302943728627609 , 1.1297741544198086 ) + log_normal_cdf( Feature_72 , -0.18005378747106066 , 0.7798276563838347 ) + log_normal_cdf( Feature_73 , -0.088617946285696 , 0.7974547638082391 ) + log_normal_cdf( Feature_74 , -0.01685551249031646 , 1.0793539908202496 ) + log_normal_cdf( Feature_75 , 0.17625646572458276 , 0.9977295854083389 ) + log_normal_cdf( Feature_76 , -0.04459025353394924 , 0.9783831240123493 ) + log_normal_cdf( Feature_77 , -0.34677798570640783 , 0.17178670852340439 ) + log_normal_cdf( Feature_78 , 0.0818288258624968 , 0.9577215907489983 ) + log_normal_cdf( Feature_79 , 0.24080389982004605 , 0.8512922082111278 ) + log_normal_cdf( Feature_80 , 0.06127277102978808 , 1.2039621594020657 ) + log_normal_cdf( Feature_81 , -0.07207528225554026 , 0.664330200894298 ) + log_normal_cdf( Feature_82 , 0.21964358835276468 , 0.976773358573643 ) + log_normal_cdf( Feature_83 , 0.07008355273741211 , 0.9066260255688101 ) + log_normal_cdf( Feature_84 , 0.12332447579176042 , 0.8921373091509984 ) + log_normal_cdf( Feature_85 , -0.06772175112381663 , 1.11201228279869 ) + log_normal_cdf( Feature_86 , 0.040648011813979056 , 0.6019742899466828 ) + log_normal_cdf( Feature_87 , -0.04717153943692447 , 0.902541680015608 ) + log_normal_cdf( Feature_88 , -0.034336063518337935 , 1.4157266960868575 ) + log_normal_cdf( Feature_89 , -0.1319234439245708 , 1.4983016587039992 ) + log_normal_cdf( Feature_90 , -0.010069205119225254 , 0.6525573953756854 ) + log_normal_cdf( Feature_91 , -0.23642311812617484 , 1.0081130423861562 ) + log_normal_cdf( Feature_92 , 0.2885418734134063 , 1.5306963480448068 ) + log_normal_cdf( Feature_93 , -0.1272077589573801 , 1.2153523078308275 ) + log_normal_cdf( Feature_94 , 0.10393027249723849 , 1.4308359397367199 ) + log_normal_cdf( Feature_95 , -0.06770195636463489 , 0.858348717514688 ) + log_normal_cdf( Feature_96 , -0.2011056358610035 , 0.9512979363434239 ) + log_normal_cdf( Feature_97 , 0.13740596966306318 , 0.775534770139866 ) + log_normal_cdf( Feature_98 , -0.061194849702279876 , 0.8505139202428982 ) + log_normal_cdf( Feature_99 , -0.18165515574663463 , 0.7780502889871217 ) 
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
		tTable lTable = compute_classification_scores(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0], iTable.at("Feature_10")[0], iTable.at("Feature_11")[0], iTable.at("Feature_12")[0], iTable.at("Feature_13")[0], iTable.at("Feature_14")[0], iTable.at("Feature_15")[0], iTable.at("Feature_16")[0], iTable.at("Feature_17")[0], iTable.at("Feature_18")[0], iTable.at("Feature_19")[0], iTable.at("Feature_20")[0], iTable.at("Feature_21")[0], iTable.at("Feature_22")[0], iTable.at("Feature_23")[0], iTable.at("Feature_24")[0], iTable.at("Feature_25")[0], iTable.at("Feature_26")[0], iTable.at("Feature_27")[0], iTable.at("Feature_28")[0], iTable.at("Feature_29")[0], iTable.at("Feature_30")[0], iTable.at("Feature_31")[0], iTable.at("Feature_32")[0], iTable.at("Feature_33")[0], iTable.at("Feature_34")[0], iTable.at("Feature_35")[0], iTable.at("Feature_36")[0], iTable.at("Feature_37")[0], iTable.at("Feature_38")[0], iTable.at("Feature_39")[0], iTable.at("Feature_40")[0], iTable.at("Feature_41")[0], iTable.at("Feature_42")[0], iTable.at("Feature_43")[0], iTable.at("Feature_44")[0], iTable.at("Feature_45")[0], iTable.at("Feature_46")[0], iTable.at("Feature_47")[0], iTable.at("Feature_48")[0], iTable.at("Feature_49")[0], iTable.at("Feature_50")[0], iTable.at("Feature_51")[0], iTable.at("Feature_52")[0], iTable.at("Feature_53")[0], iTable.at("Feature_54")[0], iTable.at("Feature_55")[0], iTable.at("Feature_56")[0], iTable.at("Feature_57")[0], iTable.at("Feature_58")[0], iTable.at("Feature_59")[0], iTable.at("Feature_60")[0], iTable.at("Feature_61")[0], iTable.at("Feature_62")[0], iTable.at("Feature_63")[0], iTable.at("Feature_64")[0], iTable.at("Feature_65")[0], iTable.at("Feature_66")[0], iTable.at("Feature_67")[0], iTable.at("Feature_68")[0], iTable.at("Feature_69")[0], iTable.at("Feature_70")[0], iTable.at("Feature_71")[0], iTable.at("Feature_72")[0], iTable.at("Feature_73")[0], iTable.at("Feature_74")[0], iTable.at("Feature_75")[0], iTable.at("Feature_76")[0], iTable.at("Feature_77")[0], iTable.at("Feature_78")[0], iTable.at("Feature_79")[0], iTable.at("Feature_80")[0], iTable.at("Feature_81")[0], iTable.at("Feature_82")[0], iTable.at("Feature_83")[0], iTable.at("Feature_84")[0], iTable.at("Feature_85")[0], iTable.at("Feature_86")[0], iTable.at("Feature_87")[0], iTable.at("Feature_88")[0], iTable.at("Feature_89")[0], iTable.at("Feature_90")[0], iTable.at("Feature_91")[0], iTable.at("Feature_92")[0], iTable.at("Feature_93")[0], iTable.at("Feature_94")[0], iTable.at("Feature_95")[0], iTable.at("Feature_96")[0], iTable.at("Feature_97")[0], iTable.at("Feature_98")[0], iTable.at("Feature_99")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/BinaryClass_100.csv");
	return 0;
}