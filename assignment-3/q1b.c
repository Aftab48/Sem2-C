#include <stdio.h>
int main(){
    int a = 0, b = 1, n, i, sum = 0;

    printf("Enter the term :\n");
    scanf("%d", &n);

    if(n <= 0){
        printf("Invalid input\n");
        return 0;
    }
    else if(n == 1){
        printf("%d", a);
        return 0;
    }
    else if(n == 2){
        printf("%d", b);
        return 0;
    }

    for(i = 3; i <= n; i++){ 
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("%d", b);
    return 0;
}