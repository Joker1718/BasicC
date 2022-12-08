#include <stdio.h>
int main(){
	int purchase;
	int total;
	printf("Enter Purchase:");
	scanf("%d", &purchase);
	total=purchase-(purchase*0.10);

	if (purchase>=1000){
	printf("The Net Bill is %d", total);
	}
	return 0;
}
