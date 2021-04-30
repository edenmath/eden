#include <stdio.h>

const double pi = 3.141592653589793238462643383279502884197;

//const float pi_approx = 3.14; uncomment if you want this var

int add(double a, double b) {
	return a + b;
}

int subtract(double a, double b) {
	return a - b;
}

int multiply(double a, double b) {
	return a * b;
}

int divide(double a, double b) {
	return a / b;
}

int square(double n) {
	return n*n;
}

int square_area(double s) {
	return s*s;
}

int triangle_area(double b, double h/*base and height*/) {
	return b*h / 2;
}

int get_radius(double d/*diameter*/) {
	return d/2; //Alternitively C/2π but that needs circumfrence
}

int get_diameter(double r/*radius*/)  {
	return r*2;
}

int get_circumfrence(double r/*radius*/) {
	return pi * square(r); //C = π(2r)
}

int main(void) {
	printf("Hello World\n");
	return 0;
}
