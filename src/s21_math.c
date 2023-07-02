#include "s21_math.h"

int s21_abs(int x) { return (x < 0) ? -x : x; }

long double s21_ceil(double x) {
  long double result = (int)x;
  return (x > result) ? result + 1 : result;
}

long double s21_sqrt(double x) {
  double squareRoot = 0;
  if (x == S21_INF)
    squareRoot = x;
  else if (x > 0) {
    double tmp = 0;
    squareRoot = x / 2;
    do {
      tmp = squareRoot;
      squareRoot = (tmp + (x / tmp)) / 2;
    } while ((tmp - squareRoot) != 0);
  } else if (x < 0 || S21_ISNAN(x))
    squareRoot = S21_NAN;
  return squareRoot;
}

long double s21_cos(double x) {
  int N = 15;
  long double result = 0.0;
  if (S21_ISNAN(x) || x == S21_INF)
    result = S21_NAN;
  else {
    x = s21_fmod(x, 2 * S21_PI);
    for (int i = 0; i < N; i++) {
      result += s21_pow(-1, i) * s21_pow(x, 2 * i) / s21_factorial(2 * i);
    }
  }
  return result;
}

long double s21_factorial(long double n) {
  long double result = 1.0;
  while (n > 1.0) {
    result *= n;
    n -= 1.0;
  }
  return result;
}

long double s21_sin(double x) {
  long double result = 0.0;
  if (S21_ISNAN(x) || x == S21_INF)
    result = S21_NAN;
  else {
    x = s21_fmod(x, 2 * S21_PI);
    for (int i = 0; i < 15; i++) {
      result +=
          s21_pow(-1, i) * s21_pow(x, 2 * i + 1) / s21_factorial(2 * i + 1);
    }
  }
  return result;
}

long double s21_fmod(double x, double y) {
  long double res = 0.0;
  res = x - ((x / y) < 0 ? s21_ceil(x / y) : s21_floor(x / y)) * y;
  return res;
}

long double s21_floor(double x) {
  long double result = (int)x;
  return (x < result) ? result - 1 : result;
}

long double s21_pow(double base, double exp) {
  double resultpow = 1;
  int negative_exp = 0;
  if (exp == S21_INF)
    resultpow = exp;
  else if (S21_ISNAN(exp))
    resultpow = S21_NAN;
  else {
    if (exp < 0) {
      negative_exp = 1;
      exp = s21_fabs(exp);
    }
    for (int i = 0; i < exp; i++) {
      resultpow *= base;
    }
  }
  return (negative_exp) ? 1 / resultpow : resultpow;
}

long double s21_tan(double x) {
  long double q = 0.0;
  if (x == S21_PI / 2) {
    q = 16331239353195370L;
  } else if (x == -S21_PI / 2) {
    q = -16331239353195370L;
  } else if (x == 0) {
    q = 0;
  } else if (x == S21_INF || S21_ISNAN(x)) {
    q = S21_NAN;
  } else {
    q = s21_sin(x) / s21_cos(x);
  }
  return q;
}

long double s21_atan_series(double x) {
  int N = 1000;
  long double sum = 0.0;
  for (int i = 1; i < N; i++) {
    sum += s21_pow(-1, i - 1) * s21_pow(x, 2 * i - 1) / (2 * i - 1);
  }
  return sum;
}

long double s21_atan(double x) {
  long double result = 0.0;
  if (S21_ISNAN(x)) {
    result = S21_NAN;
  } else if (x < 1 && x > -1) {
    result = s21_atan_series(x);
  } else if (x == 1) {
    result = S21_PI / 4;
  } else if (x == -1) {
    result = -S21_PI / 4;
  } else if (x > 1) {
    result = S21_PI / 2 - s21_atan_series(1 / x);
  } else if (x < -1) {
    result = -S21_PI / 2 - s21_atan_series(1 / x);
  }
  return result;
}

long double s21_fabs(double x) {
  long double y = x;
  return (x < 0) ? -y : y;
}

long double s21_exp(double x) {
  long double result = 1.0;
  if (x == -S21_INF)
    result = +0.0;
  else if (x == S21_INF || x > 1000)
    result = S21_INF;
  else {
    long double lim = 1.0;
    long double x_n = x;
    for (int i = 1; s21_fabs(lim) >= 1e-6; i++) {
      lim = x_n / s21_factorial(i);
      result += lim;
      x_n *= x;
    }
  }
  return result;
}

long double s21_asin(double x) {
  double long result = 0.0;
  if (x == 1) {
    result = S21_PI / 2;
  } else if (x == -1) {
    result = -S21_PI / 2;
  } else
    result = !(x < 1 && x > -1) ? S21_NAN : s21_atan(x / s21_sqrt(1 - x * x));
  return result;
}

double long s21_acos(double x) {
  double long result = x;
  result = S21_PI / 2 - s21_asin(x);
  return result;
}

long double s21_log(double x) {
  long double result = 0, eps = 1e-99l;
  if (x == S21_INF)
    result = x;
  else if (x < 0) {
    result = 0 / 0.0;
  } else if (x == 0) {
    result = -1 / 0.0;
  } else if (x > 1) {
    int number = 0;
    while (x > 1) {
      x /= 10;
      number++;
    }
    result = s21_log(x) + number * S21_LN10;
  } else {
    x -= 1;
    long double dif = 1, final_result = x;
    int k = 1;
    while (dif > eps) {
      long double current = 1;
      for (int j = 1; j <= k; ++j) {
        current *= x;
      }
      current /= k;
      long double tmp_result = 1;
      for (int j = 0; j < k + 1; j++) {
        tmp_result = tmp_result * -1;
      }
      result += tmp_result * current;
      if (k > 1) {
        dif = s21_fabs(result - final_result);
      }
      final_result = result;
      k++;
    }
  }
  return result;
}
