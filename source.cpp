﻿#include <chrono>
#include <iostream>
#include <fstream>
#include <random>
#include <string>
#include <ctime>
#include "cn.h" //include the language header file

#define casesx( kind ){   if ((kind) < 15 ) { std::cout << "!!!!!***** "; }\
                    else if ((kind) < 50 ) { std::cout << "!!**** "; }\
                    else if ((kind) < 63 ) { std::cout << "*** "; }\
                    else if ((kind) == 71 || (kind) == 79 || (kind) == 80 || (kind) == 82 || (kind) == 83 || (kind) == 84 || (kind) == 88 || (kind) == 91 || (kind) == 95 || (kind) == 100 || (kind) == 102 || (kind) == 103 || (kind) == 104 || (kind) == 106 ||(kind) == 108 ) { std::cout << "!!**** "; }\
                    else if ((kind) < 112 ) { std::cout << "!!!!!***** "; }\
                    else {  std::cout << E_1 << endl; goto full_quit; }\
                } // cout stars prefix
#define output_string() {if (y_print) {std::cout << countx + 1 << "(" << five_star_assurance_number << ")(" << four_star_assurance_number << ") ";\
                    casesx( kind )\
                    std::cout << pname[kind] << endl; }\
                    pcount[kind]++;\
                    wishes_number--;\
                    countx++;\
                    five_star_assurance_number++;\
                    four_star_assurance_number++;\
                    } // cout what have come home
#define luckcpy() {if (countx == 10) {\
                        luckiest = luck;\
                        for (int templuck = 0; templuck < 10; templuck++) {\
                            luckiestlocation[templuck] = lucklocation[templuck];\
                            luckiestsublocation[templuck] = lucksublocation[templuck];\
                            luckiestsubsublocation[templuck] = lucksubsublocation[templuck];\
                            luckiestkind[templuck] = luckkind[templuck];\
                        }\
                    }\
                    if (luck > luckiest) {\
                        luckiest = luck;\
                        for (int templuck = 0; templuck < 10; templuck++) {\
                            luckiestlocation[templuck] = lucklocation[templuck];\
                            luckiestsublocation[templuck] = lucksublocation[templuck];\
                            luckiestsubsublocation[templuck] = lucksubsublocation[templuck];\
                            luckiestkind[templuck] = luckkind[templuck];\
                        }\
                    }\
                } // snapshot the luckiest moment
#define luckget() {for (int templuck = 0; templuck < 9; templuck++) {\
                        lucklocation[templuck] = lucklocation[templuck + 1];\
                        lucksublocation[templuck] = lucksublocation[templuck + 1];\
                        lucksubsublocation[templuck] = lucksubsublocation[templuck + 1];\
                        luckkind[templuck] = luckkind[templuck + 1];\
                        luckstar[templuck] = luckstar[templuck + 1];\
                    }\
                    lucklocation[9] = countx;\
                    lucksublocation[9] = (long long int) five_star_assurance_number - 1;\
                    lucksubsublocation[9] = (long long int) four_star_assurance_number - 1;\
                    luckkind[9] = kind;\
                    luckstar[9] = star;\
                    luck = 0;\
                } // get the recorded luckiest
#define Tri() {\
                star = 3;\
                type = 2;\
                kind = rspick(three_g, 13);\
                } // 3-star kind settler for all banners
#define set_pool_1_m(up_five_m,size_nup_four_c_m, nup_four_cgm) {\
                    set_pool_1((up_five_m), (size_nup_four_c_m), tempg1, tempg5, up_four_g, nup_four_c, (nup_four_cgm), four_check);\
                }
#define set_pool_3_m(size_nup_four_c_m, nup_four_cgm) {\
                    set_pool_3(up_five_g, (size_nup_four_c_m), tempg1, tempg5, tempg6, tempg7, up_four_g, nup_four_c, (nup_four_cgm), four_check, five_check);\
                }

using namespace std;

unsigned long long int seed = static_cast<unsigned long long int> (std::chrono::high_resolution_clock::now().time_since_epoch().count());
std::mt19937_64 generatorz(seed);
// random set

bool quit = true,
is_noelle = true,
y_print = true,
y_arg = false,
five_star_guarantee_number = false,
four_star_guarantee_number = false;
int chosen_banner = 0,
chosen_event = 0,
four_star_assurance_number = 1,
five_star_assurance_number = 1,
max_fives = 1,
min_fives = INT_MAX,
fate_weapon = 0,
fate_points = 0,
five_weight = 0,
four_weight = 0,
three_weight = 0,
unmet4_c = 0,
unmet4_w = 0,
unmet5_c = 0,
unmet5_w = 0,
resultt = 0,
resultu = 0,
up_five = 0,
size_nup_four_c = 1,
luck = 0,
luckiest = 0,
nup_five_c[32] = { 0, 1, 2, 3, 4 },
nup_five_w[32] = { 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 },
nup_four_w[64] = { 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49 },
size_nup_four_w = 18,
three_g[13] = { 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62 },
nup_four_cg1[11] = { 17, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30 },
nup_four_cg2[13] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30 },
nup_four_cg3[14] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30 },
nup_four_cg4[15] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30, 71 },
nup_four_cg5[16] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30, 71, 91 },
nup_four_cg6[17] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30, 71, 91, 95 },
nup_four_cg7[18] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30, 71, 91, 95, 100 },
nup_four_cg8[19] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30, 71, 91, 95, 100, 106 },
nup_four_cg9[20] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 28, 30, 71, 91, 95, 100, 106, 108 },
four_stars_c[23] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 71, 91, 95, 100, 106, 108 },
four_stars_w[27] = { 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 79, 80, 82, 83, 84, 88, 102, 103, 104 },
five_stars_c[23] = { 0, 1, 2, 3, 4, 63, 64, 65, 66, 67, 68, 69, 70, 72, 86, 89, 90, 94, 96, 99, 105, 109, 111 },
five_stars_w[26] = { 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 73, 74, 75, 76, 77, 78, 81, 85, 87, 92, 93, 97, 98, 101, 107, 110 };
long long int countx = 0,
wishes_number = 0,
five_count = 0,
five_count_c = 0,
five_count_w = 0,
four_count = 0,
four_count_c = 0,
four_count_w = 0,
ave_fives = 0,
max_fivesth = 1,
min_fivesth = 1,
max_fivecount = 1,
min_fivecount = 1;

