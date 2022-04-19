#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("\nFactorial: %ld", factorial(n));
}

int factorial(int N)
{
    long fact = 1;
    if(N == 1){
        printf("1");
        return 1;
    }
    else
    {
        fact = N * factorial(N - 1);
        printf(" x %d", N);
        return fact;
    }

}
