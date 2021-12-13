#include "musicas.h"
#include "bt.h"

u32 tempos_sonic[434] = {0, 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 360, 390, 420, 450, 480, 480, 660, 660, 840, 840, 1020, 1020, 1200, 1200, 1320, 1320, 1440, 1440, 1440, 1620, 1620, 1800, 1800, 2400, 2400, 2580, 2580, 2760, 2760, 2880, 2880, 3060, 3060, 3240, 3240, 3360, 3360, 3540, 3540, 4560, 4620, 4740, 4800, 4920, 4980, 5100, 5460, 5520, 5580, 5700, 5760, 5880, 5940, 6060, 6480, 6480, 6540, 6660, 6720, 6840, 6900, 7020, 7380, 7440, 7500, 7620, 7680, 7800, 7860, 7980, 8400, 8460, 8580, 8640, 8760, 8820, 8940, 9300, 9360, 9420, 9540, 9600, 9720, 9780, 9900, 10320, 10380, 10500, 10560, 10680, 10740, 10860, 11220, 11220, 11280, 11340, 11460, 11520, 11640, 11700, 11820, 11880, 11940, 12000, 12780, 12840, 12900, 13740, 13800, 13860, 13920, 14700, 14760, 14820, 14940, 15000, 15060, 15180, 15240, 15300, 15420, 15480, 15540, 15600, 15660, 15720, 15780, 16080, 16080, 16140, 16260, 16320, 16440, 16500, 16620, 16980, 17040, 17100, 17220, 17280, 17400, 17460, 17580, 18000, 18060, 18180, 18240, 18360, 18420, 18540, 18900, 18960, 19020, 19140, 19200, 19320, 19380, 19500, 19920, 19980, 20100, 20160, 20280, 20340, 20460, 20820, 20820, 20880, 20940, 21060, 21120, 21240, 21300, 21420, 21840, 21900, 22020, 22080, 22200, 22260, 22380, 22740, 22800, 22860, 22980, 23040, 23160, 23220, 23340, 23400, 23460, 23520, 24300, 24360, 24420, 25260, 25320, 25380, 25440, 26220, 26280, 26340, 26400, 26460, 26520, 26580, 26700, 26760, 26820, 26940, 27000, 27060, 27120, 27180, 27240, 27300, 27600, 27660, 27780, 27840, 27960, 28020, 28140, 28500, 28560, 28620, 28740, 28800, 28920, 28980, 29100, 29520, 29580, 29700, 29760, 29880, 29940, 30060, 30420, 30420, 30480, 30540, 30660, 30720, 30840, 30900, 31020, 31440, 31500, 31620, 31680, 31800, 31860, 31980, 32340, 32400, 32460, 32580, 32640, 32760, 32820, 32940, 33360, 33420, 33540, 33600, 33720, 33780, 33900, 34260, 34320, 34380, 34500, 34560, 34680, 34740, 34860, 34920, 34980, 35040, 35820, 35820, 35880, 35940, 36780, 36840, 36900, 36960, 37740, 37800, 37860, 37980, 38040, 38100, 38220, 38280, 38340, 38460, 38520, 38580, 38640, 38700, 38760, 38820, 39120, 39180, 39300, 39360, 39480, 39540, 39660, 40020, 40080, 40140, 40260, 40320, 40440, 40500, 40620, 41040, 41040, 41100, 41220, 41280, 41400, 41460, 41580, 41940, 42000, 42060, 42180, 42240, 42360, 42420, 42540, 42960, 43020, 43140, 43200, 43320, 43380, 43500, 43860, 43920, 43980, 44100, 44160, 44280, 44340, 44460, 44880, 44940, 45060, 45120, 45240, 45300, 45420, 45780, 45780, 45840, 45900, 46020, 46080, 46200, 46260, 46380, 46440, 46500, 46560, 47340, 47400, 47460, 48300, 48360, 48420, 48480, 49260, 49320, 49380, 49500, 49560, 49620, 49740, 49800, 49860, 49980, 50040, 50100, 50160, 50220, 50280, 50340, 50640, 50700, 50820, 50880, 51000, 51060, 51180, 51540, 51600, 51660, 51780, 51840, 51960, 52020, 52140, 52560, 52620, 52740, 52800, 52920, 52980, 53100, 53460, 53520, 53580, 53700, 53760, 53880, 53940, 54060};
Nota notas_sonic[434] = {2, 1, 2, 1, 4, 2, 4, 2, 1, 4, 1, 4, 2, 1, 2, 1, 2, 1, 2, 4, 2, 1, 2, 4, 2, 1, 2, 4, 4, 1, 4, 2, 1, 2, 4, 2, 4, 2, 1, 4, 1, 2, 4, 2, 1, 4, 1, 4, 1, 2, 1, 1, 2, 1, 4, 1, 4, 1, 2, 2, 1, 4, 2, 4, 2, 1, 1, 4, 2, 1, 4, 1, 4, 1, 2, 2, 4, 2, 1, 2, 1, 2, 1, 2, 1, 4, 1, 4, 1, 2, 2, 1, 4, 2, 4, 2, 1, 1, 2, 1, 4, 1, 4, 1, 2, 4, 2, 4, 2, 1, 2, 1, 2, 2, 1, 4, 2, 4, 2, 2, 2, 2, 1, 2, 1, 4, 1, 2, 1, 1, 2, 4, 4, 1, 4, 2, 4, 4, 2, 1, 4, 2, 1, 4, 1, 4, 1, 2, 2, 1, 4, 2, 4, 2, 1, 1, 2, 1, 4, 1, 4, 1, 2, 2, 4, 2, 1, 2, 1, 2, 1, 2, 1, 4, 1, 4, 1, 2, 4, 2, 1, 4, 2, 4, 2, 1, 1, 2, 1, 4, 1, 4, 1, 2, 2, 4, 2, 1, 2, 1, 2, 2, 1, 4, 2, 4, 2, 2, 2, 2, 1, 2, 1, 4, 4, 1, 2, 1, 1, 2, 4, 4, 1, 4, 2, 4, 4, 2, 1, 2, 1, 4, 1, 4, 1, 2, 2, 1, 4, 2, 4, 2, 1, 1, 2, 1, 4, 1, 4, 1, 2, 4, 2, 4, 2, 1, 2, 1, 2, 1, 2, 1, 4, 1, 4, 1, 2, 2, 1, 4, 2, 4, 2, 1, 1, 2, 1, 4, 1, 4, 1, 2, 2, 4, 2, 1, 2, 1, 2, 2, 1, 4, 2, 4, 4, 2, 2, 2, 2, 1, 2, 1, 4, 1, 2, 1, 1, 2, 4, 4, 1, 4, 2, 4, 4, 2, 1, 2, 1, 4, 1, 4, 1, 2, 2, 1, 4, 2, 4, 2, 1, 1, 4, 2, 1, 4, 1, 4, 1, 2, 2, 4, 2, 1, 2, 1, 2, 1, 2, 1, 4, 1, 4, 1, 2, 2, 1, 4, 2, 4, 2, 1, 1, 2, 1, 4, 1, 4, 1, 2, 4, 2, 4, 2, 1, 2, 1, 2, 2, 1, 4, 2, 4, 2, 2, 2, 2, 1, 2, 1, 4, 1, 2, 1, 1, 2, 4, 4, 1, 4, 2, 4, 4, 2, 1, 2, 1, 4, 1, 4, 1, 2, 2, 1, 4, 2, 4, 2, 1, 1, 2, 1, 4, 1, 4, 1, 2, 2, 4, 2, 1, 2, 1, 2};
u16 duracao_sonic[434] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 89, 89, 89, 89, 89, 89, 89, 0, 0, 0, 0, 89, 89, 358, 89, 89, 403, 403, 89, 89, 89, 89, 0, 0, 89, 89, 89, 89, 0, 0, 89, 89, 582, 582, 0, 78, 0, 78, 0, 78, 257, 0, 0, 78, 0, 78, 0, 78, 302, 0, 627, 78, 0, 78, 0, 78, 257, 0, 0, 78, 0, 78, 0, 78, 302, 0, 78, 0, 78, 0, 78, 257, 0, 0, 78, 0, 78, 0, 78, 302, 0, 78, 0, 78, 0, 78, 257, 0, 717, 0, 78, 0, 78, 0, 78, 0, 0, 0, 571, 0, 0, 616, 0, 0, 0, 571, 0, 0, 78, 0, 0, 78, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 627, 78, 0, 78, 0, 78, 257, 0, 0, 78, 0, 78, 0, 78, 302, 0, 78, 0, 78, 0, 78, 257, 0, 0, 78, 0, 78, 0, 78, 302, 0, 78, 0, 78, 0, 78, 257, 0, 717, 0, 78, 0, 78, 0, 78, 302, 0, 78, 0, 78, 0, 78, 257, 0, 0, 78, 0, 78, 0, 78, 0, 0, 0, 571, 0, 0, 616, 0, 0, 0, 571, 0, 0, 78, 717, 0, 0, 78, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 78, 0, 78, 257, 0, 0, 78, 0, 78, 0, 78, 302, 0, 78, 0, 78, 0, 78, 257, 0, 717, 0, 78, 0, 78, 0, 78, 302, 0, 78, 0, 78, 0, 78, 257, 0, 0, 78, 0, 78, 0, 78, 302, 0, 78, 0, 78, 0, 78, 257, 0, 0, 78, 0, 78, 0, 78, 0, 0, 0, 571, 0, 134, 0, 616, 0, 0, 0, 571, 0, 0, 78, 0, 0, 78, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 78, 0, 78, 257, 0, 0, 78, 0, 78, 0, 78, 302, 0, 448, 78, 0, 78, 0, 78, 257, 0, 0, 78, 0, 78, 0, 78, 302, 0, 78, 0, 78, 0, 78, 257, 0, 0, 78, 0, 78, 0, 78, 302, 0, 78, 0, 78, 0, 78, 257, 0, 717, 0, 78, 0, 78, 0, 78, 0, 0, 0, 571, 0, 0, 616, 0, 0, 0, 571, 0, 0, 78, 0, 0, 78, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 78, 0, 78, 257, 0, 0, 78, 0, 78, 0, 78, 302, 0, 78, 0, 78, 0, 78, 257, 0, 0, 78, 0, 78, 0, 78, 134};
const u16 tamanho_sonic = 434;
const u8 velocidade_sonic = 2;
const u16 delay_sonic = 300;
const u8 loops_sonic = 4;

