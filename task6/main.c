#include <stdio.h>

float CelsiusToF(float);
int main(){

	float Celsius = 0;
	printf("Enter the temperature in Celsius: ");
	scanf("%f", &Celsius);
	printf("The temperature in Fahrenheit is %.1f\n", CelsiusToF(Celsius));
	return 0;
}
