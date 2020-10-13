// ******************************************************** 

// This C++ code was automatically generated by ml2cpp (development version).
// Copyright 2020

// https://github.com/antoinecarme/ml2cpp
// Model : SVR_poly
// Dataset : freidman1

// This CPP code can be compiled using any C++-17 compiler.
// g++ -Wall -Wno-unused-function -std=c++17 -g -o ml2cpp-demo_SVR_poly_freidman1.exe ml2cpp-demo_SVR_poly_freidman1.cpp

// Model deployment code

// ******************************************************** 

#include "../../Generic.i"

namespace  {

	std::vector<std::any> lProblem_data_dual = { 
	 0.019600447178423096 , 0.1 , -0.1 , -0.1 , -0.1 , -0.1 , -0.04314112932899563 , 0.0405074530340691 , 0.1 , -0.1 , 0.1 , 0.1 , 0.08686165666265566 , -0.045484299517619294 , -0.0038105611891126245 , -0.1 , 0.027088754583018224 , -0.1 , 0.1 , -0.1 , -0.1 , 0.1 , 0.05112245477040103 , -0.1 , -0.1 , -0.1 , -0.02372779724465225 , -0.05515647267614931 , 0.1 , -0.1 , 0.0787306313025721 , -0.010514055443569245 , 0.1 , 0.014698408026664493 , 0.08320921880536275 , 0.1 , 0.1 , 0.1 , 0.1 , -0.0034521282470626594 , 0.06610888404340137 , 0.1 , -0.1 , 0.1 , -0.1 , -0.1 , -0.1 , -0.1 , -0.1 , -0.1 , -0.1 , 0.1 , -0.1 , -0.1 , -0.029885509699833366 , 0.1 , -0.05143318905497186 , 0.1 , -0.1 , -0.1 , 0.06198664488321339 , 0.1 , 0.1 , -0.1 , -0.1 , -0.1 , 0.04146690564971437 , 0.1 , 0.035705528349241566 , 0.1 , 0.005131772939279722 , 0.1 , -0.04561361782605055 , 0.1 , 0.1 , 0.1 ,};
	

