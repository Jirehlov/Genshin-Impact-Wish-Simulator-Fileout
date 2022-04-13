#include <fstream>
#include <iostream>
#include <chrono>
#include <iomanip>
#include <string>

#include "cn.h"
#include "lib/giwscli.h"

using namespace giwscli;

#define output_string()                                                  \
  {                                                                      \
    std::cout << countx + 1 << "(" << five_star_assurance_number << ")(" \
              << four_star_assurance_number << ") ";                     \
    casesx(kind);                                                        \
    std::cout << s_pname_cn[kind] << '\n';                               \
    pcount[kind]++;                                                      \
    wishes_number--;                                                     \
    countx++;                                                            \
    five_star_assurance_number++;                                        \
    four_star_assurance_number++;                                        \
  }  // cout what have come home
#define luckcpy()                                                        \
  {                                                                      \
    if (luck > luckiest || countx < 11) {                                \
      luckiest = luck;                                                   \
      for (size_t templuck = 0; templuck < 10; templuck++) {             \
        luckiestlocation[templuck] = lucklocation[templuck];             \
        luckiestsublocation[templuck] = lucksublocation[templuck];       \
        luckiestsubsublocation[templuck] = lucksubsublocation[templuck]; \
        luckiestkind[templuck] = luckkind[templuck];                     \
      }                                                                  \
    }                                                                    \
  }  // snapshot the luckiest moment
#define luckget()                                                             \
  {                                                                           \
    for (size_t templuck = 0; templuck < 9; templuck++) {                     \
      lucklocation[templuck] = lucklocation[templuck + 1];                    \
      lucksublocation[templuck] = lucksublocation[templuck + 1];              \
      lucksubsublocation[templuck] = lucksubsublocation[templuck + 1];        \
      luckkind[templuck] = luckkind[templuck + 1];                            \
      luckstar[templuck] = luckstar[templuck + 1];                            \
    }                                                                         \
    lucklocation[9] = countx;                                                 \
    lucksublocation[9] = static_cast<size_t>(five_star_assurance_number) - 1; \
    lucksubsublocation[9] =                                                   \
        static_cast<size_t>(four_star_assurance_number) - 1;                  \
    luckkind[9] = kind;                                                       \
    luckstar[9] = star;                                                       \
    luck = 0;                                                                 \
  }  // get the recorded luckiest

using namespace std;

