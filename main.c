#include <stdio.h>

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

int square_area(double s) {
	return s*s;
}

int triangle_area(double b, double h) { //base and height
	return b*h / 2;
}

int main(void) {
	printf("Hello World\n");
	return 0;
}
