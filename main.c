#include <stdio.h>


#include "geometry.c"

int main(void) {
	printf("Hello World\n"); //Debugging/test stuff
	printf("pi is equal to %lf\n", pi);
	printf("8 + 2 is %i\n", 8+2);
	printf("8 - 2 is %i\n", 8-2);
	printf("8 * 2 is %i\n", 8*2);
	printf("8 / 2 is %i\n", 8/2);
	printf("2 squared is %lf\n", square(2));
	return 0;
}
