#include <stdio.h>

const double pi = 3.141592653589793238462643383279502884197;

//const float pi_approx = 3.14; uncomment if you want this var

double add(double a, double b) {
	return a + b;
}

double subtract(double a, double b) {
	return a - b;
}

double multiply(double a, double b) {
	return a * b;
}

double divide(double a, double b) {
	return a / b;
}

double square(double n) {
	return n*n;
}

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



int main(void) {
	printf("Hello World\n");
	printf("pi is equal to %lf\n", pi);
	printf("8 + 2 is %lf\n", add(8, 2));
	printf("8 - 2 is %lf\n", subtract(8, 2));
	printf("8 * 2 is %lf\n", multiply(8, 2));
	printf("8 / 2 is %lf\n", divide(8, 2));
	printf("2 squared is %lf\n", square(2));
	return 0;
}
