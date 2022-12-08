#include <stdio.h>
int main(){
	int num1;
	printf("Enter Digits:");
	scanf("%d", &num1);
	
	if(num1 % 2==0)
	printf("%d is an Even!", num1);
	else
	printf("%d is an Odd!", num1);

	return 0;
}
