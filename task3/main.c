#include <stdio.h>

int positive(int);
int main(){
	
	int num = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("The status of num is %d\n", positive(num));
	return 0;
}
