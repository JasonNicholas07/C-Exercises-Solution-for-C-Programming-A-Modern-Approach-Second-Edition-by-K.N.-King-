#include <stdio.h>

int main () {
	float r = 10.0;
	const float PHI = 3.14;
	
	float volume = (4.0/3.0) * PHI * (r*r*r); 
	
	printf("Volume of 10 meter radius sphere is: %.3f m^3\n", volume);
	
	
	
	return 0;
}