Nota notas_bib [223] = {1, 4, 2, 4, 1, 4, 2, 4, 2, 1, 4, 2, 4, 1, 4, 2, 4, 4, 2, 1, 4, 2, 4, 1, 4, 2, 4, 2, 1, 4, 2, 4, 4, 1, 4, 2, 4, 2, 2, 4, 4, 2, 4, 4, 1, 2, 2, 1, 2, 2, 2, 4, 4, 2, 4, 4, 1, 1, 4, 4, 4, 1, 4, 2, 4, 1, 4, 2, 4, 2, 1, 4, 2, 4, 1, 4, 2, 4, 4, 2, 2, 4, 4, 2, 4, 4, 1, 2, 2, 1, 2, 2, 2, 4, 4, 2, 4, 4, 1, 4, 1, 4, 4, 4, 2, 1, 2, 4, 2, 4, 2, 1, 2, 2, 4, 4, 2, 2, 1, 2, 2, 1, 2, 2, 4, 4, 4, 4, 4, 2, 2, 2, 2, 1, 4, 4, 1, 4, 2, 1, 2, 4, 4, 2, 1, 4, 4, 2, 4, 4, 2, 4, 4, 1, 2, 2, 1, 2, 2, 2, 4, 4, 2, 4, 4, 1, 1, 4, 4, 4, 1, 2, 4, 1, 2, 4, 1, 2, 4, 1, 2, 4, 1, 4, 2, 1, 4, 2, 1, 2, 4, 1, 4, 2, 4, 2, 4, 4, 2, 4, 4, 1, 2, 2, 1, 2, 2, 2, 4, 4, 2, 4, 4, 1, 1, 4, 4, 1, 4, 4, 2, 2, 1};
u16 duracao_bib[223] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 378, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 283, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 756, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 283, 378, 0, 378, 0, 330, 0};
u32 tempos_bib[223] = {512, 890, 1268, 1693, 2024, 2402, 2780, 2969, 3299, 3536, 3914, 4292, 4717, 5048, 5426, 5804, 5993, 5993, 6323, 6560, 6938, 7316, 7741, 8072, 8450, 8828, 9017, 9347, 9584, 9962, 10340, 10718, 10765, 11096, 11474, 11852, 12041, 12371, 12702, 12986, 13269, 13458, 13742, 14025, 14214, 14498, 14781, 14970, 15254, 15537, 15726, 16010, 16293, 16482, 16766, 17049, 17144, 17427, 17900, 17900, 18183, 18656, 19034, 19412, 19837, 20168, 20546, 20924, 21113, 21443, 21680, 22058, 22436, 22861, 23192, 23570, 23948, 24137, 24137, 24467, 24798, 25082, 25365, 25554, 25838, 26121, 26310, 26594, 26877, 27066, 27350, 27633, 27822, 28106, 28389, 28578, 28862, 29145, 29240, 29240, 29523, 29996, 30279, 30752, 31130, 31508, 31744, 31886, 32075, 32264, 32642, 33020, 33445, 33776, 33917, 34059, 34154, 34579, 34910, 35288, 35618, 35855, 36091, 36374, 36516, 36847, 37130, 37508, 37650, 37839, 38075, 38312, 38548, 38831, 39115, 39446, 39635, 39871, 40202, 40580, 40910, 41099, 41336, 41714, 42092, 42517, 42659, 42942, 43226, 43509, 43698, 43982, 44265, 44454, 44738, 45021, 45210, 45494, 45777, 45966, 46250, 46533, 46722, 47006, 47289, 47384, 47667, 48140, 48140, 48423, 48896, 49085, 49274, 49652, 49841, 50030, 50408, 50597, 50786, 51164, 51353, 51542, 51920, 52109, 52298, 52676, 52865, 53054, 53432, 53621, 53810, 54188, 54188, 54377, 54566, 55038, 55322, 55605, 55794, 56078, 56361, 56550, 56834, 57117, 57306, 57590, 57873, 58062, 58346, 58629, 58818, 59102, 59385, 59480, 59763, 60236, 60519, 60992, 61559, 61748, 62315, 62409, 66473};
const u16 tamanho_bib = 223;
const u8 velocidade_bib = 2;
const u16 delay_bib = 100;
const u8 loops_bib = 0;


