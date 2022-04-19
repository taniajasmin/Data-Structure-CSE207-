#include<stdio.h>

int main()
{
    int n, F = 0;
    printf("Input the non-negative number: ");
    scanf("%d", &n);
    //F = fibonacci(n);
    printf("\nFibonacci: ");
    for(int i = 0; i <= n; i++ )
    {
        printf("%d  ", fibonacci(F));
        F++;
    }

    return 0;
}

int fibonacci(int n)
{
    int fibo = 1;
    if(n == 1 || n == 0)
        return n;
    else
    {
        return(fibonacci(n-1) + fibonacci(n-2));
        printf("\n");
    }

}