const char* pname[128] = { C_0, C_1, C_2, C_3, C_4, C_5, C_6, C_7, C_8, C_9, C_10, C_11, C_12, C_13, C_14, C_15, C_16, C_17, C_18, C_19, C_20,
                C_21, C_22, C_23, C_24, C_25, C_26, C_27, C_28, C_29, C_30, C_31, C_32, C_33, C_34, C_35, C_36, C_37, C_38, C_39, C_40,
                C_41, C_42, C_43, C_44, C_45, C_46, C_47, C_48, C_49, C_50, C_51, C_52, C_53, C_54, C_55, C_56, C_57, C_58, C_59, C_60,
                C_61, C_62, C_63, C_64, C_65, C_66, C_67, C_68, C_69, C_70, C_71, C_72, C_73, C_74, C_75, C_76, C_77, C_78, C_79, C_80,
                C_81, C_82, C_83, C_84, C_85, C_86, C_87, C_88, C_89, C_90, C_91, C_92, C_93, C_94, C_95, C_96, C_97, C_98, C_99, C_100,
                C_101, C_102, C_103, C_104, C_105, C_106, C_107, C_108, C_109, C_110, C_111,
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
};
const char* pnameshort[128] = { X_0, X_1, X_2, X_3, X_4, X_5, X_6, X_7, X_8, X_9, X_10, X_11, X_12, X_13, X_14, X_15, X_16, X_17, X_18, X_19, X_20,
                X_21, X_22, X_23, X_24, X_25, X_26, X_27, X_28, X_29, X_30, X_31, X_32, X_33, X_34, X_35, X_36, X_37, X_38, X_39, X_40,
                X_41, X_42, X_43, X_44, X_45, X_46, X_47, X_48, X_49, X_50, X_51, X_52, X_53, X_54, X_55, X_56, X_57, X_58, X_59, X_60,
                X_61, X_62, X_63, X_64, X_65, X_66, X_67, X_68, X_69, X_70, X_71, X_72, X_73, X_74, X_75, X_76, X_77, X_78, X_79, X_80,
                X_81, X_82, X_83, X_84, X_85, X_86, X_87, X_88, X_89, X_90, X_91, X_92, X_93, X_94, X_95, X_96, X_97, X_98, X_99, X_100,
                X_101, X_102, X_103, X_104, X_105, X_106, X_107, X_108, X_109, X_110, X_111,
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
                "Placeholder",
};
// names of the items

int rspick(const int* kindx, int sizekind) {
    int kindout = kindx[1];
    int index = 0;
    unsigned long long int temp121 = 0;
    for (; index < sizekind; index++)
    {
        temp121 = generatorz() % (static_cast<unsigned long long int>(index) + 1);
        if (temp121 < 1) kindout = kindx[index];
    }
    return kindout;
}
// randomly pick an element among kindx which size is sizekind

int WRSpick(const int* weightx, int nom) {
    int ceilling = 0;
    for (int inin = 0; inin < nom; inin++) ceilling += weightx[inin];
    const int typess1[3] = { 0, 1, 2 };
    const int typess2[2] = { 0, 1 };
    if (nom == 3 && ceilling > 10000) ceilling = 10000;
    int randomn = static_cast<int> (generatorz() % static_cast<unsigned long long int>(ceilling));
    int tc = 0, results = 0;
    for (int inin = 0; inin < nom; inin++) {
        if (randomn < weightx[inin]) {
            if (nom == 3) results = typess1[tc];
            else results = typess2[tc];
            inin = nom;
        }
        else {
            randomn -= weightx[inin];
            tc += 1;
        }
    }
    return results;
}
// weighted random sampling

void set_pool_1(int up_five_p, int size_nup_four_c_p, const int* tempg1, const int* tempg5, int* up_four_g, int* nup_four_c, const int* nup_four_cgm, int* four_check) {
    up_five = up_five_p;
    size_nup_four_c = size_nup_four_c_p;
    for (int i = 0; i < 3; i++) { up_four_g[i] = tempg1[i]; }
    for (int i = 0; i < size_nup_four_c; i++) { nup_four_c[i] = nup_four_cgm[i]; }
    for (int i = 0; i < 8; i++) { four_check[i] = tempg5[i]; }
}

void set_pool_3(int* up_five_g, int size_nup_four_c_p, const int* tempg1, const int* tempg5, const int* tempg6, const int* tempg7, int* up_four_g, int* nup_four_c, const int* nup_four_cgm, int* four_check, int* five_check) {
    for (int i = 0; i < 2; i++) { up_five_g[i] = tempg6[i]; }
    size_nup_four_c = size_nup_four_c_p;
    for (int i = 0; i < 5; i++) { up_four_g[i] = tempg1[i]; }
    for (int i = 0; i < size_nup_four_c; i++) { nup_four_c[i] = nup_four_cgm[i]; }
    for (int i = 0; i < 8; i++) { four_check[i] = tempg5[i]; }
    for (int i = 0; i < 8; i++) { five_check[i] = tempg7[i]; }
}