Nota notas_sor [165] = {1, 2, 4, 2, 1, 4, 1, 2, 4, 2, 1, 1, 2, 2, 2, 4, 2, 1, 2, 4, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 2, 4, 1, 2, 4, 2, 1, 4, 1, 2, 4, 2, 1, 1, 2, 2, 2, 4, 2, 1, 2, 4, 1, 2, 4, 2, 1, 2, 4, 2, 1, 2, 4, 2, 1, 1, 2, 4, 2, 1, 4, 1, 2, 4, 2, 1, 1, 2, 2, 2, 4, 2, 1, 2, 4, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2, 4, 2, 1, 4, 1, 2, 4, 2, 1, 1, 2, 2, 2, 4, 2, 1, 2, 4, 1, 4, 1, 4, 1, 4, 1, 4, 1, 4, 1, 4, 1, 1, 2, 4, 2, 1, 4, 1, 2, 4, 2, 1, 1, 2, 2, 2, 4, 2, 1, 2, 4, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1};
u16 duracao_sor[165] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
u32 tempos_sor[165] = {0, 0, 0, 80, 161, 241, 321, 402, 482, 643, 683, 804, 884, 964, 1045, 1125, 1165, 1205, 1246, 1286, 1607, 1647, 1688, 1728, 1768, 1808, 1848, 1888, 1929, 1969, 2009, 2049, 2089, 2893, 2893, 2893, 2973, 3054, 3134, 3214, 3295, 3375, 3536, 3576, 3696, 3777, 3857, 3938, 4018, 4058, 4098, 4138, 4179, 4500, 4540, 4580, 4621, 4661, 4701, 4741, 4781, 4821, 4862, 4902, 4942, 4982, 5746, 5746, 5746, 5826, 5906, 5987, 6067, 6147, 6228, 6388, 6429, 6549, 6629, 6710, 6790, 6871, 6911, 6951, 6991, 7031, 7353, 7393, 7433, 7473, 7513, 7554, 7594, 7634, 7674, 7714, 7754, 7795, 7835, 8638, 8638, 8638, 8719, 8799, 8879, 8960, 9040, 9121, 9281, 9321, 9442, 9522, 9603, 9683, 9763, 9804, 9844, 9884, 9924, 10246, 10286, 10326, 10366, 10406, 10446, 10487, 10527, 10567, 10607, 10647, 10688, 10728, 11531, 11531, 11531, 11612, 11692, 11772, 11853, 11933, 12013, 12174, 12214, 12335, 12415, 12496, 12576, 12656, 12696, 12737, 12777, 12817, 13138, 13179, 13219, 13259, 13299, 13339, 13379, 13420, 13460, 13500, 13540, 13580, 13621};
const u16 tamanho_sor = 165;
const u8 velocidade_sor = 2;
const u16 delay_sor = 123;
const u8 loops_sor = 2;

