#include <stdio.h>
#include "eden.h"

int main(void) {
	printf("Hello, world!\n");

	printf("pi is equal to %lf\n", EDEN_PI);
	printf("e is equal to %lf\n", EDEN_E);
	printf("phi is equal to %lf\n", EDEN_PHI);

	printf("square root of 4 is %lf\n", eden_sqrt(4));
	printf("square root of 2 is %lf\n", eden_sqrt(2));
	printf("square root of -1 is %lf\n", eden_sqrt(-1));
	printf("square root of 0 is %lf\n", eden_sqrt(0));

	printf("cube root of 9 is %lf\n", eden_cbrt(9));
	printf("cube root of 8 is %lf\n", eden_cbrt(8));
	printf("cube root of -7 is %lf\n", eden_cbrt(-7));
	printf("cube root of -6 is %lf\n", eden_cbrt(-6));

	printf("0.56 rounded is %lf\n", eden_round(0.56));
	printf("-90.76 rounded is %lf\n", eden_round(-90.76));
	printf("0.7 ceil is %lf\n", eden_ceil(0.7));
	printf("45.1 ceil is %lf\n", eden_ceil(45.1));
	printf("0.7 floor is %lf\n", eden_floor(0.7));
	printf("45.1 floor is %lf\n", eden_floor(45.1));
	printf("12.87238273 trunc is %d\n", eden_trunc(12.87238273));
	printf("-102.23294 trunc is %d\n", eden_trunc(-102.23294));

	printf("log10(3) is %lf\n", eden_log10(3));
	printf("logn(45) is %lf\n", eden_logn(45));
	return 0;
}
