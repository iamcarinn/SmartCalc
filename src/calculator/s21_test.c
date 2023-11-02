#include <check.h>
#include <math.h>
#include <stdio.h>

#include "s21_calc.h"

START_TEST(calc_0) {
  char *string = "5";
  double result = 5;
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_1) {
  char *string = "2+3";
  double result = 5;
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_2) {
  char *string = "4-3";
  double result = 1;
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_3) {
  char *string = "-1-3";
  double result = -4;
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_4) {
  char *string = "12/4";
  double result = 3;
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_5) {
  char *string = "5*10";
  double result = 50;
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_6) {
  char *string = "tre";
  bool err_valid = valid(string);
  ck_assert_int_eq(err_valid, 1);
}
END_TEST

START_TEST(calc_7) {
  char *string = "2^3";
  double result = 8;
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_8) {
  char *string = "-7";
  double result = -7;
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_9) {
  char *string = "(5.3+5.7)";
  double result = 11;
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_10) {
  char *string = "sin(2)";
  double result = sin(2);
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_11) {
  char *string = "cos(2)";
  double result = cos(2);
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_12) {
  char *string = "tg(2)";
  double result = tan(2);
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_13) {
  char *string = "co";
  bool err_valid = valid(string);
  ck_assert_int_eq(err_valid, 1);
}
END_TEST

START_TEST(calc_14) {
  char *string = "asin(0.2)";
  double result = asin(0.2);
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_15) {
  char *string = "acos(0.2)";
  double result = acos(0.2);
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq_tol(result, my_result, 1e-6);
}
END_TEST

START_TEST(calc_16) {
  char *string = "atan(2)";
  double result = atan(2);
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq_tol(result, my_result, 1e-6);
}
END_TEST

START_TEST(calc_17) {
  char *string = "ln(2)";
  double result = log10(2);
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_18) {
  char *string = "log(2)";
  double result = log(2);
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_19) {
  char *string = "sqrt(3)";
  double result = sqrt(3);
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_20) {
  char *string = "30-5*(1+3)";
  double result = 10;
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_21) {
  char *string = "sin(2";
  bool err_valid = valid(string);
  ck_assert_int_eq(err_valid, 1);
}
END_TEST

START_TEST(calc_22) {
  char *string = "cis2";
  bool err_valid = valid(string);
  ck_assert_int_eq(err_valid, 1);
}
END_TEST

START_TEST(calc_23) {
  char *string = "*1";
  bool err_valid = valid(string);
  ck_assert_int_eq(err_valid, 1);
}
END_TEST

START_TEST(calc_24) {
  char *string = "1+1=2";
  bool err_valid = valid(string);
  ck_assert_int_eq(err_valid, 1);
}
END_TEST

START_TEST(calc_25) {
  char *string = "1+";
  bool err_valid = valid(string);
  ck_assert_int_eq(err_valid, 1);
}
END_TEST

START_TEST(calc_26) {
  char *string = "-(5-10)";
  double result = 5;
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_27) {
  char *string = "sin";
  bool err_valid = valid(string);
  ck_assert_int_eq(err_valid, 1);
}
END_TEST

START_TEST(calc_28) {
  char *string = "x";
  double result = 0;
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_29) {
  char *string = "()2";
  bool err_valid = valid(string);
  ck_assert_int_eq(err_valid, 1);
}
END_TEST

START_TEST(calc_30) {
  char *string = ")2+1(";
  bool err_valid = valid(string);
  ck_assert_int_eq(err_valid, 1);
}
END_TEST

START_TEST(calc_31) {
  char *string = "4.567";
  double result = 4.567;
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_32) {
  char *string = "5**5";
  bool err_valid = valid(string);
  ck_assert_int_eq(err_valid, 1);
}
END_TEST

START_TEST(calc_33) {
  char *string = "cos(5/19)";
  double result = cos((double)5 / 19);
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_34) {
  char *string = "cos(5/19)^3+0.123";
  double result = pow(cos((double)5 / 19), 3) + 0.123;
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_35) {
  char *string = "3%10";
  double result = fmod(3, 10);
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_36) {
  char *string = ".45";
  bool err_valid = valid(string);
  ck_assert_int_eq(err_valid, 1);
}
END_TEST

