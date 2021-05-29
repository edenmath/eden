#include <stdint.h>
#include "eden.h"

double eden_perim_circle(double radius) {
  return 2 * EDEN_PI * radius;
}

double eden_perim_rect(double width, double height) {
  return 2 * (width + height);
}

double eden_area_circle(double radius) {
  return EDEN_PI * radius * radius;
}

double eden_area_rect(double width, double height) {
  return width * height;
}

double eden_area_tri(double width, double height) {
  return (width * height) / 2;
}

double eden_surf_sphere(double radius) {
  return 4 * EDEN_PI * radius * radius;
}

double eden_surf_rectprsm(double width, double height, double depth) {
  return 2 * (width * height + height * depth + depth * width);
}

double eden_surf_triprsm(double width, double height, double depth) {
  return width * height + height * depth + depth * width;
}

double eden_surf_cillin(double radius, double depth) {
  return 2 * EDEN_PI * radius * (radius + depth);
}

double eden_vol_sphere(double radius) {
  return (4.0 / 3.0) * EDEN_PI * radius * radius * radius;
}

double eden_vol_rectprsm(double width, double height, double depth) {
  return width * height * depth;
}

double eden_vol_triprsm(double width, double height, double depth) {
  return (width * height * depth) / 2;
}

double eden_vol_cillin(double radius, double depth) {
  return EDEN_PI * radius * radius * depth;
}

double eden_abs(double x) {
  return x < 0 ? -x : x;
}

double eden_sin(double theta) {
  return eden_cos(theta + 1.5 * EDEN_PI);
}

double eden_cos(double theta) {
  double tp = 1 / EDEN_TAU, x = theta;

  x = eden_abs(x * tp);
  x -= 0.25 + (int)(x + 0.25);
  x *= 16.0 * (eden_abs(x) - 0.5);

  // Optional
  x += 0.225 * x * (eden_abs(x) - 1.0);

  return x;
}

double eden_tan(double theta) {
  return eden_sin(theta) / eden_cos(theta);
}

double eden_arcsin(double x) {
  return 0; // TODO: Make FAST
}

double eden_arccos(double x) {
  return 0; // TODO: Make FAST
}

double eden_arctan(double x) {
  return (0.5 * EDEN_PI * x) / (1.0 + eden_abs(x));
}

double eden_arctan_2(double y, double x) {
  if (x > 0.0) {
    return eden_arctan(y / x);
  } else if (x < 0.0) {
    if (y >= 0.0) return eden_arctan(y / x) + EDEN_PI;
    else return eden_arctan(y / x) - EDEN_PI;
  } else {
    if (y > 0.0) return 0.5 * EDEN_PI;
    else if (y < 0.0) return -0.5 * EDEN_PI;
    else return 0.0;
  }
}

double eden_sqrt(double x) {
  uint64_t int_val = *((uint64_t *)(&x));

  int_val = (int_val & (((uint64_t)(1) << 52) - 1)) | ((((((int_val >> 52) - 1024) + 1) >> 1) + 1023) << 52);

  double result = *((double *)(&int_val));

  result = 0.5 * (result + x / result);
  result = 0.5 * (result + x / result);
  result = 0.5 * (result + x / result);

  return result;
}

double eden_cbrt(double _x) {
  if (_x == 0.0) return 0.0;

  double x = eden_abs(_x);

  uint64_t int_val = *((uint64_t *)(&x));

  int_val = (int_val & (((uint64_t)(1) << 52) - 1)) | ((((((int_val >> 52) - 1024) + 1) / 3) + 1023) << 52);

  double result = *((double *)(&int_val));

  result = (2.0 * result + x / (result * result)) / 3.0;
  result = (2.0 * result + x / (result * result)) / 3.0;
  result = (2.0 * result + x / (result * result)) / 3.0;

  result *= _x / x;

  return result;
}

double eden_pow(double x, double exp) {
  return 0; // TODO: Take the idea of the sqrt and pass it to here
}
