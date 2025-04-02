#include <stdio.h>

float sum(float, float);
int main(){

	float num1 = 0, num2 = 0;
	printf("Enter two decimal numbers: ");
	scanf("%f %f", &num1, &num2);
	printf("Decimal sum is %.4f\n", sum(num1, num2));
	return 0;
}
