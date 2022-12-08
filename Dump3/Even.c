#include <stdio.h>
int main(){
	int variable;
	printf("Enter a Number:");
	scanf("%d", &variable);
	if(variable%2 == 0)
	printf("Even!");
	else
	printf("NotEven!");
}
