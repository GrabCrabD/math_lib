#ifndef S21_MATH_H_
#define S21_MATH_H_

#define s21_PI 3.141592653589793238
#define s21_TWO_PI 6.283185307
#define s21_E 2.71828182845905
#define s21_EPS 1e-12
#define s21_LDBL_MAX 1E+37
#define s21_INF 1.0 / 0.0
#define s21_NAN 0.0 / 0.0

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_log(double x);
long double s21_tan(double x);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_fmod(double x, double y);
long double s21_pow(double base, double exp);

#endif
