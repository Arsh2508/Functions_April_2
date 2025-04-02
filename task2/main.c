#include <stdio.h>

int square(int);
int main(){

	int a = 0;
	printf("Enter a number to count it's square: ");
	scanf("%d", &a);
	printf("The square of %d is %d\n", a, square(a));
	return 0;
}
