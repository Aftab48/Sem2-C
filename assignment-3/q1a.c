#include <stdio.h>
int main(){
    int a = 0, b = 1, n, i, sum = 0;

    printf("Enter the limit :\n");
    scanf("%d", &n);

    if(n <= 0){
        printf("Invalid input\n");
        return 0;
    }

    for(i = 1; i <= n; i++){
    if (i == n)
        printf("%d\n", a);
    else
        printf("%d, ", a);
    sum = a + b;
    a = b;
    b = sum;
}
    return 0;
}