	std::vector<std::vector<std::any> > lProblem_data_sv = { 
	 { 0.693923955193759, 0.0741781212105147, 0.9354970990229087, 0.4640783341563046, 0.41582805769838727, 0.189475061881763, 0.09995386118122851, 0.14819345970599818, 0.7870377755058512, 0.46439017391795956 },
	 { 0.9365282886230081, 0.32590269318167553, 0.8759603694390158, 0.79533946782015, 0.9456469694233068, 0.7086688273455976, 0.7591552800283827, 0.7964480648423423, 0.3938107344146389, 0.5301399518704369 },
	 { 0.3615698457796095, 0.5929801883894559, 0.35635338649589077, 0.2677803732331451, 0.17066870867496198, 0.012307267911704223, 0.33802568469988337, 0.13989914886952015, 0.5457899619549169, 0.5049507612883856 },
	 { 0.30069635129007477, 0.7204188000602999, 0.5829040809418105, 0.6426497763057181, 0.9190510905934363, 0.6645343120400884, 0.6843112802137344, 0.4055338962001863, 0.019985592777493122, 0.12320942082046549 },
	 { 0.8558166339180842, 0.8683631198596637, 0.32368540331494966, 0.9423047942542754, 0.030289584991099905, 0.3594900817370913, 0.3807384106815942, 0.43864670012997886, 0.15288481675519405, 0.003622023715767142 },
	 { 0.7113399330260444, 0.8276251380809095, 0.6966767109883927, 0.5713051217834823, 0.6527047802045267, 0.41755845353693377, 0.46371995112452347, 0.9037753969878485, 0.9143864801316212, 0.8647669667038388 },
	 { 0.015021310253122144, 0.0006034056357101525, 0.3404027104874394, 0.8813039096423059, 0.4906546600839298, 0.7298679563207288, 0.7514738660771196, 0.13145116809009816, 0.0014719983074734655, 0.08511191458315925 },
	 { 0.6508068217649317, 0.8247059834072795, 0.14354024845151192, 0.980592685000836, 0.005807417979881824, 0.2518415193774599, 0.5213342271064282, 0.4723008536699548, 0.7446274145722073, 0.9246013488604747 },
	 { 0.4044233091919264, 0.26040655407607516, 0.03866274947464787, 0.35780763024550366, 0.1975869393049412, 0.089709703055459, 0.44963351204713553, 0.08639297884180575, 0.25282852707475845, 0.24384082410665975 },
	 { 0.6487598477422791, 0.2818865078416276, 0.6291187273491999, 0.20235358579738383, 0.054305830277497025, 0.9085281642538757, 0.48144031373730045, 0.38894798027734434, 0.307483000073309, 0.015107018517469206 },
	 { 0.4273189343322634, 0.596840212856462, 0.9738094563683325, 0.18065267604549218, 0.5062029643664651, 0.1754744328103398, 0.10447729455745358, 0.18853801455282126, 0.7649456162036661, 0.05766645680235072 },
	 { 0.44078068561234063, 0.8286410350022047, 0.003919208797683704, 0.5571236322358512, 0.7141812905982134, 0.934252008705201, 0.38564510799136065, 0.08956531528989586, 0.9071506984172727, 0.3627692472499402 },
	 { 0.7651752581595906, 0.5711340776037424, 0.6877221464619643, 0.6396386067545966, 0.18000679872560887, 0.8884389875708198, 0.8746073175788042, 0.32637838598406343, 0.30293111693014707, 0.2766979759593161 },
	 { 0.018569394722334986, 0.7669783085671145, 0.9369392482819459, 0.7535269717445015, 0.12450748302261394, 0.9844996586806277, 0.5757020106557555, 0.07600389087024861, 0.7985736277571945, 0.6273009161955346 },
	 { 0.6972654712022256, 0.9444972613447818, 0.006541511214480322, 0.8785989417171546, 0.0657377691465626, 0.8975156369365571, 0.343137976778491, 0.5442232419540632, 0.9442967183771754, 0.1511660522155277 },
	 { 0.6643742352789134, 0.8031389634304898, 0.3440457365849323, 0.6336641679630896, 0.7724779253775678, 0.9400631649358863, 0.6875457518238411, 0.6223146535100572, 0.1351649533369088, 0.8927924694418754 },
	 { 0.8250361197375535, 0.2385958562844518, 0.533834716927703, 0.37869801330871256, 0.9719219616360474, 0.7582697267753132, 0.7914114764541101, 0.6407258973480201, 0.7803364203742906, 0.5550930132964156 },
	 { 0.7797905623008367, 0.004283194536650381, 0.45736238588110856, 0.7591698137341283, 0.5727811851412551, 0.9156145402080297, 0.1579290629800708, 0.048856981406643296, 0.48396329258009607, 0.9403621871414916 },
	 { 0.4805360591852459, 0.7264611586160685, 0.9530009720103574, 0.2880612751081213, 0.8375661114941836, 0.23586610851414558, 0.8696933635755417, 0.6905325918196634, 0.6041894756986094, 0.4847756716791647 },
	 { 0.8668252431496181, 0.1072168963991238, 0.30160597930503374, 0.10871860932955102, 0.5608345556620697, 0.7997834844596228, 0.8186187306957274, 0.19773740246826788, 0.7929933027541831, 0.24728590737880873 },
	 { 0.9905100509818122, 0.03266022032489613, 0.3920948845870472, 0.8082040549619474, 0.39680841547582124, 0.9056123453666111, 0.8810248170488273, 0.4280039175885251, 0.15137669757753114, 0.3573584313699357 },
	 { 0.6879782669900801, 0.7139083874563263, 0.22817076971416228, 0.32444789256042306, 0.4391937147026179, 0.6653185629710004, 0.6277642001440132, 0.2836608858087605, 0.7532051572559786, 0.4750745345624974 },
	 { 0.14898823012279883, 0.5016443617767753, 0.20234456185371796, 0.9774053424912685, 0.287194457958574, 0.4407289885227632, 0.07289425728619492, 0.33658313027829456, 0.8551789677713602, 0.03020099888736394 },
	 { 0.7642931245692377, 0.20858810711332798, 0.7501154847733108, 0.5459253313470611, 0.05555683279187529, 0.7016368216615959, 0.26523222910347455, 0.11959763981915061, 0.37591049526769804, 0.6447399191046476 },
	 { 0.8255815423347828, 0.9063448888684774, 0.029026452288315685, 0.5890092986610974, 0.43123186558465754, 0.9058721736276769, 0.4560940687108932, 0.6896879818609426, 0.7470342432713207, 0.06312457787809178 },
	 { 0.3454797097579463, 0.9107314550687862, 0.7243698164486757, 0.609810834299298, 0.9484486314429021, 0.5427528686781514, 0.613987885486019, 0.41805724741390926, 0.709949209237898, 0.8792557252319532 },
	 { 0.27048614951616645, 0.7155578115522746, 0.10252882697920429, 0.945603049026875, 0.19508133595183474, 0.18512101536678838, 0.8387549476151748, 0.9615704236086727, 0.4879740995944759, 0.48177324436256974 },
	 { 0.07500600165004045, 0.21797094655971583, 0.3424709139847716, 0.45256108182367927, 0.4394226980931042, 0.7775882873135233, 0.813848795251494, 0.35300739741813236, 0.8266197960226379, 0.864682228562219 },
	 { 0.6401480486313595, 0.5610337010040864, 0.1799438731349703, 0.9473253216087352, 0.4943022917928076, 0.5681853819194683, 0.8137150168169013, 0.780963766676324, 0.648147203260239, 0.3707972314948712 },
	 { 0.7503397244364791, 0.032203433979595575, 0.33901119947237257, 0.5281743135167912, 0.9645023555462153, 0.18112090617176702, 0.38967389730358126, 0.6348835503026178, 0.013518045508856713, 0.5780775777362427 },
	 { 0.38016834265134203, 0.8175652657300848, 0.09504745946367044, 0.0759379199279675, 0.7954087582385554, 0.8288932024690606, 0.04583748113370778, 0.8825781792474706, 0.04200922317476452, 0.6077304058727953 },
	 { 0.5913895792688406, 0.6678313046060772, 0.8731690017137779, 0.7764874780202456, 0.9406064572716946, 0.9782254861027883, 0.540624983940059, 0.8701343751155143, 0.7131899958464704, 0.42047567808180897 },
	 { 0.6355254589142619, 0.3104345307175761, 0.34782116643449046, 0.7485420201652111, 0.8500581711383688, 0.7900702963170074, 0.12236838619467139, 0.3596340972484052, 0.3103367860367532, 0.1426493813730133 },
	 { 0.30218992230977715, 0.10447884771648441, 0.6868310612594289, 0.7948889514969302, 0.6386171734947204, 0.764941145919249, 0.5471047301856969, 0.9292093148893652, 0.42926522555935076, 0.8386388959149511 },
	 { 0.6910044567030683, 0.20605940031875558, 0.8431429271568792, 0.2929347293172372, 0.6300575841476006, 0.9114331956103373, 0.11155576673797052, 0.4476196701736098, 0.04309416057688986, 0.9940891801131571 },
	 { 0.8358381420053874, 0.6033663665946328, 0.961895650382551, 0.05268808199440811, 0.6199067842944327, 0.8351083446448072, 0.4358960437269215, 0.3375309253598989, 0.42172706484900324, 0.01846427693956154 },
	 { 0.5384102305994837, 0.28037750547337037, 0.15860104687264842, 0.49895129783425696, 0.5770564111785556, 0.9338494091923242, 0.15326716261726414, 0.03359107390665783, 0.7104185591645422, 0.8612317521518238 },
	 { 0.325182019676443, 0.5573384881257594, 0.07674688939759333, 0.25363173619843116, 0.8063183503343665, 0.048747149966324343, 0.4815932648354033, 0.4123158344477229, 0.5784034259311219, 0.8906071874858213 },
	 { 0.8040097090382655, 0.4490646907281224, 0.06631122256497202, 0.8215852294504924, 0.14682622275619406, 0.6836935994910014, 0.013761108155101898, 0.09885208129108058, 0.13520042959385026, 0.04958261937647712 },
	 { 0.6800240853783431, 0.5542972199729062, 0.33538391269758494, 0.3788112374887743, 0.929127828049707, 0.3743966905426851, 0.9665551150753051, 0.29077736034104595, 0.7833479636539578, 0.34626559922186095 },
	 { 0.6958353961616501, 0.5017776396250101, 0.7937187998169644, 0.9678700273094228, 0.20778030637448996, 0.44268589962930094, 0.6660011390251719, 0.7384615882629801, 0.06292766107513681, 0.6574332757074332 },
	 { 0.7953951578925526, 0.6900239013470612, 0.02488339715856036, 0.7542655552309983, 0.3642076466292469, 0.349217663055282, 0.46616907766543325, 0.9730883934542683, 0.014718275423886706, 0.39151009572836204 },
	 { 0.09021190074277752, 0.2269332423928172, 0.4231538473843591, 0.7540239837506534, 0.11920432983287899, 0.9294592774599648, 0.044505714773144245, 0.09788585131261551, 0.3315202647270574, 0.6285535124494456 },
	 { 0.6089512168171621, 0.13367948536223095, 0.01760233266492839, 0.42684349891882756, 0.9260703993753714, 0.8748652596447921, 0.5165052020909686, 0.4621391766931475, 0.5666035361130893, 0.8510002671907501 },
	 { 0.777615543480557, 0.22799087239402005, 0.26771418034857686, 0.645180479099038, 0.6970894087750684, 0.7054993400803966, 0.25643725071749246, 0.8261214402277887, 0.7530735802510689, 0.24345096744635186 },
	 { 0.24444268786670065, 0.12232799475175549, 0.08683393028667263, 0.49096166785048057, 0.2442604658565246, 0.12881897216333205, 0.36808010885570785, 0.6482601086634314, 0.16484155649355747, 0.2127778238442638 },
	 { 0.30334793538245497, 0.44247984033924814, 0.24243646824053056, 0.2830243931772205, 0.9739564501996593, 0.7012851268790045, 0.13597022162039407, 0.3694461065450365, 0.08227721743073002, 0.3005639808285524 },
	 { 0.2836992071685661, 0.5562543811545124, 0.4033606609472742, 0.010190616347653503, 0.43473021523220345, 0.8975339397682865, 0.8680577939446797, 0.22029473364357433, 0.9363830929504634, 0.7556297313287261 },
	 { 0.7538397918551462, 0.14622430343179615, 0.42050374948151836, 0.3152331202112455, 0.06143081371307535, 0.3093215198935122, 0.21825174115349721, 0.462650975512517, 0.910120788230267, 0.5584579470472817 },
	 { 0.8133947386214724, 0.9526118388272407, 0.8642819550705241, 0.7722729180897906, 0.40511112356740564, 0.3509015729148923, 0.19965000129258226, 0.08694569048556866, 0.04260837057858313, 0.9004731099719213 },
	 { 0.20562836726629963, 0.9440716513312936, 0.4895624792598544, 0.6371731407367831, 0.48694383739601765, 0.9418248233771972, 0.31144836807627496, 0.36326243415892967, 0.3520412262564764, 0.9695902975683174 },
	 { 0.5452345124150317, 0.8246564255606178, 0.0605716539053518, 0.14652046211665237, 0.09975787679697001, 0.6812391525293781, 0.3279897179640998, 0.6638046647489093, 0.8460554165207508, 0.3622710665229335 },
	 { 0.8855079299658417, 0.15294734058996418, 0.45628995073903356, 0.3166518637587832, 0.5425695400794094, 0.12224714877720355, 0.8849044067315783, 0.7665229961000211, 0.3466930553461237, 0.7105182294811924 },
	 { 0.2572806806019938, 0.01807732386109706, 0.633597305054058, 0.7325037070939067, 0.4747965292587836, 0.3230682282323345, 0.5084128330498919, 0.5887161092173093, 0.4396138466261482, 0.9651837394277827 },
	 { 0.8981731423166632, 0.20481625102153989, 0.6590117398404622, 0.5547859500579124, 0.9616624958244633, 0.006159313154717183, 0.8826656803523376, 0.8303290306421373, 0.666652340150686, 0.45623122655513515 },
	 { 0.3244841690667478, 0.8231632932589577, 0.09919892723504464, 0.5011973151070838, 0.8587032782051556, 0.03168081701194747, 0.932092047764723, 0.07485402658997453, 0.5303613355149399, 0.9850914252499385 },
	 { 0.3126275727624964, 0.536080872850707, 0.7849493833229624, 0.037252973398734124, 0.6220274689978966, 0.2158607820965983, 0.149543511914061, 0.8026680423072734, 0.8246314185786778, 0.6597952329357618 },
	 { 0.8197168575512769, 0.4599346029523994, 0.022329347863018878, 0.2004114184458654, 0.4840695232096023, 0.9214792385200912, 0.12706925899257115, 0.3261898976946841, 0.42937250103733116, 0.9187412327916503 },
	 { 0.28333204770330667, 0.35738268140862905, 0.7494669153820812, 0.07808246369915006, 0.12822958143870788, 0.26293750193770205, 0.9171232159502948, 0.19423494194296742, 0.6787264625845483, 0.23327435515201644 },
	 { 0.5836556358077957, 0.15255582238656729, 0.6167730072746012, 0.4247709763231319, 0.19176235240070616, 0.7475580701491157, 0.30690852469086605, 0.6939618167100556, 0.2617327305845589, 0.4866878273763954 },
	 { 0.0011836099216243623, 0.26580775429778813, 0.995587810764828, 0.7379542913119769, 0.34992251566814236, 0.3402561761617129, 0.6131936495952924, 0.9986250457514332, 0.33857868492735843, 0.5625583810454307 },
	 { 0.6010111234543326, 0.31053482917377706, 0.21225847148006283, 0.7116493232854302, 0.32341545113161696, 0.664776157266962, 0.19709449652295807, 0.7115988097231233, 0.29387625252045546, 0.6432904976493615 },
	 { 0.3922420371373826, 0.8290580074557435, 0.979651504500836, 0.993827839877219, 0.43578536957972447, 0.941650711844808, 0.41510811578335083, 0.20852135693019114, 0.26537649178083456, 0.6367225568226381 },
	 { 0.9996662363577734, 0.05130216489494721, 0.7902072202716324, 0.08022959941601326, 0.43096081790346763, 0.4940736800304265, 0.31503359221256, 0.5637296650735946, 0.6058860696643238, 0.8228184027494011 },
	 { 0.1679032802018684, 0.36712883941261343, 0.35581782004200124, 0.1912561539685741, 0.5217317448714821, 0.4873614217193827, 0.7253396569676331, 0.17132136498288675, 0.5709666936221692, 0.5973867159743633 },
	 { 0.7456446012063542, 0.14470389361259528, 0.3182727668251967, 0.024532253863200237, 0.21246035065514002, 0.4532224374265763, 0.39302698928639446, 0.5759636923366954, 0.23964732894390617, 0.8325946828342017 },
	 { 0.804646338538296, 0.6917833607322325, 0.14038597953152565, 0.09700721158453707, 0.46158117311639546, 0.6044504092190863, 0.2630209432613737, 0.925840437276973, 0.7427228390963995, 0.39552985330301427 },
	 { 0.9423405108913261, 0.5568898847816935, 0.5865578279980038, 0.7305266227381803, 0.13693177944281076, 0.06576998179268967, 0.04939721971337052, 0.8384842091078928, 0.3998051370494049, 0.9339967072398855 },
	 { 0.18310123438213766, 0.013409666628574901, 0.09573211516810987, 0.5665545372020508, 0.6197110340276971, 0.7322296500143658, 0.09844209111159175, 0.9281691265162819, 0.7075346096235595, 0.49869574964999175 },
	 { 0.47269873473858026, 0.798121831977326, 0.8499104552530584, 0.475194154583085, 0.2104002382677912, 0.6330637491983196, 0.7574744396919333, 0.5591447535427894, 0.323754392936751, 0.8617165391715425 },
	 { 0.43453372824559466, 0.3890595694091993, 0.836519225467029, 0.06227641875537826, 0.3564826401712665, 0.005496067443431341, 0.9227424252313905, 0.3477644946250137, 0.47864274321194167, 0.9832576878086277 },
	 { 0.6893874612467784, 0.2758200179447676, 0.23995122524602408, 0.6786878726514889, 0.9136045636770356, 0.10863747556144898, 0.5593024980266833, 0.2665227001304319, 0.2833209775686715, 0.5027119343088761 },
	 { 0.7517017045713503, 0.48060249854624393, 0.6798380109522975, 0.9097895986237146, 0.3783965261206377, 0.9365093951095842, 0.4951605441100999, 0.8368459411025978, 0.5398561161386157, 0.5436544096039538 },
	 { 0.6635187411070482, 0.28536564412656007, 0.9734551721488216, 0.6900072850059482, 0.06641274821751897, 0.5133701012153071, 0.6378827553441019, 0.034849662608985144, 0.16066950672067215, 0.8912243796619927 },
	 { 0.9625822681873077, 0.4859739316897721, 0.32300556946926273, 0.5174696648592829, 0.44091884893912126, 0.6383502603921138, 0.7391833725165726, 0.04162715200715006, 0.38841742665128, 0.06489002499420737 },
	 { 0.5442383550607328, 0.38234717661316453, 0.6985214811522404, 0.9264423451360423, 0.4296756544509407, 0.6464140755060015, 0.19224045546548552, 0.02453570252792925, 0.8153468300830188, 0.6030882085512868 },
	};
	

