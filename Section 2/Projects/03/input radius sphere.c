#include <stdio.h>

int main () {
	double r;
	const float PHI = 3.14;
	
	printf("Input radius: ");
	scanf("%lf", &r);
	
	float volume1 = (float)4/3 * PHI * (r*r*r);    //volume1 = 3140.00
	printf("Volume = %.3f m^3\n", volume1);
	
	return 0;
}
