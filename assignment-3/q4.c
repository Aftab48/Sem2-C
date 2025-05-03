#include <stdio.h>

int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n, r, p = 0, c = 0;
    printf("Enter a the value of n and r: ");
    scanf("%d %d", &n, &r);
    p = factorial(n) / factorial(n - r);
    c = factorial(n) / (factorial(r) * factorial(n - r));
    
    printf("Permutation: %d\n", p);
    printf("Combination: %d\n", c);
}