Nota notas_guile[259] = {2, 1, 2, 1, 2, 1, 2, 1, 2, 2, 4, 2, 1, 2, 4, 1, 2, 1, 2, 1, 2, 1, 2, 2, 4, 2, 1, 1, 2, 2, 4, 2, 1, 2, 4, 1, 2, 4, 1, 2, 1, 2, 4, 2, 2, 4, 2, 4, 4, 2, 4, 1, 2, 4, 2, 1, 2, 1, 2, 4, 2, 4, 2, 4, 1, 2, 1, 2, 2, 4, 2, 4, 2, 1, 1, 4, 2, 4, 1, 4, 2, 2, 1, 2, 2, 4, 2, 2, 1, 2, 2, 1, 2, 4, 1, 4, 2, 2, 4, 1, 2, 1, 2, 1, 2, 1, 2, 2, 4, 1, 2, 1, 2, 4, 2, 4, 2, 4, 2, 4, 4, 2, 2, 1, 2, 4, 1, 2, 1, 2, 2, 4, 2, 1, 2, 4, 1, 2, 4, 1, 2, 1, 2, 4, 2, 2, 4, 2, 4, 2, 4, 1, 2, 4, 2, 1, 2, 4, 1, 2, 4, 2, 4, 2, 4, 1, 2, 1, 2, 2, 4, 2, 4, 2, 1, 1, 2, 4, 1, 4, 2, 2, 1, 2, 2, 4, 2, 2, 1, 4, 2, 2, 1, 2, 4, 1, 4, 2, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 2, 4, 2, 1, 2, 4, 1, 2, 1, 2, 1, 2, 1, 2, 2, 4, 2, 1, 1, 2, 2, 4, 2, 1, 2, 4, 1, 2, 4, 1, 2, 1, 2, 4, 2, 2, 4, 2, 4, 4, 2, 4, 1, 2, 4, 2, 1, 1, 2, 4};
u16 duracao_guile[259] ={0, 0, 180, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 1116, 0, 180, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 327, 109, 109, 109, 0, 107, 71, 0, 0, 108, 72, 0, 0, 327, 109, 109, 109, 109, 324, 108, 107, 607, 107, 107, 107, 329, 0, 321, 107, 972, 0, 0, 327, 109, 108, 108, 108, 108, 108, 828, 0, 0, 324, 0, 108, 108, 108, 108, 576, 72, 0, 72, 216, 180, 0, 327, 181, 324, 0, 108, 0, 871, 0, 0, 325, 0, 144, 72, 72, 0, 0, 1154, 998, 0, 0, 180, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 108, 0, 0, 327, 0, 206, 321, 107, 109, 109, 0, 108, 72, 0, 0, 108, 72, 0, 0, 324, 108, 108, 108, 108, 327, 109, 106, 106, 106, 106, 329, 0, 324, 108, 972, 399, 0, 0, 324, 108, 108, 108, 108, 108, 108, 828, 0, 0, 329, 0, 110, 106, 106, 109, 73, 0, 73, 218, 181, 0, 324, 180, 324, 0, 108, 0, 864, 1098, 0, 0, 324, 0, 144, 72, 72, 0, 0, 996, 0, 0, 180, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 1119, 0, 180, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 325, 108, 108, 108, 0, 108, 72, 0, 0, 108, 72, 0, 0, 325, 108, 108, 108, 108, 325, 108, 108, 613, 108, 108, 108, 325, 0, 325, 108, 613, 613, 613};
u32 tempos_guile[259] = {605, 684, 792, 1080, 1152, 1260, 1368, 1656, 1728, 1836, 1980, 2088, 2160, 2304, 2304, 2412, 2520, 2808, 2880, 2988, 3096, 3384, 3456, 3564, 3708, 3816, 3888, 4065, 4500, 4645, 4863, 5081, 5143, 5286, 5393, 5571, 5760, 5904, 6012, 6192, 6387, 6823, 6968, 7185, 7403, 7488, 7920, 8000, 8000, 8143, 8286, 8429, 8780, 9220, 9143, 9571, 9792, 10887, 10960, 11032, 11468, 11520, 11664, 11808, 11952, 12096, 12240, 13104, 13176, 13248, 13680, 13788, 14040, 14256, 14400, 14400, 14544, 14652, 14760, 14940, 15192, 15408, 15677, 16040, 16128, 16488, 16560, 16839, 16948, 17712, 17784, 17885, 18317, 18425, 18606, 18714, 18894, 19038, 19038, 19147, 20112, 20220, 20328, 20616, 20688, 20796, 20904, 21024, 21168, 21484, 21556, 21629, 21774, 21847, 21919, 22065, 22137, 21857, 22214, 22464, 22608, 22752, 22824, 22968, 23226, 23226, 23371, 23480, 23429, 23857, 24387, 24605, 24823, 24867, 25012, 25120, 25301, 25446, 25590, 25699, 25880, 25920, 26352, 26496, 26712, 26928, 27290, 27726, 27213, 27354, 27496, 27638, 28683, 29122, 28800, 29232, 29376, 30194, 30629, 30702, 30528, 30960, 31104, 31248, 31392, 31536, 31680, 31824, 32688, 32760, 33366, 33805, 33915, 33094, 33307, 34258, 34403, 34512, 34621, 34802, 35056, 35274, 35136, 35496, 35712, 36072, 36144, 36288, 36396, 36648, 37296, 37368, 37440, 37872, 37980, 38160, 38268, 38448, 38592, 38700, 39696, 39900, 40008, 40297, 40369, 40477, 40585, 40874, 40946, 41055, 41199, 41307, 41379, 41524, 41524, 41632, 41740, 42029, 42101, 42209, 42318, 42606, 42678, 42787, 42931, 43039, 43111, 43256, 43689, 43833, 44050, 44266, 44411, 44555, 44663, 44844, 44988, 45132, 45241, 45421, 45565, 45998, 46143, 46359, 46576, 46720, 47153, 47298, 47298, 47442, 47586, 47731, 47875, 48308, 48452, 48885, 49030, 49030, 49030};
const u16 tamanho_guile = 259;
const u8 velocidade_guile = 2;
const u16 delay_guile = 910;
const u8 loops_guile = 2;