START_TEST(calc_37) {
  char *string = "3.45.5";
  bool err_valid = valid(string);
  ck_assert_int_eq(err_valid, 1);
}
END_TEST

START_TEST(calc_38) {
  char *string = "sqrt(4)";
  double result = sqrt(4);
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_39) {
  char *string = "-4 * 5";
  double result = -20;
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_40) {
  char *string = "(-4 * 5)/2";
  double result = -10;
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

START_TEST(calc_41) {
  char *string = "sin(sin(30*2))";
  double result = sin(sin(30 * 2));
  stack_ready *calc = {0};
  bool err_valid = valid(string);
  polish(string, &calc);
  double my_result = my_calc(calc, 0);
  ck_assert_int_eq(err_valid, 0);
  ck_assert_double_eq(result, my_result);
}
END_TEST

// КРЕДИТНЫЙ КАЛЬКУЛЯТОР АНУЛЕНТНЫЙ
START_TEST(kredit_an_0) {
  double res_mon = 0, res_proz = 0, res_total = 0;
  kredit_an(100000, 12, 18, &res_mon, &res_proz, &res_total);
  ck_assert_double_eq_tol(res_mon, 9168, 1e-1);
  ck_assert_double_eq_tol(res_proz, 10016, 1e-1);
  ck_assert_double_eq_tol(res_total, 110016, 1e-1);
}
END_TEST

START_TEST(kredit_an_1) {
  double res_mon = 0, res_proz = 0, res_total = 0;
  kredit_an(12537, 25, 18, &res_mon, &res_proz, &res_total);
  ck_assert_double_eq_tol(res_mon, 605.08, 1e-1);
  ck_assert_double_eq_tol(res_proz, 2590, 1e-1);
  ck_assert_double_eq_tol(res_total, 15127, 1e-1);
}
END_TEST

START_TEST(kredit_an_2) {
  double res_mon = 0, res_proz = 0, res_total = 0;
  kredit_an(87654, 5, 18, &res_mon, &res_proz, &res_total);
  ck_assert_double_eq_tol(res_mon, 18327.52, 1e-1);
  ck_assert_double_eq_tol(res_proz, 3983.6, 1e-1);
  ck_assert_double_eq_tol(res_total, 91637.6, 1e-1);
}
END_TEST

START_TEST(kredit_an_3) {
  double res_mon = 0, res_proz = 0, res_total = 0;
  kredit_an(7855144777, 12, 18, &res_mon, &res_proz, &res_total);
  ck_assert_double_eq_tol(res_mon, 720159617.43, 1e-1);
  ck_assert_double_eq_tol(res_proz, 786770632.16, 1e-1);
  ck_assert_double_eq_tol(res_total, 8641915409.16, 1e-1);
}
END_TEST

START_TEST(kredit_dif_0) {
  double res_begin = 0, res_end = 0, res_proz = 0, res_total = 0;
  kredit_dif(100000, 24, 18, &res_begin, &res_end, &res_proz, &res_total);
  ck_assert_double_eq_tol(res_begin, 5666.67, 1e-1);
  ck_assert_double_eq_tol(res_end, 4229.17, 1e-1);
  ck_assert_double_eq_tol(res_proz, 18750, 1e-1);
  ck_assert_double_eq_tol(res_total, 118750, 1e-1);
}
END_TEST

START_TEST(kredit_dif_1) {
  double res_begin = 0, res_end = 0, res_proz = 0, res_total = 0;
  kredit_dif(15424244, 50, 20, &res_begin, &res_end, &res_proz, &res_total);
  ck_assert_double_eq_tol(res_begin, 565555.61, 1e-1);
  ck_assert_double_eq_tol(res_end, 313626.29, 1e-1);
  ck_assert_double_eq_tol(res_proz, 6555303.7, 1e-1);
  ck_assert_double_eq_tol(res_total, 21979547.7, 1e-1);
}
END_TEST

START_TEST(kredit_dif_2) {
  double res_begin = 0, res_end = 0, res_proz = 0, res_total = 0;
  kredit_dif(25752, 17, 15, &res_begin, &res_end, &res_proz, &res_total);
  ck_assert_double_eq_tol(res_begin, 1836.72, 1e-1);
  ck_assert_double_eq_tol(res_end, 1533.76, 1e-1);
  ck_assert_double_eq_tol(res_proz, 2897.1, 1e-1);
  ck_assert_double_eq_tol(res_total, 28649.1, 1e-1);
}
END_TEST

START_TEST(kredit_dif_3) {
  double res_begin = 0, res_end = 0, res_proz = 0, res_total = 0;
  kredit_dif(222222, 528, 18, &res_begin, &res_end, &res_proz, &res_total);
  ck_assert_double_eq_tol(res_begin, 3754.21, 1e-1);
  ck_assert_double_eq_tol(res_end, 427.19, 1e-1);
  ck_assert_double_eq_tol(res_proz, 881665.79, 1e-1);
  ck_assert_double_eq_tol(res_total, 1103887.79, 1e-1);
}
END_TEST

int main(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");
  SRunner *sr = srunner_create(s1);
  int nf;

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, calc_0);
  tcase_add_test(tc1_1, calc_1);
  tcase_add_test(tc1_1, calc_2);
  tcase_add_test(tc1_1, calc_3);
  tcase_add_test(tc1_1, calc_4);
  tcase_add_test(tc1_1, calc_5);
  tcase_add_test(tc1_1, calc_6);
  tcase_add_test(tc1_1, calc_7);
  tcase_add_test(tc1_1, calc_8);
  tcase_add_test(tc1_1, calc_9);
  tcase_add_test(tc1_1, calc_10);
  tcase_add_test(tc1_1, calc_11);
  tcase_add_test(tc1_1, calc_12);
  tcase_add_test(tc1_1, calc_13);
  tcase_add_test(tc1_1, calc_14);
  tcase_add_test(tc1_1, calc_15);
  tcase_add_test(tc1_1, calc_16);
  tcase_add_test(tc1_1, calc_17);
  tcase_add_test(tc1_1, calc_18);
  tcase_add_test(tc1_1, calc_19);
  tcase_add_test(tc1_1, calc_20);
  tcase_add_test(tc1_1, calc_21);
  tcase_add_test(tc1_1, calc_22);
  tcase_add_test(tc1_1, calc_23);
  tcase_add_test(tc1_1, calc_24);
  tcase_add_test(tc1_1, calc_25);
  tcase_add_test(tc1_1, calc_26);
  tcase_add_test(tc1_1, calc_27);
  tcase_add_test(tc1_1, calc_28);
  tcase_add_test(tc1_1, calc_29);
  tcase_add_test(tc1_1, calc_30);
  tcase_add_test(tc1_1, calc_31);
  tcase_add_test(tc1_1, calc_32);
  tcase_add_test(tc1_1, calc_33);
  tcase_add_test(tc1_1, calc_34);
  tcase_add_test(tc1_1, calc_35);
  tcase_add_test(tc1_1, calc_36);
  tcase_add_test(tc1_1, calc_37);
  tcase_add_test(tc1_1, calc_38);
  tcase_add_test(tc1_1, calc_39);
  tcase_add_test(tc1_1, calc_40);
  tcase_add_test(tc1_1, calc_41);

  tcase_add_test(tc1_1, kredit_an_0);
  tcase_add_test(tc1_1, kredit_an_1);
  tcase_add_test(tc1_1, kredit_an_2);
  tcase_add_test(tc1_1, kredit_an_3);

  tcase_add_test(tc1_1, kredit_dif_0);
  tcase_add_test(tc1_1, kredit_dif_1);
  tcase_add_test(tc1_1, kredit_dif_2);
  tcase_add_test(tc1_1, kredit_dif_3);

  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}
