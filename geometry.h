#include "consts.h"

double square_area(double s) {
	return s*s;
}

double triangle_area(double b, double h/*base and height*/) {
	return b*h / 2;
}

double get_radius(double d/*diameter*/) {
	return d/2; //Alternatively C/2π but that needs circumfrence
}

double get_diameter(double r/*radius*/)  {
	return r*2;
}

double get_circumfrence(double r/*radius*/) {
	return pi * square(r); //C = π(2r)
}
