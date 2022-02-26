#include <stdio.h>
int main()
{
    int a[100], n, i;

    printf("Enter the size of array: \n");
    scanf("%d", &n);

    printf("Enter %d integers: \n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    int max, max2, min, min2;
    max = max2 = a[0];
    
    for(int i=0; i<n; i++)
    {
        if (a[i]>max)
        {
            max2 = max;
            max = a[i];
        }
        else if(a[i] > max2)
            max2 = a[i];
    }
    for(int i=0; i<n; i++)
    {
        if (a[i] < min)
        {
            min2 = min;
            min = a[i];
        }
        else if(a[i] < min2)
            min2 = a[i];
    }
    printf("\nThe 2nd maximum number is: %d", max2);
    printf("\nThe 2nd minimum number is: %d", min2);
}