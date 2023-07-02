#include <check.h>
#include <math.h>
#include <time.h>

#include "s21_math.h"
#define ACCURACY 1e-6
#define TEST_AMOUNT 100

START_TEST(s21_abs_test1) { ck_assert_int_eq(s21_abs(1), abs(-1)); }
END_TEST

START_TEST(s21_abs_test2) { ck_assert_int_eq(s21_abs(0), abs(0)); }
END_TEST

START_TEST(s21_abs_test3) { ck_assert_int_eq(s21_abs(456789), abs(456789)); }
END_TEST

START_TEST(s21_abs_test4) { ck_assert_int_eq(s21_abs(-999999), abs(-999999)); }
END_TEST

START_TEST(s21_abs_test5) {
  srand(time(NULL));
  int value;
  int limit = pow(10, 6);
  for (int i = 0; i < TEST_AMOUNT; i++) {
    value = rand() % limit - limit / 2;
    printf("test_value%d for s21_abs = %d\n", i, value);
    ck_assert_int_eq(s21_abs(value), abs(value));
  }
}
END_TEST

START_TEST(s21_acos_test1) {
  ck_assert_ldouble_eq_tol(s21_acos(1.000000), acos(1.000000), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test2) {
  ck_assert_ldouble_eq_tol(s21_acos(-1.0), acos(-1.0), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test3) {
  ck_assert_ldouble_eq_tol(isnan(s21_acos(2.1)), isnan(acos(2.1)), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test4) {
  ck_assert_ldouble_eq_tol(isnan(s21_acos(2.0)), isnan(acos(2.0)), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test5) {
  ck_assert_ldouble_eq_tol(s21_acos(0.25), acos(0.25), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test6) {
  ck_assert_ldouble_eq_tol(s21_acos(0.5), acos(0.5), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test7) {
  ck_assert_ldouble_eq_tol(s21_acos(0.75), acos(0.75), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test8) {
  ck_assert_ldouble_eq_tol(isnan(s21_acos(-1.25)), isnan(acos(-1.25)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_acos_test9) {
  ck_assert_ldouble_eq_tol(isnan(s21_acos(4.0)), isnan(acos(4.0)), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test10) {
  ck_assert_ldouble_eq_tol(s21_acos(0.123), acos(0.123), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test11) {
  ck_assert_ldouble_eq_tol(isnan(s21_cos(-0.456)), isnan(acos(-0.456)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_acos_test12) {
  ck_assert_ldouble_eq_tol(s21_acos(0.89), acos(0.89), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test13) {
  ck_assert_ldouble_eq_tol(s21_acos(-0.267), acos(-0.267), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test14) {
  ck_assert_ldouble_eq_tol(s21_acos(0.6667), acos(0.6667), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test15) {
  ck_assert_ldouble_eq_tol(s21_acos(0.999999), acos(0.999999), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test16) {
  ck_assert_ldouble_eq_tol(isnan(s21_acos(INFINITY)), isnan(acos(INFINITY)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_acos_test17) {
  ck_assert_ldouble_eq_tol(isnan(s21_acos(-INFINITY)), isnan(acos(-INFINITY)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_acos_test18) {
  ck_assert_ldouble_eq_tol(s21_acos(-0.0), acos(-0.0), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test19) {
  ck_assert_ldouble_eq_tol(s21_acos(+0.0), acos(+0.0), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test20) {
  ck_assert_ldouble_eq_tol(isnan(s21_acos(NAN)), isnan(acos(NAN)), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test21) {
  ck_assert_ldouble_eq_tol(isnan(s21_acos(S21_PI)), isnan(acos(S21_PI)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_acos_test22) {
  ck_assert_ldouble_eq_tol(isnan(s21_acos(S21_PI / 2)), isnan(acos(S21_PI / 2)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_acos_test23) {
  ck_assert_ldouble_eq_tol(isnan(s21_acos(-S21_PI / 2)),
                           isnan(acos(-S21_PI / 2)), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test24) {
  ck_assert_ldouble_eq_tol(s21_acos(-S21_PI / 4), acos(-S21_PI / 4), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test25) {
  ck_assert_ldouble_eq_tol(s21_acos(-S21_PI / 6), acos(-S21_PI / 6), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test26) {
  ck_assert_ldouble_eq_tol(isnan(s21_acos(2 * S21_PI)), isnan(acos(2 * S21_PI)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_acos_test27) {
  ck_assert_ldouble_eq_tol(isnan(s21_acos(-2 * S21_PI)),
                           isnan(acos(-2 * S21_PI)), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test28) {
  ck_assert_ldouble_eq_tol(isnan(s21_acos(S21_PI / 3)), isnan(acos(S21_PI / 3)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_acos_test29) {
  ck_assert_ldouble_eq_tol(isnan(s21_acos(-S21_PI / 3)),
                           isnan(acos(-S21_PI / 3)), ACCURACY);
}
END_TEST

START_TEST(s21_acos_test30) {
  ck_assert_ldouble_eq_tol(s21_acos(S21_PI / 6), acos(S21_PI / 6), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test1) {
  ck_assert_ldouble_eq_tol(s21_asin(1.0), asin(1.0), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test2) {
  ck_assert_ldouble_eq_tol(s21_asin(-1.0), asin(-1.0), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test3) {
  ck_assert_ldouble_eq_tol(isnan(s21_asin(2.1)), isnan(asin(2.1)), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test4) {
  ck_assert_ldouble_eq_tol(isnan(s21_asin(2.0)), isnan(asin(2.0)), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test5) {
  ck_assert_ldouble_eq_tol(s21_asin(0.25), asin(0.25), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test6) {
  ck_assert_ldouble_eq_tol(s21_asin(0.5), asin(0.5), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test7) {
  ck_assert_ldouble_eq_tol(s21_asin(0.75), asin(0.75), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test8) {
  ck_assert_ldouble_eq_tol(isnan(s21_asin(-1.25)), isnan(asin(-1.25)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_asin_test9) {
  ck_assert_ldouble_eq_tol(isnan(s21_asin(4.0)), isnan(asin(4.0)), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test10) {
  ck_assert_ldouble_eq_tol(s21_asin(0.123), asin(0.123), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test11) {
  ck_assert_ldouble_eq_tol(s21_asin(-0.456), asin(-0.456), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test12) {
  ck_assert_ldouble_eq_tol(s21_asin(0.89), asin(0.89), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test13) {
  ck_assert_ldouble_eq_tol(s21_asin(-0.267), asin(-0.267), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test14) {
  ck_assert_ldouble_eq_tol(s21_asin(0.6667), asin(0.6667), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test15) {
  ck_assert_ldouble_eq_tol(s21_asin(0.999999), asin(0.999999), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test16) {
  ck_assert_ldouble_eq_tol(isnan(s21_asin(INFINITY)), isnan(asin(INFINITY)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_asin_test17) {
  ck_assert_ldouble_eq_tol(isnan(s21_asin(-INFINITY)), isnan(asin(-INFINITY)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_asin_test18) {
  ck_assert_ldouble_eq_tol(s21_asin(-0.0), asin(-0.0), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test19) {
  ck_assert_ldouble_eq_tol(s21_asin(+0.0), asin(+0.0), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test20) {
  ck_assert_ldouble_eq_tol(isnan(s21_asin(NAN)), isnan(asin(NAN)), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test21) {
  ck_assert_ldouble_eq_tol(isnan(s21_asin(S21_PI)), isnan(asin(S21_PI)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_asin_test22) {
  ck_assert_ldouble_eq_tol(isnan(s21_asin(S21_PI / 2)), isnan(asin(S21_PI / 2)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_asin_test23) {
  ck_assert_ldouble_eq_tol(isnan(s21_asin(-S21_PI / 2)),
                           isnan(asin(-S21_PI / 2)), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test24) {
  ck_assert_ldouble_eq_tol(s21_asin(-S21_PI / 4), asin(-S21_PI / 4), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test25) {
  ck_assert_ldouble_eq_tol(s21_asin(-S21_PI / 6), asin(-S21_PI / 6), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test26) {
  ck_assert_ldouble_eq_tol(isnan(s21_asin(500)), isnan(asin(500)), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test27) {
  ck_assert_ldouble_eq_tol(isnan(s21_asin(-2 * S21_PI)),
                           isnan(asin(-2 * S21_PI)), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test28) {
  ck_assert_ldouble_eq_tol(isnan(s21_asin(S21_PI / 3)), isnan(asin(S21_PI / 3)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_asin_test29) {
  ck_assert_ldouble_eq_tol(isnan(s21_asin(-S21_PI / 3)),
                           isnan(asin(-S21_PI / 3)), ACCURACY);
}
END_TEST

START_TEST(s21_asin_test30) {
  ck_assert_ldouble_eq_tol(s21_asin(S21_PI / 6), asin(S21_PI / 6), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test1) {
  ck_assert_ldouble_eq_tol(s21_atan(1.0), atan(1.0), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test2) {
  ck_assert_ldouble_eq_tol(s21_atan(-1.0), atan(-1.0), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test3) {
  ck_assert_ldouble_eq_tol(s21_atan(2.1), atan(2.1), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test4) {
  ck_assert_ldouble_eq_tol(s21_atan(2.0), atan(2.0), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test5) {
  ck_assert_ldouble_eq_tol(s21_atan(0.25), atan(0.25), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test6) {
  ck_assert_ldouble_eq_tol(s21_atan(0.5), atan(0.5), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test7) {
  ck_assert_ldouble_eq_tol(s21_atan(0.75), atan(0.75), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test8) {
  ck_assert_ldouble_eq_tol(s21_atan(-1.25), atan(-1.25), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test9) {
  ck_assert_ldouble_eq_tol(s21_atan(4.0), atan(4.0), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test10) {
  ck_assert_ldouble_eq_tol(s21_atan(0.123), atan(0.123), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test11) {
  ck_assert_ldouble_eq_tol(s21_atan(-0.456), atan(-0.456), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test12) {
  ck_assert_ldouble_eq_tol(s21_atan(0.89), atan(0.89), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test13) {
  ck_assert_ldouble_eq_tol(s21_atan(-0.267), atan(-0.267), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test14) {
  ck_assert_ldouble_eq_tol(s21_atan(0.6667), atan(0.6667), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test15) {
  ck_assert_ldouble_eq_tol(s21_atan(0.99), atan(0.99), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test16) {
  ck_assert_ldouble_eq_tol(isnan(s21_atan(INFINITY)), isnan(atan(INFINITY)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_atan_test17) {
  ck_assert_ldouble_eq_tol(isnan(s21_atan(-INFINITY)), isnan(atan(-INFINITY)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_atan_test18) {
  ck_assert_ldouble_eq_tol(s21_atan(-0.0), atan(-0.0), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test19) {
  ck_assert_ldouble_eq_tol(s21_atan(+0.0), atan(+0.0), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test20) {
  ck_assert_ldouble_eq_tol(isnan(s21_atan(NAN)), isnan(atan(NAN)), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test21) {
  ck_assert_ldouble_eq_tol(s21_atan(S21_PI), atan(S21_PI), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test22) {
  ck_assert_ldouble_eq_tol(s21_atan(S21_PI / 2), atan(S21_PI / 2), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test23) {
  ck_assert_ldouble_eq_tol(s21_atan(-S21_PI / 2), atan(-S21_PI / 2), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test24) {
  ck_assert_ldouble_eq_tol(s21_atan(-S21_PI / 4), atan(-S21_PI / 4), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test25) {
  ck_assert_ldouble_eq_tol(s21_atan(-S21_PI / 6), atan(-S21_PI / 6), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test26) {
  ck_assert_ldouble_eq_tol(s21_atan(2 * S21_PI), atan(2 * S21_PI), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test27) {
  ck_assert_ldouble_eq_tol(s21_atan(-2 * S21_PI), atan(-2 * S21_PI), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test28) {
  ck_assert_ldouble_eq_tol(s21_atan(S21_PI / 3), atan(S21_PI / 3), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test29) {
  ck_assert_ldouble_eq_tol(s21_atan(-S21_PI / 3), atan(-S21_PI / 3), ACCURACY);
}
END_TEST

START_TEST(s21_atan_test30) {
  ck_assert_ldouble_eq_tol(s21_atan(S21_PI / 6), atan(S21_PI / 6), ACCURACY);
}
END_TEST

START_TEST(s21_ceil_test) {
  srand(time(NULL));
  long double value;
  long double max = 100000.56789;
  long double min = -max;
  for (int i = 0; i < TEST_AMOUNT; i++) {
    value = (long double)(rand()) / RAND_MAX * (max - min) + min;
    printf("test_value%d for s21_ceil = %Lf\n", i, value);
    ck_assert_ldouble_eq_tol(s21_ceil(value), ceil((double)value), ACCURACY);
  }
}
END_TEST

START_TEST(s21_cos_test1) {
  ck_assert_ldouble_eq_tol(s21_cos(1.0), cos(1.0), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test2) {
  ck_assert_ldouble_eq_tol(s21_cos(-1.0), cos(-1.0), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test3) {
  ck_assert_ldouble_eq_tol(s21_cos(2.1), cos(2.1), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test4) {
  ck_assert_ldouble_eq_tol(s21_cos(2.0), cos(2.0), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test5) {
  ck_assert_ldouble_eq_tol(s21_cos(0.25), cos(0.25), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test6) {
  ck_assert_ldouble_eq_tol(s21_cos(0.5), cos(0.5), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test7) {
  ck_assert_ldouble_eq_tol(s21_cos(0.75), cos(0.75), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test8) {
  ck_assert_ldouble_eq_tol(s21_cos(-1.25), cos(-1.25), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test9) {
  ck_assert_ldouble_eq_tol(s21_cos(4.0), cos(4.0), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test10) {
  ck_assert_ldouble_eq_tol(s21_cos(0.123), cos(0.123), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test11) {
  ck_assert_ldouble_eq_tol(s21_cos(-0.456), cos(-0.456), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test12) {
  ck_assert_ldouble_eq_tol(s21_cos(0.89), cos(0.89), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test13) {
  ck_assert_ldouble_eq_tol(s21_cos(-0.267), cos(-0.267), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test14) {
  ck_assert_ldouble_eq_tol(s21_cos(0.6667), cos(0.6667), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test15) {
  ck_assert_ldouble_eq_tol(s21_cos(0.999999), cos(0.999999), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test16) {
  ck_assert_ldouble_eq_tol(isnan(s21_cos(INFINITY)), isnan(cos(INFINITY)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_cos_test17) {
  ck_assert_ldouble_eq_tol(isnan(s21_cos(-INFINITY)), isnan(cos(-INFINITY)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_cos_test18) {
  ck_assert_ldouble_eq_tol(s21_cos(-0.0), cos(-0.0), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test19) {
  ck_assert_ldouble_eq_tol(s21_cos(+0.0), cos(+0.0), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test20) {
  ck_assert_ldouble_eq_tol(isnan(s21_cos(NAN)), isnan(cos(NAN)), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test21) {
  ck_assert_ldouble_eq_tol(s21_cos(S21_PI), cos(S21_PI), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test22) {
  ck_assert_ldouble_eq_tol(s21_cos(S21_PI / 2), cos(S21_PI / 2), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test23) {
  ck_assert_ldouble_eq_tol(s21_cos(-S21_PI / 2), cos(-S21_PI / 2), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test24) {
  ck_assert_ldouble_eq_tol(s21_cos(-S21_PI / 4), cos(-S21_PI / 4), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test25) {
  ck_assert_ldouble_eq_tol(s21_cos(-S21_PI / 6), cos(-S21_PI / 6), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test26) {
  ck_assert_ldouble_eq_tol(s21_cos(2 * S21_PI), cos(2 * S21_PI), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test27) {
  ck_assert_ldouble_eq_tol(s21_cos(-2 * S21_PI), cos(-2 * S21_PI), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test28) {
  ck_assert_ldouble_eq_tol(s21_cos(S21_PI / 3), cos(S21_PI / 3), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test29) {
  ck_assert_ldouble_eq_tol(s21_cos(-S21_PI / 3), cos(-S21_PI / 3), ACCURACY);
}
END_TEST

START_TEST(s21_cos_test30) {
  ck_assert_ldouble_eq_tol(s21_cos(S21_PI / 6), cos(S21_PI / 6), ACCURACY);
}
END_TEST

START_TEST(s21_exp_test1) {
  srand(time(NULL));
  long double value;
  long double max = 10.567;
  long double min = -max;
  for (int i = 0; i < TEST_AMOUNT; i++) {
    value = (long double)(rand()) / RAND_MAX * (max - min) + min;
    printf("test_value%d for s21_exp = %Lf\n", i, value);
    ck_assert_ldouble_eq_tol(s21_exp(value), exp(value), ACCURACY);
  }
}
END_TEST

START_TEST(s21_exp_test2) {
  ck_assert_ldouble_eq_tol(s21_exp(+0.0), exp(+0.0), ACCURACY);
}
END_TEST

START_TEST(s21_exp_test3) {
  ck_assert_ldouble_eq_tol(isinf(s21_exp(1234.54)), isinf(exp(1234.54)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_exp_test4) {
  ck_assert_ldouble_eq_tol(isinf(s21_exp(-0.0)), isinf(exp(-0.0)), ACCURACY);
}
END_TEST

START_TEST(s21_exp_test5) {
  ck_assert_ldouble_eq_tol(isinf(s21_exp(-INFINITY)), isinf(exp(-INFINITY)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_exp_test6) {
  ck_assert_ldouble_eq_tol(isinf(s21_exp(INFINITY)), isinf(exp(INFINITY)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_exp_test7) {
  ck_assert_ldouble_eq_tol(isinf(s21_exp(-1.0)), isinf(exp(-1.0)), ACCURACY);
}
END_TEST

START_TEST(s21_exp_test8) {
  ck_assert_ldouble_eq_tol(isinf(s21_exp(2.0)), isinf(exp(2.0)), ACCURACY);
}
END_TEST

START_TEST(s21_exp_test9) {
  ck_assert_ldouble_eq_tol(isinf(s21_exp(3.14)), isinf(exp(3.14)), ACCURACY);
}
END_TEST

START_TEST(s21_exp_test10) {
  ck_assert_ldouble_eq_tol(isinf(s21_exp(123457.6)), isinf(exp(123457.6)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_fabs_test) {
  srand(time(NULL));
  long double value;
  long double max = 100000.56789;
  long double min = -max;
  for (int i = 0; i < TEST_AMOUNT; i++) {
    value = (long double)(rand()) / RAND_MAX * (max - min) + min;
    printf("test_value%d for s21_fabs = %Lf\n", i, value);
    ck_assert_ldouble_eq_tol(s21_fabs(value), fabs((double)value), ACCURACY);
  }
}
END_TEST

START_TEST(s21_floor_test) {
  srand(time(NULL));
  long double value;
  long double max = 100000.56789;
  long double min = -max;
  for (int i = 0; i < TEST_AMOUNT; i++) {
    value = (long double)(rand()) / RAND_MAX * (max - min) + min;
    printf("test_value%d for s21_floor = %Lf\n", i, value);
    ck_assert_ldouble_eq_tol(s21_floor(value), floor((double)value), ACCURACY);
  }
}
END_TEST

START_TEST(s21_fmod_test) {
  srand(time(NULL));
  long double value1, value2;
  long double max = 100000.56789;
  long double min = -max;
  for (int i = 0; i < TEST_AMOUNT; i++) {
    value1 = (long double)(rand()) / RAND_MAX * (max - min) + min;
    value2 = (long double)(rand()) / RAND_MAX * (max - min) + min;
    printf("test_value%d for s21_fmod = %Lf и %Lf\n", i, value1, value2);
    ck_assert_ldouble_eq_tol(s21_fmod(value1, value2),
                             fmod((double)value1, (double)value2), ACCURACY);
  }
}
END_TEST

START_TEST(s21_log_test1) {
  srand(time(NULL));
  long double value;
  long double max = 10.567;
  long double min = -max;
  for (int i = 0; i < TEST_AMOUNT; i++) {
    value = (long double)(rand()) / RAND_MAX * (max - min);
    printf("test_value%d for s21_log = %Lf\n", i, value);
    ck_assert_ldouble_eq_tol(s21_log(value), log(value), ACCURACY);
  }
}
END_TEST

START_TEST(s21_log_test2) {
  ck_assert_ldouble_eq_tol(isinf(s21_log(INFINITY)), isinf(log(INFINITY)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_log_test3) {
  ck_assert_ldouble_eq_tol(isnan(s21_log(-INFINITY)), isnan(log(-INFINITY)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_log_test4) {
  ck_assert_ldouble_eq_tol(isinf(s21_log(+0.0)), isinf(log(+0.0)), ACCURACY);
}
END_TEST

START_TEST(s21_log_test5) {
  ck_assert_ldouble_eq_tol(isinf(s21_log(-0.0)), isinf(log(-0.0)), ACCURACY);
}
END_TEST

START_TEST(s21_log_test6) {
  ck_assert_ldouble_eq_tol(isnan(s21_log(NAN)), isnan(log(NAN)), ACCURACY);
}
END_TEST

START_TEST(s21_pow_test1) {
  srand(time(NULL));
  long double value1, value2;
  long double limit = 10.5;
  for (int i = 0; i < TEST_AMOUNT; i++) {
    value1 = fmod(rand(), limit);
    value2 = rand() % 13;
    printf("test_value%d for s21_pow = %Lf и %Lf\n", i, value1, value2);
    ck_assert_ldouble_eq_tol(s21_pow(value1, value2), pow(value1, value2),
                             ACCURACY);
  }
}
END_TEST

START_TEST(s21_pow_test2) {
  ck_assert_ldouble_eq_tol(s21_pow(1.0, -1.0), pow(1.0, -1.0), ACCURACY);
}
END_TEST

START_TEST(s21_pow_test3) {
  ck_assert_ldouble_eq_tol(isinf(s21_pow(INFINITY, 2.0)),
                           isinf(pow(INFINITY, 2.0)), ACCURACY);
}
END_TEST

START_TEST(s21_pow_test4) {
  ck_assert_ldouble_eq_tol(isinf(s21_pow(2.0, INFINITY)),
                           isinf(pow(2.0, INFINITY)), ACCURACY);
}
END_TEST

START_TEST(s21_pow_test5) {
  ck_assert_ldouble_eq_tol(isnan(s21_pow(2.0, NAN)), isnan(pow(2.0, NAN)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_pow_test6) {
  ck_assert_ldouble_eq_tol(isnan(s21_pow(NAN, 3.0)), isnan(pow(NAN, 3.0)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_sin_test1) {
  ck_assert_ldouble_eq_tol(s21_sin(1.0), sin(1.0), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test2) {
  ck_assert_ldouble_eq_tol(s21_sin(-1.0), sin(-1.0), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test3) {
  ck_assert_ldouble_eq_tol(s21_sin(2.1), sin(2.1), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test4) {
  ck_assert_ldouble_eq_tol(s21_sin(2.0), sin(2.0), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test5) {
  ck_assert_ldouble_eq_tol(s21_sin(0.25), sin(0.25), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test6) {
  ck_assert_ldouble_eq_tol(s21_sin(0.5), sin(0.5), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test7) {
  ck_assert_ldouble_eq_tol(s21_sin(0.75), sin(0.75), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test8) {
  ck_assert_ldouble_eq_tol(s21_sin(-1.25), sin(-1.25), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test9) {
  ck_assert_ldouble_eq_tol(s21_sin(4.0), sin(4.0), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test10) {
  ck_assert_ldouble_eq_tol(s21_sin(0.123), sin(0.123), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test11) {
  ck_assert_ldouble_eq_tol(s21_sin(-0.456), sin(-0.456), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test12) {
  ck_assert_ldouble_eq_tol(s21_sin(0.89), sin(0.89), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test13) {
  ck_assert_ldouble_eq_tol(s21_sin(-0.267), sin(-0.267), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test14) {
  ck_assert_ldouble_eq_tol(s21_sin(0.6667), sin(0.6667), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test15) {
  ck_assert_ldouble_eq_tol(s21_sin(0.999999), sin(0.999999), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test16) {
  ck_assert_ldouble_eq_tol(isnan(s21_sin(INFINITY)), isnan(sin(INFINITY)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_sin_test17) {
  ck_assert_ldouble_eq_tol(isnan(s21_sin(-INFINITY)), isnan(sin(-INFINITY)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_sin_test18) {
  ck_assert_ldouble_eq_tol(s21_sin(-0.0), sin(-0.0), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test19) {
  ck_assert_ldouble_eq_tol(s21_sin(+0.0), sin(+0.0), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test20) {
  ck_assert_ldouble_eq_tol(isnan(s21_sin(NAN)), isnan(sin(NAN)), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test21) {
  ck_assert_ldouble_eq_tol(s21_sin(S21_PI), sin(S21_PI), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test22) {
  ck_assert_ldouble_eq_tol(s21_sin(S21_PI / 2), sin(S21_PI / 2), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test23) {
  ck_assert_ldouble_eq_tol(s21_sin(-S21_PI / 2), sin(-S21_PI / 2), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test24) {
  ck_assert_ldouble_eq_tol(s21_sin(-S21_PI / 4), sin(-S21_PI / 4), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test25) {
  ck_assert_ldouble_eq_tol(s21_sin(-S21_PI / 6), sin(-S21_PI / 6), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test26) {
  ck_assert_ldouble_eq_tol(s21_sin(2 * S21_PI), sin(2 * S21_PI), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test27) {
  ck_assert_ldouble_eq_tol(s21_sin(-2 * S21_PI), sin(-2 * S21_PI), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test28) {
  ck_assert_ldouble_eq_tol(s21_sin(S21_PI / 3), sin(S21_PI / 3), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test29) {
  ck_assert_ldouble_eq_tol(s21_sin(-S21_PI / 3), sin(-S21_PI / 3), ACCURACY);
}
END_TEST

START_TEST(s21_sin_test30) {
  ck_assert_ldouble_eq_tol(s21_sin(S21_PI / 6), sin(S21_PI / 6), ACCURACY);
}
END_TEST

START_TEST(s21_sqrt_test1) {
  srand(time(NULL));
  long double value;
  long double max = 100000.56789;
  for (int i = 0; i < TEST_AMOUNT; i++) {
    value = (long double)(rand()) / max;
    printf("test_value%d for s21_sqrt = %Lf\n", i, value);
    ck_assert_ldouble_eq_tol(s21_sqrt(value), sqrt(value), ACCURACY);
  }
}
END_TEST

START_TEST(s21_sqrt_test2) {
  ck_assert_ldouble_eq_tol(isinf(s21_sqrt(INFINITY)), isinf(sqrt(INFINITY)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_sqrt_test3) {
  ck_assert_ldouble_eq_tol(isnan(s21_sqrt(-INFINITY)), isnan(sqrt(-INFINITY)),
                           ACCURACY);
}
END_TEST

START_TEST(s21_sqrt_test4) {
  ck_assert_ldouble_eq_tol(s21_sqrt(+0.0), sqrt(+0.0), ACCURACY);
}
END_TEST

START_TEST(s21_sqrt_test5) {
  ck_assert_ldouble_eq_tol(s21_sqrt(-0.0), sqrt(-0.0), ACCURACY);
}
END_TEST

START_TEST(s21_sqrt_test6) {
  ck_assert_ldouble_eq_tol(isnan(s21_sqrt(NAN)), isnan(sqrt(NAN)), ACCURACY);
}
END_TEST

START_TEST(test1_tan) { ck_assert_ldouble_eq_tol(s21_tan(-1), tan(-1), 1e-6); }
END_TEST

START_TEST(test2_tan) { ck_assert_ldouble_eq_tol(s21_tan(1), tan(1), 1e-6); }
END_TEST

START_TEST(test3_tan) {
  ck_assert_ldouble_eq_tol(s21_tan(1.1), tan(1.1), 1e-6);
}
END_TEST

START_TEST(test4_tan) { ck_assert_ldouble_eq_tol(s21_tan(2), tan(2), 1e-6); }
END_TEST

START_TEST(test5_tan) { ck_assert_ldouble_eq_tol(s21_tan(-2), tan(-2), 1e-6); }
END_TEST

START_TEST(test6_tan) {
  ck_assert_ldouble_eq_tol(s21_tan(-0.9), tan(-0.9), 1e-6);
}
END_TEST

START_TEST(test7_tan) {
  ck_assert_ldouble_eq_tol(isnan(s21_tan(NAN)), isnan(tan(NAN)), 1e-6);
}
END_TEST

START_TEST(test8_tan) {
  ck_assert_ldouble_eq_tol(s21_tan(-0.6666), tan(-0.6666), 1e-6);
}
END_TEST

START_TEST(test9_tan) {
  ck_assert_ldouble_eq_tol(s21_tan(3 * S21_PI / 3), tan(3 * S21_PI / 3), 1e-6);
}
END_TEST

START_TEST(test10_tan) {
  ck_assert_ldouble_eq_tol(s21_tan(-174.532925199433), tan(-174.532925199433),
                           1e-6);
}
END_TEST

START_TEST(test11_tan) {
  ck_assert_ldouble_eq_tol(s21_tan(3 * S21_PI / 3), tan(3 * S21_PI / 3), 1e-6);
}
END_TEST

START_TEST(test12_tan) {
  ck_assert_ldouble_eq_tol(s21_tan(S21_PI / 2), tan(S21_PI / 2), 1e-6);
  ck_assert_ldouble_eq_tol(s21_tan(-S21_PI / 2), tan(-S21_PI / 2), 1e-6);
}
END_TEST

START_TEST(test13_tan) {
  ck_assert_ldouble_eq_tol(s21_tan(-2 * S21_PI), tan(-2 * S21_PI), 1e-6);
}
END_TEST

START_TEST(test14_tan) {
  ck_assert_ldouble_eq_tol(s21_tan(-9999.9), tan(-9999.9), ACCURACY);
}
END_TEST

START_TEST(test15_tan) {
  ck_assert_ldouble_eq_tol(isnan(s21_tan(INFINITY)), isnan(tan(INFINITY)),
                           1e-6);
}
END_TEST

START_TEST(test16_tan) { ck_assert_ldouble_eq_tol(s21_tan(0), tan(0), 1e-6); }
END_TEST

START_TEST(test17_tan) {
  ck_assert_ldouble_eq_tol(s21_tan(0.32), tan(0.32), 1e-6);
}
END_TEST

START_TEST(test18_tan) {
  ck_assert_ldouble_eq_tol(s21_tan(0.4), tan(0.4), 1e-6);
}
END_TEST

START_TEST(test19_tan) {
  ck_assert_ldouble_eq_tol(s21_tan(0.5), tan(0.5), 1e-6);
}
END_TEST

START_TEST(test20_tan) {
  ck_assert_ldouble_eq_tol(s21_tan(125.655555), tan(125.655555), 1e-6);
}
END_TEST

int main(void) {
  Suite *suite = suite_create("Core");
  SRunner *sr = srunner_create(suite);
  int nf;

  TCase *s21_abs_p = tcase_create("s21_abs");
  suite_add_tcase(suite, s21_abs_p);
  tcase_add_test(s21_abs_p, s21_abs_test1);
  tcase_add_test(s21_abs_p, s21_abs_test2);
  tcase_add_test(s21_abs_p, s21_abs_test3);
  tcase_add_test(s21_abs_p, s21_abs_test4);
  tcase_add_test(s21_abs_p, s21_abs_test5);

  TCase *s21_acos_p = tcase_create("s21_acos");
  suite_add_tcase(suite, s21_acos_p);
  tcase_add_test(s21_acos_p, s21_acos_test1);
  tcase_add_test(s21_acos_p, s21_acos_test2);
  tcase_add_test(s21_acos_p, s21_acos_test3);
  tcase_add_test(s21_acos_p, s21_acos_test4);
  tcase_add_test(s21_acos_p, s21_acos_test5);
  tcase_add_test(s21_acos_p, s21_acos_test6);
  tcase_add_test(s21_acos_p, s21_acos_test7);
  tcase_add_test(s21_acos_p, s21_acos_test8);
  tcase_add_test(s21_acos_p, s21_acos_test9);
  tcase_add_test(s21_acos_p, s21_acos_test10);
  tcase_add_test(s21_acos_p, s21_acos_test11);
  tcase_add_test(s21_acos_p, s21_acos_test12);
  tcase_add_test(s21_acos_p, s21_acos_test13);
  tcase_add_test(s21_acos_p, s21_acos_test14);
  tcase_add_test(s21_acos_p, s21_acos_test15);
  tcase_add_test(s21_acos_p, s21_acos_test16);
  tcase_add_test(s21_acos_p, s21_acos_test17);
  tcase_add_test(s21_acos_p, s21_acos_test18);
  tcase_add_test(s21_acos_p, s21_acos_test19);
  tcase_add_test(s21_acos_p, s21_acos_test20);
  tcase_add_test(s21_acos_p, s21_acos_test21);
  tcase_add_test(s21_acos_p, s21_acos_test22);
  tcase_add_test(s21_acos_p, s21_acos_test23);
  tcase_add_test(s21_acos_p, s21_acos_test24);
  tcase_add_test(s21_acos_p, s21_acos_test25);
  tcase_add_test(s21_acos_p, s21_acos_test26);
  tcase_add_test(s21_acos_p, s21_acos_test27);
  tcase_add_test(s21_acos_p, s21_acos_test28);
  tcase_add_test(s21_acos_p, s21_acos_test29);
  tcase_add_test(s21_acos_p, s21_acos_test30);

  TCase *s21_asin_p = tcase_create("s21_asin");
  suite_add_tcase(suite, s21_asin_p);
  tcase_add_test(s21_asin_p, s21_asin_test1);
  tcase_add_test(s21_asin_p, s21_asin_test2);
  tcase_add_test(s21_asin_p, s21_asin_test3);
  tcase_add_test(s21_asin_p, s21_asin_test4);
  tcase_add_test(s21_asin_p, s21_asin_test5);
  tcase_add_test(s21_asin_p, s21_asin_test6);
  tcase_add_test(s21_asin_p, s21_asin_test7);
  tcase_add_test(s21_asin_p, s21_asin_test8);
  tcase_add_test(s21_asin_p, s21_asin_test9);
  tcase_add_test(s21_asin_p, s21_asin_test10);
  tcase_add_test(s21_asin_p, s21_asin_test11);
  tcase_add_test(s21_asin_p, s21_asin_test12);
  tcase_add_test(s21_asin_p, s21_asin_test13);
  tcase_add_test(s21_asin_p, s21_asin_test14);
  tcase_add_test(s21_asin_p, s21_asin_test15);
  tcase_add_test(s21_asin_p, s21_asin_test16);
  tcase_add_test(s21_asin_p, s21_asin_test17);
  tcase_add_test(s21_asin_p, s21_asin_test18);
  tcase_add_test(s21_asin_p, s21_asin_test19);
  tcase_add_test(s21_asin_p, s21_asin_test20);
  tcase_add_test(s21_asin_p, s21_asin_test21);
  tcase_add_test(s21_asin_p, s21_asin_test22);
  tcase_add_test(s21_asin_p, s21_asin_test23);
  tcase_add_test(s21_asin_p, s21_asin_test24);
  tcase_add_test(s21_asin_p, s21_asin_test25);
  tcase_add_test(s21_asin_p, s21_asin_test26);
  tcase_add_test(s21_asin_p, s21_asin_test27);
  tcase_add_test(s21_asin_p, s21_asin_test28);
  tcase_add_test(s21_asin_p, s21_asin_test29);
  tcase_add_test(s21_asin_p, s21_asin_test30);

  TCase *s21_atan_p = tcase_create("s21_atan");
  suite_add_tcase(suite, s21_atan_p);
  tcase_add_test(s21_atan_p, s21_atan_test1);
  tcase_add_test(s21_atan_p, s21_atan_test2);
  tcase_add_test(s21_atan_p, s21_atan_test3);
  tcase_add_test(s21_atan_p, s21_atan_test4);
  tcase_add_test(s21_atan_p, s21_atan_test5);
  tcase_add_test(s21_atan_p, s21_atan_test6);
  tcase_add_test(s21_atan_p, s21_atan_test7);
  tcase_add_test(s21_atan_p, s21_atan_test8);
  tcase_add_test(s21_atan_p, s21_atan_test9);
  tcase_add_test(s21_atan_p, s21_atan_test10);
  tcase_add_test(s21_atan_p, s21_atan_test11);
  tcase_add_test(s21_atan_p, s21_atan_test12);
  tcase_add_test(s21_atan_p, s21_atan_test13);
  tcase_add_test(s21_atan_p, s21_atan_test14);
  tcase_add_test(s21_atan_p, s21_atan_test15);
  tcase_add_test(s21_atan_p, s21_atan_test16);
  tcase_add_test(s21_atan_p, s21_atan_test17);
  tcase_add_test(s21_atan_p, s21_atan_test18);
  tcase_add_test(s21_atan_p, s21_atan_test19);
  tcase_add_test(s21_atan_p, s21_atan_test20);
  tcase_add_test(s21_atan_p, s21_atan_test21);
  tcase_add_test(s21_atan_p, s21_atan_test22);
  tcase_add_test(s21_atan_p, s21_atan_test23);
  tcase_add_test(s21_atan_p, s21_atan_test24);
  tcase_add_test(s21_atan_p, s21_atan_test25);
  tcase_add_test(s21_atan_p, s21_atan_test26);
  tcase_add_test(s21_atan_p, s21_atan_test27);
  tcase_add_test(s21_atan_p, s21_atan_test28);
  tcase_add_test(s21_atan_p, s21_atan_test29);
  tcase_add_test(s21_atan_p, s21_atan_test30);

  TCase *s21_ceil_p = tcase_create("s21_ceil");
  suite_add_tcase(suite, s21_ceil_p);
  tcase_add_test(s21_ceil_p, s21_ceil_test);

  TCase *s21_cos_p = tcase_create("s21_cos");
  suite_add_tcase(suite, s21_cos_p);
  tcase_add_test(s21_cos_p, s21_cos_test1);
  tcase_add_test(s21_cos_p, s21_cos_test2);
  tcase_add_test(s21_cos_p, s21_cos_test3);
  tcase_add_test(s21_cos_p, s21_cos_test4);
  tcase_add_test(s21_cos_p, s21_cos_test5);
  tcase_add_test(s21_cos_p, s21_cos_test6);
  tcase_add_test(s21_cos_p, s21_cos_test7);
  tcase_add_test(s21_cos_p, s21_cos_test8);
  tcase_add_test(s21_cos_p, s21_cos_test9);
  tcase_add_test(s21_cos_p, s21_cos_test10);
  tcase_add_test(s21_cos_p, s21_cos_test11);
  tcase_add_test(s21_cos_p, s21_cos_test12);
  tcase_add_test(s21_cos_p, s21_cos_test13);
  tcase_add_test(s21_cos_p, s21_cos_test14);
  tcase_add_test(s21_cos_p, s21_cos_test15);
  tcase_add_test(s21_cos_p, s21_cos_test16);
  tcase_add_test(s21_cos_p, s21_cos_test17);
  tcase_add_test(s21_cos_p, s21_cos_test18);
  tcase_add_test(s21_cos_p, s21_cos_test19);
  tcase_add_test(s21_cos_p, s21_cos_test20);
  tcase_add_test(s21_cos_p, s21_cos_test21);
  tcase_add_test(s21_cos_p, s21_cos_test22);
  tcase_add_test(s21_cos_p, s21_cos_test23);
  tcase_add_test(s21_cos_p, s21_cos_test24);
  tcase_add_test(s21_cos_p, s21_cos_test25);
  tcase_add_test(s21_cos_p, s21_cos_test26);
  tcase_add_test(s21_cos_p, s21_cos_test27);
  tcase_add_test(s21_cos_p, s21_cos_test28);
  tcase_add_test(s21_cos_p, s21_cos_test29);
  tcase_add_test(s21_cos_p, s21_cos_test30);

  TCase *s21_exp_p = tcase_create("s21_exp");
  suite_add_tcase(suite, s21_exp_p);
  tcase_add_test(s21_exp_p, s21_exp_test1);
  tcase_add_test(s21_exp_p, s21_exp_test2);
  tcase_add_test(s21_exp_p, s21_exp_test3);
  tcase_add_test(s21_exp_p, s21_exp_test4);
  tcase_add_test(s21_exp_p, s21_exp_test5);
  tcase_add_test(s21_exp_p, s21_exp_test6);
  tcase_add_test(s21_exp_p, s21_exp_test7);
  tcase_add_test(s21_exp_p, s21_exp_test8);
  tcase_add_test(s21_exp_p, s21_exp_test9);
  tcase_add_test(s21_exp_p, s21_exp_test10);

  TCase *s21_fabs_p = tcase_create("s21_fabs");
  suite_add_tcase(suite, s21_fabs_p);
  tcase_add_test(s21_fabs_p, s21_fabs_test);

  TCase *s21_floor_p = tcase_create("s21_floor");
  suite_add_tcase(suite, s21_floor_p);
  tcase_add_test(s21_floor_p, s21_floor_test);

  TCase *s21_fmod_p = tcase_create("s21_fmod");
  suite_add_tcase(suite, s21_fmod_p);
  tcase_add_test(s21_fmod_p, s21_fmod_test);

  TCase *s21_log_p = tcase_create("s21_log");
  suite_add_tcase(suite, s21_log_p);
  tcase_add_test(s21_log_p, s21_log_test1);
  tcase_add_test(s21_log_p, s21_log_test2);
  tcase_add_test(s21_log_p, s21_log_test3);
  tcase_add_test(s21_log_p, s21_log_test4);
  tcase_add_test(s21_log_p, s21_log_test5);
  tcase_add_test(s21_log_p, s21_log_test6);

  TCase *s21_pow_p = tcase_create("s21_pow");
  suite_add_tcase(suite, s21_pow_p);
  tcase_add_test(s21_pow_p, s21_pow_test1);
  tcase_add_test(s21_pow_p, s21_pow_test2);
  tcase_add_test(s21_pow_p, s21_pow_test3);
  tcase_add_test(s21_pow_p, s21_pow_test4);
  tcase_add_test(s21_pow_p, s21_pow_test5);
  tcase_add_test(s21_pow_p, s21_pow_test6);

  TCase *s21_sin_p = tcase_create("s21_sin");
  suite_add_tcase(suite, s21_sin_p);
  tcase_add_test(s21_sin_p, s21_sin_test1);
  tcase_add_test(s21_sin_p, s21_sin_test2);
  tcase_add_test(s21_sin_p, s21_sin_test3);
  tcase_add_test(s21_sin_p, s21_sin_test4);
  tcase_add_test(s21_sin_p, s21_sin_test5);
  tcase_add_test(s21_sin_p, s21_sin_test6);
  tcase_add_test(s21_sin_p, s21_sin_test7);
  tcase_add_test(s21_sin_p, s21_sin_test8);
  tcase_add_test(s21_sin_p, s21_sin_test9);
  tcase_add_test(s21_sin_p, s21_sin_test10);
  tcase_add_test(s21_sin_p, s21_sin_test11);
  tcase_add_test(s21_sin_p, s21_sin_test12);
  tcase_add_test(s21_sin_p, s21_sin_test13);
  tcase_add_test(s21_sin_p, s21_sin_test14);
  tcase_add_test(s21_sin_p, s21_sin_test15);
  tcase_add_test(s21_sin_p, s21_sin_test16);
  tcase_add_test(s21_sin_p, s21_sin_test17);
  tcase_add_test(s21_sin_p, s21_sin_test18);
  tcase_add_test(s21_sin_p, s21_sin_test19);
  tcase_add_test(s21_sin_p, s21_sin_test20);
  tcase_add_test(s21_sin_p, s21_sin_test21);
  tcase_add_test(s21_sin_p, s21_sin_test22);
  tcase_add_test(s21_sin_p, s21_sin_test23);
  tcase_add_test(s21_sin_p, s21_sin_test24);
  tcase_add_test(s21_sin_p, s21_sin_test25);
  tcase_add_test(s21_sin_p, s21_sin_test26);
  tcase_add_test(s21_sin_p, s21_sin_test27);
  tcase_add_test(s21_sin_p, s21_sin_test28);
  tcase_add_test(s21_sin_p, s21_sin_test29);
  tcase_add_test(s21_sin_p, s21_sin_test30);

  TCase *s21_sqrt_p = tcase_create("s21_sqrt");
  suite_add_tcase(suite, s21_sqrt_p);
  tcase_add_test(s21_sqrt_p, s21_sqrt_test1);
  tcase_add_test(s21_sqrt_p, s21_sqrt_test2);
  tcase_add_test(s21_sqrt_p, s21_sqrt_test3);
  tcase_add_test(s21_sqrt_p, s21_sqrt_test4);
  tcase_add_test(s21_sqrt_p, s21_sqrt_test5);
  tcase_add_test(s21_sqrt_p, s21_sqrt_test6);

  TCase *s21_tan_p = tcase_create("s21_tan");
  suite_add_tcase(suite, s21_tan_p);
  tcase_add_test(s21_tan_p, test1_tan);
  tcase_add_test(s21_tan_p, test2_tan);
  tcase_add_test(s21_tan_p, test3_tan);
  tcase_add_test(s21_tan_p, test4_tan);
  tcase_add_test(s21_tan_p, test5_tan);
  tcase_add_test(s21_tan_p, test6_tan);
  tcase_add_test(s21_tan_p, test7_tan);
  tcase_add_test(s21_tan_p, test8_tan);
  tcase_add_test(s21_tan_p, test9_tan);
  tcase_add_test(s21_tan_p, test10_tan);
  tcase_add_test(s21_tan_p, test11_tan);
  tcase_add_test(s21_tan_p, test12_tan);
  tcase_add_test(s21_tan_p, test13_tan);
  tcase_add_test(s21_tan_p, test14_tan);
  tcase_add_test(s21_tan_p, test15_tan);
  tcase_add_test(s21_tan_p, test16_tan);
  tcase_add_test(s21_tan_p, test17_tan);
  tcase_add_test(s21_tan_p, test18_tan);
  tcase_add_test(s21_tan_p, test19_tan);
  tcase_add_test(s21_tan_p, test20_tan);

  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);
  return nf == 0 ? 0 : 1;
}