#include <stdio.h>

int main() {
	int num, square;
	
	printf("Enter the number : ");
	scanf("%d", &num);
	
	square = num * num;
	
	printf("The Square of %d is %d\n", num, square);
	
	return 1;
}
