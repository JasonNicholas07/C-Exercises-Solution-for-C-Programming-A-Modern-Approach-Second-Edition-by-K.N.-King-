//tax added

#include <stdio.h>

int main (){
	double amount;
	
	printf("Enter an amount: ");
	scanf("%lf", &amount);
	
	double tax = amount * (1.0 / 20.0);
	tax += amount;
	
	printf("Amount after 5%% tax: %.3lf", tax);
	
	return 0;
}
