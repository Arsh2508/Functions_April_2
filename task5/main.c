#include <stdio.h>

int max(int, int);
int main(){
	
	int num1 = 0, num2 = 0;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	printf("The maximum is %d\n", max(num1, num2));

	return 0;
}