bool y_arg = false;
size_t luck = 0, luckiest = 0, one_to_ten[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
std::chrono::system_clock::time_point starty = std::chrono::system_clock::now();
std::chrono::system_clock::time_point endy = std::chrono::system_clock::now();
std::chrono::nanoseconds elapsed = starty - endy;
std::time_t t_start = std::chrono::system_clock::to_time_t(starty);
std::time_t t_end = std::chrono::system_clock::to_time_t(endy);
static size_t four_stars_c[23] = {15, 16, 17, 18, 19,  20,  21, 22,
                                  23, 24, 25, 26, 27,  28,  29, 30,
                                  31, 71, 91, 95, 100, 106, 108},
              four_stars_w[27] = {32, 33, 34, 35, 36, 37, 38,  39,  40,
                                  41, 42, 43, 44, 45, 46, 47,  48,  49,
                                  79, 80, 82, 83, 84, 88, 102, 103, 104},
              five_stars_c[23] = {0,  1,  2,  3,  4,   63,  64, 65,
                                  66, 67, 68, 69, 70,  72,  86, 89,
                                  90, 94, 96, 99, 105, 109, 111},
              five_stars_w[28] = {5,  6,  7,  8,   9,   10,  11,  12, 13, 14,
                                  73, 74, 75, 76,  77,  78,  81,  85, 87, 92,
                                  93, 97, 98, 101, 107, 110, 112, 113},
              luckkind[10] = {127, 127, 127, 127, 127, 127, 127, 127, 127, 127},
              luckstar[10] = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
              luckiestkind[10] = {127, 127, 127, 127, 127,
                                  127, 127, 127, 127, 127},
              lucklocation[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
              lucksublocation[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
              lucksubsublocation[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
              luckiestlocation[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
              luckiestsublocation[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
              luckiestsubsublocation[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
signed long long int wishes_number = 0;
auto elapsed_time =
    std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();

static void casesx(size_t kind_p) {
  if (kind_p < 15) {
    std::cout << "!!!!!***** ";
  } else if (kind_p < 50) {
    std::cout << "!!**** ";
  } else if (kind_p < 63) {
    std::cout << "*** ";
  } else if (kind_p == 71 || kind_p == 79 || kind_p == 80 || kind_p == 82 ||
             kind_p == 83 || kind_p == 84 || kind_p == 88 || kind_p == 91 ||
             kind_p == 95 || kind_p == 100 || kind_p == 102 || kind_p == 103 ||
             kind_p == 104 || kind_p == 106 || kind_p == 108) {
    std::cout << "!!**** ";
  } else if (kind_p < MAX_ITEMS) {
    std::cout << "!!!!!***** ";
  } else {
    std::cout << CN_E_1 << "  ";
  }
}  // cout stars prefix

static void ini_all(size_t* in, size_t ins, size_t nu) {
  for (size_t i = 0; i < ins; i++) {
    in[i] = nu;
  }
}

int main(int argc, char* argv[]) {
  std::ofstream ofs{"output.txt"};
  std::streambuf* coutbuf = std::cout.rdbuf();
  std::cout.rdbuf(ofs.rdbuf());
  static char default_argv0[] = "giwscli";
  if (!argv[0] || !argv[0][0]) argv[0] = default_argv0;
  quit = true;
  is_noelle = true;
  five_star_guarantee_number = false;
  four_star_guarantee_number = false;
  chosen_banner = 0;
  chosen_event = 0;
  four_star_assurance_number = 1;
  five_star_assurance_number = 1;
  max_fives = 1;
  min_fives = PTRDIFF_MAX;
  fate_weapon = 0;
  fate_points = 0;
  five_weight = 0;
  four_weight = 0;
  three_weight = 0;
  unmet4_c = 0;
  unmet4_w = 0;
  unmet5_c = 0;
  unmet5_w = 0;
  resultt = 0;
  resultu = 0;
  luck = 0;
  luckiest = 0;
  size_nup_four_w = 18;
  countx = 0;
  wishes_number = 0;
  five_count = 0;
  five_count_c = 0;
  five_count_w = 0;
  four_count = 0;
  four_count_c = 0;
  four_count_w = 0;
  ave_fives = 0;
  max_fivesth = 1;
  min_fivesth = 1;
  max_fivecount = 1;
  min_fivecount = 1;
  ini_all(up_five_g, 2, 0);
  ini_all(up_four_g, 5, 0);
  ini_all(nup_four_c, 32, 0);
  for (size_t i = 0; i < 10; i++) {
    luckstar[i] = 3;
  }
  ini_all(luckiestkind, 10, 127);
  ini_all(five_check, 8, 127);
  ini_all(four_check, 8, 127);
  ini_ams(lucklocation, 10, one_to_ten);
  ini_ams(lucksublocation, 10, one_to_ten);
  ini_ams(lucksubsublocation, 10, one_to_ten);
  ini_ams(luckiestlocation, 10, one_to_ten);
  ini_ams(luckiestsublocation, 10, one_to_ten);
  ini_ams(luckiestsubsublocation, 10, one_to_ten);
  ini_all(pcount, 128, 0);
  ini_all(four_pity, 11, 0);
  ini_all(five_pity, 90, 0);
  ini_all(five_pity_w, 80, 0);
  if (argc == 4) {
    int test0 = 0;
    int test1 = 0;
    long long int test2 = 0;
    try {
      test0 = stoi(argv[1]);
      test1 = stoi(argv[2]);
      test2 = stoll(argv[3]);
    } catch (...) {
      std::cout << CN_E_11 << '\n';
      y_arg = true;
      goto full_quit;
    }
    test0 = std::stoi(argv[1]);
    test1 = std::stoi(argv[2]);
    test2 = std::stoll(argv[3]);
    chosen_banner = static_cast<ptrdiff_t>(test0);
    chosen_event = static_cast<ptrdiff_t>(test1);
    if (test2 < 1) {
      std::cout << CN_S_72 << '\n';
      y_arg = true;
      goto full_quit;
    } else {
      wishes_number = test2;
    }
    quit = false;
    y_arg = true;
    goto set_banner;
  } else {
    std::cout << CN_E_11 << '\n';
    y_arg = true;
    goto full_quit;
  }
set_banner:
  set_banner_f(chosen_banner, chosen_event);
  std::cout << CN_S_1 << '\n'
            << CN_S_2 << '\n'
            << CN_S_3 << '\n'
            << CN_S_4 << "\n\n"
            << CN_S_85 << "\n\n";
  starty = std::chrono::system_clock::now();
  if (chosen_banner == 1 || chosen_banner == 2) {
    while (wishes_number > 0) {
      temp1 = generatorz() % 2;
      star = 0;  // 4-star or 5-star
      type = 0;  // Up or non-up, character or weapon
      kind = 0;  // which exactly
      core_f_1();
      output_string() if (star != 4 || type == 3) unmet4_c++;
      if (star != 4 || type != 3) unmet4_w++;
      if (y_arg) {
        luckget() if (star == 4 || star == 5) {
          for (const size_t templuck : luckstar) {
            if (templuck == 5)
              luck += 6232;
            else if (templuck == 4)
              luck += 766;
            else
              luck += 0;
          }
        }
        luckcpy()
      }
    }
  } else if (chosen_banner == 3) {
    while (wishes_number > 0) {
      temp1 = generatorz() % 4;
      star = 0;  // 4-star or 5-star
      type = 0;  // Up or non-up, character or weapon
      kind = 0;  // which exactly
      core_f_3();
      output_string() if (star != 4 || type == 3) unmet4_c++;
      if (star != 4 || type != 3) unmet4_w++;
      if (y_arg) {
        luckget() if (star == 4 || star == 5) {
          for (const size_t templuck : luckstar) {
            if (templuck == 5)
              luck += 5328;
            else if (templuck == 4)
              luck += 674;
            else
              luck += 0;
          }
        }
        luckcpy()
      }
    }
  } else if (chosen_banner == 4) {
    while (wishes_number > 0) {
      star = 0;  // 4-star or 5-star
      type = 0;  // Up or non-up, character or weapon
      kind = 0;  // which exactly
      core_f_3();
      output_string() if (!(star == 5 && type == 1)) unmet5_c++;
      if (!(star == 5 && type == 2)) unmet5_w++;
      if (!(star == 4 && type == 1)) unmet4_c++;
      if (!(star == 4 && type == 2)) unmet4_w++;
      if (y_arg) {
        luckget() if (star == 4 || star == 5) {
          for (const size_t templuck : luckstar) {
            if (templuck == 5)
              luck += 6232;
            else if (templuck == 4)
              luck += 766;
            else
              luck += 0;
          }
        }
        luckcpy()
      }
    }
  } else if (chosen_banner == 5) {
    while (wishes_number > 0) {
      temp1 = generatorz() % 1000;
      star = 0;  // 4-star or 5-star
      kind = 0;  // which exactly
      core_f_1();
      output_string() if (y_arg) {
        luckget() if (star == 4 || star == 5) {
          for (const size_t templuck : luckstar) {
            if (templuck == 5)
              luck += 16667;
            else if (templuck == 4)
              luck += 766;
            else
              luck += 0;
          }
        }
        luckcpy()
      }
    }
  } else {
    std::cout << CN_E_7 << '\n';
    goto full_quit;
  }
  // real work
  quit = true;
  endy = std::chrono::system_clock::now();
  elapsed = endy - starty;
  elapsed_time =
      std::chrono::duration_cast<std::chrono::microseconds>(elapsed).count();
  t_start = std::chrono::system_clock::to_time_t(starty);
  t_end = std::chrono::system_clock::to_time_t(endy);
  std::cout << '\n' << CN_S_86 << t_start << '\n';
  std::cout << CN_S_87 << t_end << '\n';
  std::cout << static_cast<double>(elapsed_time) * 1.0 / 1000000 << CN_S_84
            << '\n';
  if (five_count == 0) {
    std::cout << '\n'
              << CN_S_73 << countx << CN_S_74 << '\n'
              << CN_S_75 << five_count << "  "
              << static_cast<double>(five_count) * 100.0 /
                     static_cast<double>(countx)
              << "%\n"
              << CN_S_76 << four_count << "  "
              << static_cast<double>(four_count) * 100.0 /
                     static_cast<double>(countx)
              << "%\n"
              << CN_S_77 << five_count_c << " : " << five_count_w << " : "
              << four_count_c << " : " << four_count_w << "\n\n";
  } else {
    std::cout << '\n'
              << CN_S_73 << countx << CN_S_74 << '\n'
              << CN_S_75 << five_count << "  "
              << static_cast<double>(five_count) * 100.0 /
                     static_cast<double>(countx)
              << "%\n"
              << CN_S_76 << four_count << "  "
              << static_cast<double>(four_count) * 100.0 /
                     static_cast<double>(countx)
              << "%\n"
              << CN_S_78 << max_fives << CN_S_79 << max_fivesth << CN_S_80
              << max_fivecount + 1 << CN_S_81 << '\n'
              << CN_S_82 << min_fives << CN_S_79 << min_fivesth << CN_S_80
              << min_fivecount + 1 << CN_S_81 << '\n'
              << CN_S_83
              << static_cast<double>(ave_fives) * 1.0 /
                     static_cast<double>(five_count)
              << '\n'
              << CN_S_77 << five_count_c << " : " << five_count_w << " : "
              << four_count_c << " : " << four_count_w << "\n\n";
  }
  for (const size_t iout : five_stars_c) {
    if (pcount[iout] > 0)
      std::cout << s_pnameshort_cn[iout] << "(" << pcount[iout] << ") ";
  }
  for (const size_t iout : five_stars_w) {
    if (pcount[iout] > 0)
      std::cout << s_pnameshort_cn[iout] << "(" << pcount[iout] << ") ";
  }
  if (five_count > 0) {
    std::cout << "\n\n";
  }
  for (const size_t iout : four_stars_c) {
    if (pcount[iout] > 0)
      std::cout << s_pnameshort_cn[iout] << "(" << pcount[iout] << ") ";
  }
  for (const size_t iout : four_stars_w) {
    if (pcount[iout] > 0)
      std::cout << s_pnameshort_cn[iout] << "(" << pcount[iout] << ") ";
  }
  std::cout << "\n\n";
  if (countx < 10) {
    std::cout << CN_S_62 << '\n';
    goto print_1;
  }
  std::cout << CN_S_63 << luckiest << '\n';
  for (size_t templuck = 0; templuck < 10; templuck++) {
    std::cout << luckiestlocation[templuck] << "("
              << luckiestsublocation[templuck] << ")("
              << luckiestsubsublocation[templuck] << ") ";
    casesx(luckiestkind[templuck]);
    std::cout << s_pname_cn[luckiestkind[templuck]] << '\n';
  }
print_1:
  std::cout << '\n';
  if (chosen_banner == 5 || four_count == 0 || five_count == 0) {
    wishes_number = 0;
    std::cout << CN_S_72 << '\n';
    goto print_2;
  } else if (chosen_banner == 1 || chosen_banner == 2 || chosen_banner == 4) {
    std::cout << CN_S_88 << "\n\n";
    std::cout << std::fixed << std::setprecision(8);
    for (size_t iout = 0; iout < 10; iout++) {
      std::cout << iout + 1 << "  " << four_pity[iout] << "   "
                << static_cast<double>(four_pity[iout]) * 100.0 /
                       static_cast<double>(four_count)
                << "%\n";
    }
    std::cout << "10+  " << four_pity[10] << "   "
              << static_cast<double>(four_pity[10]) * 100.0 /
                     static_cast<double>(four_count)
              << "%\n\n"
              << CN_S_89 << "\n\n";
    for (size_t iout = 0; iout < 90; iout++) {
      std::cout << iout + 1 << "  " << five_pity[iout] << "   "
                << static_cast<double>(five_pity[iout]) * 100.0 /
                       static_cast<double>(five_count)
                << "%\n";
    }
    std::cout << std::defaultfloat;
    wishes_number = 0;
    goto print_2;
  } else if (chosen_banner == 3) {
    std::cout << CN_S_88 << "\n\n";
    std::cout << std::fixed << std::setprecision(8);
    for (size_t iout = 0; iout < 10; iout++) {
      std::cout << iout + 1 << "  " << four_pity[iout] << "   "
                << static_cast<double>(four_pity[iout]) * 100.0 /
                       static_cast<double>(four_count)
                << "%\n";
    }
    std::cout << "10+  " << four_pity[10] << "   "
              << static_cast<double>(four_pity[10]) * 100.0 /
                     static_cast<double>(four_count)
              << "%\n\n"
              << CN_S_89 << "\n\n";
    for (size_t iout = 0; iout < 80; iout++) {
      std::cout << iout + 1 << "  " << five_pity_w[iout] << "   "
                << static_cast<double>(five_pity_w[iout]) * 100.0 /
                       static_cast<double>(five_count)
                << "%\n";
    }
    std::cout << std::defaultfloat;
    wishes_number = 0;
    goto print_2;
  } else {
    wishes_number = 0;
    std::cout << CN_E_7 << '\n';
    goto full_quit;
  }
print_2:
  if (y_arg) goto full_quit;
full_quit:
  std::cout.rdbuf(coutbuf);
  return 0;
}