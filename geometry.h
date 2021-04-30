#include "consts.h"

double get_square_area(double s) {
	return s*s;
}

double get_triangle_area(double b, double h/*base and height*/) {
	return b*h / 2;
}

double get_circle_area(double r/*radius*/) {
	return pi * square(r); //A = π(2r)
}

double get_radius(double d/*diameter*/) {
	return d/2; //Alternatively C/2π but that needs circumfrence
}

double get_diameter(double r/*radius*/)  {
	return r*2;
}

double get_circumfrence_fromr(double r/*radius*/) {
	return (2*pi) * r; //C = π(2r)
}

double get_circumfrence_fromd(double d/*diameter*/) {
	return pi * d; //C = 2πr
}