	std::vector<std::string> get_input_names(){
		std::vector<std::string> lFeatures = { "Feature_0", "Feature_1", "Feature_2", "Feature_3", "Feature_4", "Feature_5", "Feature_6", "Feature_7", "Feature_8", "Feature_9" };

		return lFeatures;
	}

	std::vector<std::string> get_output_names(){
		std::vector<std::string> lOutputs = { "Estimator" };

		return lOutputs;
	}

	tTable compute_regression(std::any Feature_0, std::any Feature_1, std::any Feature_2, std::any Feature_3, std::any Feature_4, std::any Feature_5, std::any Feature_6, std::any Feature_7, std::any Feature_8, std::any Feature_9) {
		std::vector<std::any> inputs = { Feature_0, Feature_1, Feature_2, Feature_3, Feature_4, Feature_5, Feature_6, Feature_7, Feature_8, Feature_9 };

		std::any lDotProduct = poly_kernel( lProblem_data_dual, lProblem_data_sv, inputs, 1.196386669744979, 0.0, 3 ) + 10.624378387364795;


		tTable lTable;

		std::any  lEstimator = lDotProduct;
		lTable[ "Estimator" ] = { lEstimator };

		return lTable;
	}

	tTable compute_model_outputs_from_table( tTable const & iTable) {
		tTable lTable = compute_regression(iTable.at("Feature_0")[0], iTable.at("Feature_1")[0], iTable.at("Feature_2")[0], iTable.at("Feature_3")[0], iTable.at("Feature_4")[0], iTable.at("Feature_5")[0], iTable.at("Feature_6")[0], iTable.at("Feature_7")[0], iTable.at("Feature_8")[0], iTable.at("Feature_9")[0]);

		return lTable;
	}

} // eof namespace 


int main() {
	score_csv_file("outputs/ml2cpp-demo/datasets/freidman1.csv");
	return 0;
}
