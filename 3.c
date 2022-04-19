#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter the value of base: ");
    scanf("%d", &x);
    printf("Enter the value of power: ");
    scanf("%d", &y);
    printf("\nExponent: %ld", exponent(x, y));
}

int exponent(int x, int y)
{
    int ans = 0;
    if(y == 0){
        ans = 1;
        return ans;
    }
    else if(y < 0)
    {
        ans = 1 / (pow (x, -y));
        return ans;
    }
    else
    {
        ans = x * pow(x, y - 1);
        return ans;
    }

    printf("\n");
}