int main(int argc, char* argv[]) {
    std::ofstream ofs{ "output.txt" };
    std::cout.rdbuf(ofs.rdbuf());
    static char default_argv0[] = "giwscli";
    if (!argv[0] || !argv[0][0])
        argv[0] = default_argv0;
    y_print = true;
    quit = true,
    is_noelle = true,
    five_star_guarantee_number = false,
    four_star_guarantee_number = false,
    chosen_banner = 0,
    chosen_event = 0,
    four_star_assurance_number = 1,
    five_star_assurance_number = 1,
    max_fives = 1,
    min_fives = INT_MAX,
    fate_weapon = 0,
    fate_points = 0,
    five_weight = 0,
    four_weight = 0,
    three_weight = 0,
    unmet4_c = 0,
    unmet4_w = 0,
    unmet5_c = 0,
    unmet5_w = 0,
    resultt = 0,
    resultu = 0,
    luck = 0,
    luckiest = 0,
    size_nup_four_w = 18,
    countx = 0,
    wishes_number = 0,
    five_count = 0,
    five_count_c = 0,
    five_count_w = 0,
    four_count = 0,
    four_count_c = 0,
    four_count_w = 0,
    ave_fives = 0,
    max_fivesth = 1,
    min_fivesth = 1,
    max_fivecount = 1,
    min_fivecount = 1;
    int up_five_g[32] = { 0 },
        up_four_g[64] = { 0 },
        nup_four_c[64] = { 0 },
        luckkind[10] = { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
        luckstar[10] = { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 },
        luckiestkind[10] = { 127, 127, 127, 127, 127, 127, 127, 127, 127, 127 },
        five_check[8] = { 127, 127, 127, 127, 127, 127, 127, 127 },
        four_check[8] = { 127, 127, 127, 127, 127, 127, 127, 127 };
    long long int lucklocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        lucksublocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        lucksubsublocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        luckiestlocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        luckiestsublocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        luckiestsubsublocation[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
        pcount[128] = { 0 },
        four_pity[11] = { 0 },
        five_pity[90] = { 0 },
        five_pity_w[80] = { 0 };
    if (argc == 4) {
        int test;
        long long int test2;
        try {
            test = stoi(argv[1]) + stoi(argv[2]);
            test2 = stoll(argv[3]);
        }
        catch (...) {
            std::cout << E_11 << endl;
            y_arg = true;
            goto full_quit;
        }
        chosen_banner = stoi(argv[1]);
        chosen_event = stoi(argv[2]);
        wishes_number = stoll(argv[3]);
        if (wishes_number < 1) {
            wishes_number = 0;
            std::cout << S_72 << endl;
            y_arg = true;
            goto full_quit;
        }
        quit = false;
        y_arg = true;
        goto set_banner;
    }
    else {
        std::cout << E_11 << endl;
        y_arg = true;
        goto full_quit;
    }
set_banner:
    if (chosen_banner == 1) {
        switch (chosen_event) {
        case 1: {
            int tempg1[3] = { 22, 26, 30 };
            int tempg5[8] = { 22, 26, 30, 0, 0, 0, 0, 0 };
            set_pool_1_m(63, 11, nup_four_cg1)
        } break;
        case 2: {
            int tempg1[3] = { 17, 20, 24 };
            int tempg5[8] = { 17, 20, 24, 0, 0, 0, 0, 0 };
            set_pool_1_m(64, 11, nup_four_cg1)
        } break;
        case 3: {
            int tempg1[3] = { 18, 23, 25 };
            int tempg5[8] = { 23, 25, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(65, 11, nup_four_cg1)
        } break;
        case 4: {
            int tempg1[3] = { 16, 19, 28 };
            int tempg5[8] = { 19, 28, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(66, 11, nup_four_cg1)
        } break;
        case 5: {
            int tempg1[3] = { 17, 21, 22 };
            int tempg5[8] = { 17, 21, 22, 0, 0, 0, 0, 0 };
            set_pool_1_m(67, 13, nup_four_cg2)
        } break;
        case 6: {
            int tempg1[3] = { 22, 24, 26 };
            int tempg5[8] = { 22, 24, 26, 0, 0, 0, 0, 0 };
            set_pool_1_m(68, 13, nup_four_cg2)
        } break;
        case 7: {
            int tempg1[3] = { 16, 18, 25 };
            int tempg5[8] = { 16, 18, 25, 0, 0, 0, 0, 0 };
            set_pool_1_m(69, 13, nup_four_cg2)
        } break;
        case 8: {
            int tempg1[3] = { 21, 23, 30 };
            int tempg5[8] = { 21, 23, 30, 0, 0, 0, 0, 0 };
            set_pool_1_m(0, 13, nup_four_cg2)
            five_check[0] = 0;
        } break;
        case 9: {
            int tempg1[3] = { 19, 24, 26 };
            int tempg5[8] = { 19, 24, 26, 0, 0, 0, 0, 0 };
            set_pool_1_m(70, 13, nup_four_cg2)
        } break;
        case 10: {
            int tempg1[3] = { 17, 20, 28 };
            int tempg5[8] = { 17, 20, 28, 0, 0, 0, 0, 0 };
            set_pool_1_m(63, 13, nup_four_cg2)
        } break;
        case 11: {
            int tempg1[3] = { 15, 22, 30 };
            int tempg5[8] = { 22, 30, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(65, 13, nup_four_cg2)
        } break;
        case 12: {
            int tempg1[3] = { 71, 20, 18 };
            int tempg5[8] = { 18, 20, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(66, 14, nup_four_cg3)
        } break;
        case 13: {
            int tempg1[3] = { 16, 24, 25 };
            int tempg5[8] = { 16, 24, 25, 0, 0, 0, 0, 0 };
            set_pool_1_m(72, 14, nup_four_cg3)
        } break;
        case 14: {
            int tempg1[3] = { 17, 22, 30 };
            int tempg5[8] = { 17, 22, 30, 0, 0, 0, 0, 0 };
            set_pool_1_m(64, 15, nup_four_cg4)
        } break;
        case 15: {
            int tempg1[3] = { 15, 21, 28 };
            int tempg5[8] = { 15, 21, 28, 0, 0, 0, 0, 0 };
            set_pool_1_m(86, 15, nup_four_cg4)
        } break;
        case 16: {
            int tempg1[3] = { 71, 23, 19 };
            int tempg5[8] = { 71, 23, 19, 0, 0, 0, 0, 0 };
            set_pool_1_m(89, 15, nup_four_cg4)
        } break;
        case 17: {
            int tempg1[3] = { 91, 16, 18 };
            int tempg5[8] = { 16, 18, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(90, 15, nup_four_cg4)
        } break;
        case 18: {
            int tempg1[3] = { 95, 17, 26 };
            int tempg5[8] = { 17, 26, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(96, 16, nup_four_cg5)
        } break;
        case 19: {
            int tempg1[3] = { 15, 24, 25 };
            int tempg5[8] = { 15, 24, 25, 0, 0, 0, 0, 0 };
            set_pool_1_m(94, 16, nup_four_cg5)
        } break;
        case 20: {
            int tempg1[3] = { 23, 19, 71 };
            int tempg5[8] = { 23, 19, 71, 0, 0, 0, 0, 0 };
            set_pool_1_m(65, 17, nup_four_cg6)
        } break;
        case 21: {
            int tempg1[3] = { 100, 18, 91 };
            int tempg5[8] = { 18, 91, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(70, 17, nup_four_cg6)
        } break;
        case 22: {
            int tempg1[3] = { 15, 20, 21 };
            int tempg5[8] = { 15, 20, 21, 0, 0, 0, 0, 0 };
            set_pool_1_m(67, 18, nup_four_cg7)
        } break;
        case 23: {
            int tempg1[3] = { 26, 30, 106 };
            int tempg5[8] = { 26, 30, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(105, 18, nup_four_cg7)
        } break;
        case 24: {
            int tempg1[3] = { 19, 23, 108 };
            int tempg5[8] = { 19, 23, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(109, 19, nup_four_cg8)
        } break;
        case 25: {
            int tempg1[3] = { 26, 30, 106 };
            int tempg5[8] = { 26, 30, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(66, 19, nup_four_cg8)
        } break;
        default: { std::cout << E_5 << endl; goto full_quit; } break;
        }
    }
    else if (chosen_banner == 2) {
        switch (chosen_event) {
        case 1: {
            int tempg1[3] = { 15, 20, 21 };
            int tempg5[8] = { 15, 20, 21, 0, 0, 0, 0, 0 };
            set_pool_1_m(72, 18, nup_four_cg7)
        } break;
        case 2: {
            int tempg1[3] = { 19, 23, 108 };
            int tempg5[8] = { 19, 23, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(69, 19, nup_four_cg8)
        } break;
        case 3: {
            int tempg1[3] = { 26, 30, 106 };
            int tempg5[8] = { 26, 30, 0, 0, 0, 0, 0, 0 };
            set_pool_1_m(68, 19, nup_four_cg8)
        } break;
        default: { std::cout << E_5 << endl; goto full_quit; } break;
        }
    }
    else if (chosen_banner == 3) {
        switch (chosen_event) {
        case 1: {
            int tempg6[2] = { 5, 14 };
            int tempg1[5] = { 34, 38, 40, 44, 48 };
            int tempg5[8] = { 34, 38, 40, 44, 48, 0, 0, 0 };
            int tempg7[8] = { 5, 14, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(11, nup_four_cg1)
        } break;
        case 2: {
            int tempg6[2] = { 7, 11 };
            int tempg1[5] = { 33, 37, 41, 43, 49 };
            int tempg5[8] = { 33, 37, 41, 43, 49, 0, 0, 0 };
            int tempg7[8] = { 7, 11, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(11, nup_four_cg1)
        } break;
        case 3: {
            int tempg6[2] = { 6, 73 };
            int tempg1[5] = { 32, 36, 40, 42, 48 };
            int tempg5[8] = { 32, 36, 40, 42, 48, 0, 0, 0 };
            int tempg7[8] = { 6, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(11, nup_four_cg1)
        } break;
        case 4: {
            int tempg6[2] = { 74, 75 };
            int tempg1[5] = { 35, 39, 41, 44, 46 };
            int tempg5[8] = { 35, 39, 41, 44, 46, 0, 0, 0 };
            int tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(11, nup_four_cg1)
        } break;
        case 5: {
            int tempg6[2] = { 8, 76 };
            int tempg1[5] = { 34, 37, 40, 45, 49 };
            int tempg5[8] = { 34, 37, 40, 45, 49, 0, 0, 0 };
            int tempg7[8] = { 8, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(13, nup_four_cg2)
        } break;
        case 6: {
            int tempg6[2] = { 5, 12 };
            size_nup_four_c = 13;
            int tempg1[5] = { 35, 36, 41, 44, 47 };
            int tempg5[8] = { 35, 36, 41, 44, 47, 0, 0, 0 };
            int tempg7[8] = { 5, 12, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(13, nup_four_cg2)
        } break;
        case 7: {
            int tempg6[2] = { 9, 77 };
            int tempg1[5] = { 32, 36, 40, 43, 48 };
            int tempg5[8] = { 32, 36, 40, 43, 48, 0, 0, 0 };
            int tempg7[8] = { 9, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(13, nup_four_cg2)
        } break;
        case 8: {
            int tempg6[2] = { 11, 78 };
            int tempg1[5] = { 33, 38, 46, 79, 80 };
            int tempg5[8] = { 33, 38, 46, 0, 0, 0, 0, 0 };
            int tempg7[8] = { 11, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(13, nup_four_cg2)
        } break;
        case 9: {
            int tempg6[2] = { 13, 81 };
            int tempg1[5] = { 35, 41, 45, 82, 83 };
            int tempg5[8] = { 35, 41, 45, 0, 0, 0, 0, 0 };
            int tempg7[8] = { 13, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(13, nup_four_cg2)
        } break;
        case 10: {
            int tempg6[2] = { 6, 7 };
            int tempg1[5] = { 39, 40, 43, 49, 84 };
            int tempg5[8] = { 39, 40, 43, 49, 0, 0, 0, 0 };
            int tempg7[8] = { 6, 7, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(13, nup_four_cg2)
        } break;
        case 11: {
            int tempg6[2] = { 73, 76 };
            int tempg1[5] = { 33, 36, 48, 79, 80 };
            int tempg5[8] = { 33, 36, 48, 0, 0, 0, 0, 0 };
            int tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(14, nup_four_cg3)
        } break;
        case 12: {
            int tempg6[2] = { 14, 85 };
            int tempg1[5] = { 32, 37, 41, 42, 47 };
            int tempg5[8] = { 32, 37, 41, 42, 47, 0, 0, 0 };
            int tempg7[8] = { 14, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(14, nup_four_cg3)
        } break;
        case 13: {
            int tempg6[2] = { 7, 12 };
            int tempg1[5] = { 88, 46, 44, 40, 38 };
            int tempg5[8] = { 46, 44, 40, 38, 0, 0, 0, 0 };
            int tempg7[8] = { 7, 12, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(15, nup_four_cg4)
        } break;
        case 14: {
            int tempg6[2] = { 87, 8 };
            int tempg1[5] = { 82, 83, 84, 45, 41 };
            int tempg5[8] = { 45, 41, 0, 0, 0, 0, 0, 0 };
            int tempg7[8] = { 8, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(15, nup_four_cg4)
        } break;
        case 15: {
            int tempg6[2] = { 92, 10 };
            int tempg1[5] = { 34, 39, 40, 43, 49 };
            int tempg5[8] = { 34, 39, 40, 43, 49, 0, 0, 0 };
            int tempg7[8] = { 10, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(15, nup_four_cg4)
        } break;
        case 16: {
            int tempg6[2] = { 93, 13 };
            int tempg1[5] = { 35, 37, 41, 42, 47 };
            int tempg5[8] = { 35, 37, 41, 42, 47, 0, 0, 0 };
            int tempg7[8] = { 13, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(15, nup_four_cg4)
        } break;
        case 17: {
            int tempg6[2] = { 97, 75 };
            int tempg1[5] = { 33, 38, 40, 44, 46 };
            int tempg5[8] = { 33, 38, 40, 44, 46, 0, 0, 0 };
            int tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(16, nup_four_cg5)
        } break;
        case 18: {
            int tempg6[2] = { 98, 77 };
            int tempg1[5] = { 34, 39, 41, 45, 48 };
            int tempg5[8] = { 34, 39, 41, 45, 48, 0, 0, 0 };
            int tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(16, nup_four_cg5)
        } break;
        case 19: {
            int tempg6[2] = { 101, 73 };
            int tempg1[5] = { 32, 36, 40, 49, 104 };
            int tempg5[8] = { 32, 36, 40, 49, 0, 0, 0, 0 };
            int tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(17, nup_four_cg6)
        } break;
        case 20: {
            int tempg6[2] = { 78, 81 };
            int tempg1[5] = { 38, 42, 47, 102, 103 };
            int tempg5[8] = { 38, 42, 47, 0, 0, 0, 0, 0 };
            int tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(17, nup_four_cg6)
        } break;
        case 21: {
            int tempg6[2] = { 85, 87 };
            int tempg1[5] = { 41, 43, 46, 83, 84 };
            int tempg5[8] = { 41, 43, 46, 0, 0, 0, 0, 0 };
            int tempg7[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(18, nup_four_cg7)
        } break;
        case 22: {
            int tempg6[2] = { 6, 107 };
            int tempg1[5] = { 37, 40, 44, 82, 88 };
            int tempg5[8] = { 37, 40, 44, 0, 0, 0, 0, 0 };
            int tempg7[8] = { 6, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(18, nup_four_cg7)
        } break;
        case 23: {
            int tempg6[2] = { 9, 110 };
            int tempg1[5] = { 37, 40, 44, 82, 88 };
            int tempg5[8] = { 37, 40, 44, 0, 0, 0, 0, 0 };
            int tempg7[8] = { 9, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(19, nup_four_cg8)
        } break;
        case 24: {
            int tempg6[2] = { 6, 107 };
            int tempg1[5] = { 37, 40, 44, 82, 88 };
            int tempg5[8] = { 37, 40, 44, 0, 0, 0, 0, 0 };
            int tempg7[8] = { 6, 0, 0, 0, 0, 0, 0, 0 };
            set_pool_3_m(19, nup_four_cg8)
        } break;
        default: { std::cout << E_5 << endl; goto full_quit; } break;
        }
    }
    else if (chosen_banner == 4) {
        switch (chosen_event) {
        case 1: {
            int nup_four_cg31[14] = { 17, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 };
            size_nup_four_c = 14;
            memmove(nup_four_c, nup_four_cg31, sizeof(nup_four_cg31));
        } break;
        case 2: {
            int nup_four_cg32[16] = { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 };
            size_nup_four_c = 16;
            memmove(nup_four_c, nup_four_cg32, sizeof(nup_four_cg32));
        } break;
        case 3: {
            int nup_four_cg33[17] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 };
            size_nup_four_c = 17;
            memmove(nup_four_c, nup_four_cg33, sizeof(nup_four_cg33));
        } break;
        case 4: {
            int nup_four_cg34[18] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 71 };
            size_nup_four_c = 18;
            memmove(nup_four_c, nup_four_cg34, sizeof(nup_four_cg34));
        } break;
        case 5: {
            int nup_four_cg35[19] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 71, 91 };
            size_nup_four_c = 19;
            memmove(nup_four_c, nup_four_cg35, sizeof(nup_four_cg35));
        } break;
        case 6: {
            int nup_four_cg36[20] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 71, 91, 95 };
            size_nup_four_c = 20;
            memmove(nup_four_c, nup_four_cg36, sizeof(nup_four_cg36));
        } break;
        case 7: {
            int nup_four_cg37[21] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 71, 91, 95, 100 };
            size_nup_four_c = 21;
            memmove(nup_four_c, nup_four_cg37, sizeof(nup_four_cg37));
        } break;
        case 8: {
            int nup_four_cg38[22] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 71, 91, 95, 100, 106 };
            size_nup_four_c = 22;
            memmove(nup_four_c, nup_four_cg38, sizeof(nup_four_cg38));
        } break;
        case 9: {
            int nup_four_cg39[23] = { 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 71, 91, 95, 100, 106, 108 };
            size_nup_four_c = 22;
            memmove(nup_four_c, nup_four_cg39, sizeof(nup_four_cg39));
        } break;
        default: { std::cout << E_5 << endl; goto full_quit; } break;
        }
    }
    else if (chosen_banner == 5) {
        memmove(nup_four_c, nup_four_cg1, sizeof(nup_four_cg1));
    }
    else { std::cout << E_7 << endl; goto full_quit; }
    if (y_arg) goto core_core_loop;
    while (true) {
        if (quit) { std::cout << E_6 << endl; goto full_quit; }
    core_core_loop:
        if (y_arg) { std::cout << S_1 << endl << S_2 << endl << S_3 << endl << S_4 << endl << endl << S_85 << endl << endl; }
        const std::chrono::time_point<std::chrono::system_clock> startx = std::chrono::system_clock::now();
        auto starty = std::chrono::steady_clock::now();
        if (chosen_banner == 1 || chosen_banner == 2) {
            while (wishes_number > 0) {
                unsigned long long int temp1 = generatorz() % 2;
                int star = 0; //4-star or 5-star
                int type = 0; //Up or non-up, character or weapon
                int kind = 0; //which exactly
                if (five_star_assurance_number < 74) five_weight = 60;
                else five_weight = 60 + 600 * (five_star_assurance_number - 73);
                if (four_star_assurance_number < 9) four_weight = 510;
                else four_weight = 510 + 5100 * (four_star_assurance_number - 8);
                three_weight = 9430;
                int weight[3] = { five_weight, four_weight, three_weight };
                resultt = WRSpick(weight, 3);
                switch (resultt) {
                case 0: {
                    star = 5;
                    five_count++;
                    ave_fives += five_star_assurance_number;
                    if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }
                    if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }
                    five_pity[five_star_assurance_number - 1]++;
                    five_star_assurance_number = 0;
                    if (five_star_guarantee_number || temp1 < 1) {
                        type = 1;
                        five_count_c++;
                        kind = up_five;
                        five_star_guarantee_number = false;
                    }
                    else {
                        type = 2;
                        five_count_c++;
                        kind = rspick(nup_five_c, 5);
                        if (kind == five_check[0]) five_star_guarantee_number = false; else five_star_guarantee_number = true;
                    }// 5-star kind settler for banner I
                } break;
                case 1: {
                    star = 4;
                    four_count++;
                    if (four_star_assurance_number < 11) four_pity[four_star_assurance_number - 1]++;
                    else four_pity[10]++;
                    four_star_assurance_number = 0;
                    if (four_star_guarantee_number || temp1 < 1) {
                        type = 1;
                        four_count_c++;
                        unmet4_c = 0;
                        kind = rspick(up_four_g, 3);
                        four_star_guarantee_number = false;
                    }
                    else {
                        if (unmet4_c < 17 && unmet4_w < 17) {
                            int weight1[2] = { 255, 255 };
                            resultu = WRSpick(weight1, 2);
                            switch (resultu) {
                            case 0: {
                                type = 2;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(nup_four_c, size_nup_four_c);
                                if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = false; else four_star_guarantee_number = true;
                            } break;
                            case 1: {
                                type = 3;
                                four_count_w++;
                                unmet4_w = 0;
                                kind = rspick(nup_four_w, size_nup_four_w);
                                four_star_guarantee_number = true;
                            } break;
                            default: std::cout << E_4 << endl; break;
                            }
                        }
                        else if (unmet4_c > 16) {
                            int weight1[2] = { 255 + 2550 * (unmet4_c - 16), 255 };
                            resultu = WRSpick(weight1, 2);
                            switch (resultu) {
                            case 0: {
                                type = 2;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(nup_four_c, size_nup_four_c);
                                if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = false; else four_star_guarantee_number = true;
                            } break;
                            case 1: {
                                type = 3;
                                four_count_w++;
                                unmet4_w = 0;
                                kind = rspick(nup_four_w, size_nup_four_w);
                                four_star_guarantee_number = true;
                            } break;
                            default: std::cout << E_4 << endl; break;
                            }
                        }
                        else {
                            int weight1[2] = { 255 + 2550 * (unmet4_w - 16), 255 };
                            resultu = WRSpick(weight1, 2);
                            switch (resultu) {
                            case 0: {
                                type = 3;
                                four_count_w++;
                                unmet4_w = 0;
                                kind = rspick(nup_four_w, size_nup_four_w);
                                four_star_guarantee_number = true;
                            } break;
                            case 1: {
                                type = 2;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(nup_four_c, size_nup_four_c);
                                if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = false; else four_star_guarantee_number = true;
                            } break;
                            default: std::cout << E_4 << endl; break;
                            }
                        }
                    }
                } break;
                case 2: Tri() break;
                default: std::cout << E_3 << endl; break;
                }
                output_string()
                if (!((star == 4 && type == 1) || (star == 4 && type == 2))) unmet4_c++;
                if (!(star == 4 && type == 3)) unmet4_w++;
                if (!y_arg) {
                    luckget()
                    if (star == 4 || star == 5) {
                        for (int templuck : luckstar) {
                            if (templuck == 5) luck += 6232;
                            else if (templuck == 4) luck += 766;
                            else luck += 0;
                        }
                    }
                    luckcpy()
                }
            }
        }
        else if (chosen_banner == 3) {
            while (wishes_number > 0) {
                unsigned long long int temp1 = generatorz() % 4;
                int star = 0; //4-star or 5-star
                int type = 0; //Up or non-up, character or weapon
                int kind = 0; //which exactly
                if (five_star_assurance_number < 63) five_weight = 70;
                else if (five_star_assurance_number < 74) five_weight = 70 + 700 * (five_star_assurance_number - 62);
                else five_weight = 7770 + 350 * (five_star_assurance_number - 73);
                if (four_star_assurance_number < 8) four_weight = 600;
                else if (four_star_assurance_number == 8) four_weight = 6600;
                else four_weight = 6600 + 3000 * (four_star_assurance_number - 8);
                three_weight = 9330;
                int weight[3] = { five_weight, four_weight, three_weight };
                resultt = WRSpick(weight, 3);
                switch (resultt) {
                case 0: {
                    star = 5;
                    five_count++;
                    ave_fives += five_star_assurance_number;
                    if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }
                    if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }
                    five_pity_w[five_star_assurance_number - 1]++;
                    five_star_assurance_number = 0;
                    if (fate_weapon == 1 || fate_weapon == 2) {
                        if (fate_points == 2) {
                            type = 1;
                            five_count_w++;
                            kind = up_five_g[fate_weapon - 1];
                            fate_points = 0;
                            five_star_guarantee_number = false;
                        }
                        else if (five_star_guarantee_number || temp1 < 3) {
                            type = 1;
                            five_count_w++;
                            kind = rspick(up_five_g, 2);
                            if (kind == up_five_g[fate_weapon - 1]) fate_points = 0; else fate_points++;
                            five_star_guarantee_number = false;
                        }
                        else {
                            type = 2;
                            five_count_w++;
                            kind = rspick(nup_five_w, 10);
                            fate_points++;
                            if ((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = false; else five_star_guarantee_number = true;
                        }
                    }
                    else if (fate_weapon == 0) {
                        if (five_star_guarantee_number || temp1 < 3) {
                            type = 1;
                            five_count_w++;
                            kind = rspick(up_five_g, 2);
                            five_star_guarantee_number = false;
                        }
                        else {
                            type = 2;
                            five_count_w++;
                            kind = rspick(nup_five_w, 10);
                            if ((kind == five_check[0] || kind == five_check[1] || kind == five_check[2] || kind == five_check[3] || kind == five_check[4] || kind == five_check[5] || kind == five_check[6] || kind == five_check[7])) five_star_guarantee_number = false; else five_star_guarantee_number = true;
                        }
                    }
                    else { std::cout << E_2 << endl; goto full_quit; }
                } break;
                case 1: {
                    star = 4;
                    four_count++;
                    if (four_star_assurance_number < 11) four_pity[four_star_assurance_number - 1]++;
                    else four_pity[10]++;
                    four_star_assurance_number = 0;
                    if (four_star_guarantee_number || temp1 < 3) {
                        type = 1;
                        four_count_w++;
                        unmet4_w = 0;
                        kind = rspick(up_four_g, 5);
                        four_star_guarantee_number = false;
                    }
                    else {
                        if (unmet4_c < 15 && unmet4_w < 15) {
                            int weight2[2] = { 300, 300 };
                            resultu = WRSpick(weight2, 2);
                            switch (resultu) {
                            case 0: {
                                type = 2;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(nup_four_c, size_nup_four_c);
                                four_star_guarantee_number = true;
                            } break;
                            case 1: {
                                type = 3;
                                four_count_w++;
                                unmet4_w = 0;
                                kind = rspick(nup_four_w, size_nup_four_w);
                                if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = false; else four_star_guarantee_number = true;
                            } break;
                            default: std::cout << E_4 << endl; break;
                            }
                        }
                        else if (unmet4_c > 14) {
                            int weight2[2] = { 300 + 3000 * (unmet4_c - 14), 300 };
                            resultu = WRSpick(weight2, 2);
                            switch (resultu) {
                            case 0: {
                                type = 2;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(nup_four_c, size_nup_four_c);
                                four_star_guarantee_number = true;
                            } break;
                            case 1: {
                                type = 3;
                                four_count_w++;
                                unmet4_w = 0;
                                kind = rspick(nup_four_w, size_nup_four_w);
                                if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = false; else four_star_guarantee_number = true;
                            } break;
                            default: std::cout << E_4 << endl; break;
                            }
                        }
                        else {
                            int weight2[2] = { 300 + 3000 * (unmet4_w - 14), 300 };
                            resultu = WRSpick(weight2, 2);
                            switch (resultu) {
                            case 0: {
                                type = 3;
                                four_count_w++;
                                unmet4_w = 0;
                                kind = rspick(nup_four_w, size_nup_four_w);
                                if ((kind == four_check[0] || kind == four_check[1] || kind == four_check[2] || kind == four_check[3] || kind == four_check[4] || kind == four_check[5] || kind == four_check[6] || kind == four_check[7])) four_star_guarantee_number = false; else four_star_guarantee_number = true;
                            } break;
                            case 1: {
                                type = 2;
                                four_count_c++;
                                unmet4_c = 0;
                                kind = rspick(nup_four_c, size_nup_four_c);
                                four_star_guarantee_number = true;
                            } break;
                            default: std::cout << E_4 << endl; break;
                            }
                        }
                    }
                } break;
                case 2: Tri() break;
                default: std::cout << E_3 << endl; break;
                }
                output_string()
                if (!((star == 4 && type == 1) || (star == 4 && type == 2))) unmet4_c++;
                if (!(star == 4 && type == 3)) unmet4_w++;
                if (!y_arg) {
                    luckget()
                    if (star == 4 || star == 5) {
                        for (int templuck : luckstar) {
                            if (templuck == 5) luck += 5328;
                            else if (templuck == 4) luck += 674;
                            else luck += 0;
                        }
                    }
                    luckcpy()
                }
            }
        }
        else if (chosen_banner == 4) {
            while (wishes_number > 0) {
                int star = 0; //4-star or 5-star
                int type = 0; //Up or non-up, character or weapon
                int kind = 0; //which exactly
                if (five_star_assurance_number < 74) five_weight = 60;
                else five_weight = 60 + 600 * (five_star_assurance_number - 73);
                if (four_star_assurance_number < 9) four_weight = 510;
                else four_weight = 510 + 5100 * (four_star_assurance_number - 8);
                three_weight = 9430;
                int weight[3] = { five_weight, four_weight, three_weight };
                resultt = WRSpick(weight, 3);
                switch (resultt) {
                case 0: {
                    star = 5;
                    five_count++;
                    ave_fives += five_star_assurance_number;
                    if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }
                    if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }
                    five_pity[five_star_assurance_number - 1]++;
                    five_star_assurance_number = 0;
                    if (unmet5_c < 147 && unmet5_w < 147) {
                        int weight4[2] = { 30, 30 };
                        resultu = WRSpick(weight4, 2);
                        switch (resultu) {
                        case 0: {
                            type = 1;
                            five_count_c++;
                            unmet5_c = 0;
                            kind = rspick(nup_five_c, 5);
                        } break;
                        case 1: {
                            type = 2;
                            five_count_w++;
                            unmet5_w = 0;
                            kind = rspick(nup_five_w, 10);
                        } break;
                        default: std::cout << E_4 << endl; break;
                        }
                    }
                    else if (unmet5_c > 146) {
                        int weight4[2] = { 30 + 300 * (unmet5_c - 146), 30 };
                        resultu = WRSpick(weight4, 2);
                        switch (resultu) {
                        case 0: {
                            type = 1;
                            five_count_c++;
                            unmet5_c = 0;
                            kind = rspick(nup_five_c, 5);
                        } break;
                        case 1: {
                            type = 2;
                            five_count_w++;
                            unmet5_w = 0;
                            kind = rspick(nup_five_w, 10);
                        } break;
                        default: std::cout << E_4 << endl; break;
                        }
                    }
                    else {
                        int weight4[2] = { 30 + 300 * (unmet5_w - 146), 30 };
                        resultu = WRSpick(weight4, 2);
                        switch (resultu) {
                        case 0: {
                            type = 2;
                            five_count_w++;
                            unmet5_w = 0;
                            kind = rspick(nup_five_w, 10);
                        } break;
                        case 1: {
                            type = 1;
                            five_count_c++;
                            unmet5_c = 0;
                            kind = rspick(nup_five_c, 5);
                        } break;
                        default: std::cout << E_4 << endl; break;
                        }
                    }
                } break;
                case 1: {
                    star = 4;
                    four_count++;
                    if (four_star_assurance_number < 11) four_pity[four_star_assurance_number - 1]++;
                    else four_pity[10]++;
                    four_star_assurance_number = 0;
                    if (unmet4_c < 17 && unmet4_w < 17) {
                        int weight3[2] = { 255, 255 };
                        resultu = WRSpick(weight3, 2);
                        switch (resultu) {
                        case 0: {
                            type = 1;
                            four_count_c++;
                            unmet4_c = 0;
                            kind = rspick(nup_four_c, size_nup_four_c);
                        } break;
                        case 1: {
                            type = 2;
                            four_count_w++;
                            unmet4_w = 0;
                            kind = rspick(nup_four_w, size_nup_four_w);
                        } break;
                        default: std::cout << E_4 << endl; break;
                        }
                    }
                    else if (unmet4_c > 16) {
                        int weight3[2] = { 255 + 2550 * (unmet4_c - 16), 255 };
                        resultu = WRSpick(weight3, 2);
                        switch (resultu) {
                        case 0: {
                            type = 1;
                            four_count_c++;
                            unmet4_c = 0;
                            kind = rspick(nup_four_c, size_nup_four_c);
                        } break;
                        case 1: {
                            type = 2;
                            four_count_w++;
                            unmet4_w = 0;
                            kind = rspick(nup_four_w, size_nup_four_w);
                        } break;
                        default: std::cout << E_4 << endl; break;
                        }
                    }
                    else {
                        int weight3[2] = { 255 + 2550 * (unmet4_w - 16), 255 };
                        resultu = WRSpick(weight3, 2);
                        switch (resultu) {
                        case 0: {
                            type = 2;
                            four_count_w++;
                            unmet4_w = 0;
                            kind = rspick(nup_four_w, size_nup_four_w);
                        } break;
                        case 1: {
                            type = 1;
                            four_count_c++;
                            unmet4_c = 0;
                            kind = rspick(nup_four_c, size_nup_four_c);
                        } break;
                        default: std::cout << E_4 << endl; break;
                        }
                    }
                } break;
                case 2: Tri() break;
                default: std::cout << E_3 << endl; break;
                }
                output_string()
                    if (!(star == 5 && type == 1)) unmet5_c++;
                if (!(star == 5 && type == 2)) unmet5_w++;
                if (!(star == 4 && type == 1)) unmet4_c++;
                if (!(star == 4 && type == 2)) unmet4_w++;
                if (!y_arg) {
                    luckget()
                    if (star == 4 || star == 5) {
                        for (int templuck : luckstar) {
                            if (templuck == 5) luck += 6232;
                            else if (templuck == 4) luck += 766;
                            else luck += 0;
                        }
                    }
                    luckcpy()
                }
            }
        }
        else if (chosen_banner == 5) {
            while (wishes_number > 0) {
                unsigned long long int temp1 = generatorz() % 1000;
                int star = 0; //4-star or 5-star
                int type = 0; //Up or non-up, character or weapon
                int kind = 0; //which exactly
                if (is_noelle && countx == 9) {
                    star = 4;
                    four_count++;
                    four_star_assurance_number = 0;
                    type = 1;
                    kind = 20;
                    four_count_c++;
                    is_noelle = false;
                }
                else if (four_star_assurance_number < 9) {
                    if (temp1 < 6) {
                        star = 5;
                        five_count++;
                        ave_fives += five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }
                        five_star_assurance_number = 0;
                        type = 1;
                        five_count_c++;
                        kind = rspick(nup_five_c, 5);
                    }
                    else if (temp1 < 57) {
                        star = 4;
                        four_count++;
                        four_star_assurance_number = 0;
                        type = 1;
                        four_count_c++;
                        kind = rspick(nup_four_c, 11);
                        if (kind == 20) { is_noelle = false; }
                    }
                    else Tri()
                }
                else if (four_star_assurance_number == 9) {
                    if (temp1 < 6) {
                        star = 5;
                        five_count++;
                        type = 1;
                        ave_fives += five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }
                        five_star_assurance_number = 0;
                        five_count_c++;
                        kind = rspick(nup_five_c, 5);
                    }
                    else if (temp1 < 567) {
                        star = 4;
                        four_count++;
                        four_star_assurance_number = 0;
                        type = 1;
                        four_count_c++;
                        kind = rspick(nup_four_c, 11);
                        if (kind == 20) { is_noelle = false; }
                    }
                    else Tri()
                }
                else {
                    if (temp1 < 6) {
                        star = 5;
                        five_count++;
                        type = 1;
                        ave_fives += five_star_assurance_number;
                        if (five_star_assurance_number > max_fives) { max_fives = five_star_assurance_number; max_fivesth = five_count; max_fivecount = countx; }
                        if (five_star_assurance_number < min_fives) { min_fives = five_star_assurance_number; min_fivesth = five_count; min_fivecount = countx; }
                        five_star_assurance_number = 0;
                        five_count_c++;
                        kind = rspick(nup_five_c, 5);
                    }
                    else {
                        star = 4;
                        four_count++;
                        four_star_assurance_number = 0;
                        type = 1;
                        four_count_c++;
                        kind = rspick(nup_four_c, 11);
                        if (kind == 20) { is_noelle = false; }
                    }
                }
                output_string()
                if (!y_arg) {
                    luckget()
                        if (star == 4 || star == 5) {
                            for (int templuck : luckstar) {
                                if (templuck == 5) luck += 16667;
                                else if (templuck == 4) luck += 766;
                                else luck += 0;
                            }
                        }
                    luckcpy()
                }
            }
        }
        else { std::cout << E_7 << endl; goto full_quit; }
        // real work
        auto endy = std::chrono::steady_clock::now();
        const std::chrono::time_point<std::chrono::system_clock> endx = std::chrono::system_clock::now();
        auto elapsed = endy - starty;
        unsigned long long int elapsed_time = std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
        const std::time_t t_start = std::chrono::system_clock::to_time_t(startx);
        const std::time_t t_end = std::chrono::system_clock::to_time_t(endx);
        std::cout << endl << S_86 << t_start << endl;
        std::cout << S_87 << t_end << endl;
        std::cout << elapsed_time * 1.0 / 1000000 << S_84 << endl;
        if (five_count == 0) {
            std::cout << endl << S_73 << countx << S_74 << endl
                << S_75 << five_count << "  " << five_count * 100.0 / countx << "%" << endl
                << S_76 << four_count << "  " << four_count * 100.0 / countx << "%" << endl
                << S_77 << five_count_c << " : " << five_count_w << " : " << four_count_c << " : " << four_count_w << endl << endl;
        }
        else if (five_count > 0) {
            std::cout << endl << S_73 << countx << S_74 << endl
                << S_75 << five_count << "  " << five_count * 100.0 / countx << "%" << endl
                << S_76 << four_count << "  " << four_count * 100.0 / countx << "%" << endl
                << S_78 << max_fives << S_79 << max_fivesth << S_80 << max_fivecount + 1 << S_81 << endl
                << S_82 << min_fives << S_79 << min_fivesth << S_80 << min_fivecount + 1 << S_81 << endl
                << S_83 << ave_fives * 1.0 / five_count << endl
                << S_77 << five_count_c << " : " << five_count_w << " : " << four_count_c << " : " << four_count_w << endl << endl;
        }
        else { std::cout << E_8 << endl; goto full_quit; }
        for (int iout : five_stars_c) { if (pcount[iout] > 0) std::cout << pnameshort[iout] << "(" << pcount[iout] << ") "; }
        for (int iout : five_stars_w) { if (pcount[iout] > 0) std::cout << pnameshort[iout] << "(" << pcount[iout] << ") "; }
        if (five_count > 0) { std::cout << endl << endl; }
        for (int iout : four_stars_c) { if (pcount[iout] > 0) std::cout << pnameshort[iout] << "(" << pcount[iout] << ") "; }
        for (int iout : four_stars_w) { if (pcount[iout] > 0) std::cout << pnameshort[iout] << "(" << pcount[iout] << ") "; }
        std::cout << endl << endl;
        if (y_arg) goto full_quit;
        // a bunch of output of statistics
    }
full_quit:
    int prepause = getchar();
    prepause += 1;
    int pausex = getchar();
    pausex += 1;
    return pausex;
}