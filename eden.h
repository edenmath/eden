#ifndef __EDEN_H__
#define __EDEN_H__

// Note that:
// - "width" always refers to the horizontal length of a polygon or face
// - "height" always refers to the vertical length of a polygon or face
// - "depth" always refers to the depth of a tridimensional object

#define EDEN_PI  3.141592653589793238462643
#define EDEN_TAU 6.283185307179586476925286
#define EDEN_PHI 1.618033988749894848204586
#define EDEN_E   2.718281828459045235360287
#define EDEN_EULER 0.5772156649015328606065
#define EDEN_CONWAY 1.303577269034296391257
#define EDEN_PLASTIC 1.32471795724474602596
#define EDEN_PRIME 0.4146825098511116602481
#define EDEN_RECEP_FIB 3.359885666243177553

// Bi/Tridimensional object functions

// Perimeter of polygon or bidimensional shape(in unit)
double eden_perim_circle(double radius);
double eden_perim_rect(double width, double height);

// Area of polygon or bidimensional shape(in unit^2)
double eden_area_circle(double radius);
double eden_area_rect(double width, double height);
double eden_area_tri(double width, double height);

// Surface area of tridimensional object(in unit^2)
double eden_surf_sphere(double radius);
double eden_surf_rectprsm(double width, double height, double depth);
double eden_surf_triprsm(double width, double height, double depth);
double eden_surf_cillin(double radius, double depth);

// Volume of tridimensional object(in unit^3)
double eden_vol_sphere(double radius);
double eden_vol_rectprsm(double width, double height, double depth);
double eden_vol_triprsm(double width, double height, double depth);
double eden_vol_cillin(double radius, double depth);

// Mathematical functions

double eden_abs(double x);

double eden_sin(double theta);
double eden_cos(double theta);
double eden_tan(double theta);

double eden_arcsin(double x);
double eden_arccos(double x);
double eden_arctan(double x);

double eden_arctan_2(double y, double x);

double eden_sqrt(double x);
double eden_cbrt(double x);

double eden_pow(double x, double exp);

double eden_round(double x);
double eden_ceil(double x);
double eden_floor(double x);
int eden_trunc(double x);

double eden_logn(double x);
double eden_log10(double x);

#endif
