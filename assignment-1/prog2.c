#include <stdio.h>

int main(){
	int a,b,c, max, min;
	
	printf("Enter three integers : ");
	scanf("%d %d %d",&a, &b, &c);
	
	max = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
	min = (a<b) ? ((a<c) ? a : c) : ((b<c) ? b : c);
	
	printf("Maximum : %d\n", max);
	printf("Minimum : %d\n", min);
	
	return 1;
	
	}
