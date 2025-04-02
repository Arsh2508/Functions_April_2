#include <stdio.h>
int sum(int, int);
int main(){

	int a = 0, b = 0;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	printf("The sum is %d\n", sum(a, b));

}
