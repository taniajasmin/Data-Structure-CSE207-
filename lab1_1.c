#include<stdio.h>
int main(){
    int a[100];
    int n, i, pos=-1, item;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter your data :");
    for(i=0; i<n; i++)
    scanf("%d", &a[i]);
    printf("Your array :");
    for(i=0; i<n;i++)
    printf("%d\t", a[i]);

    int temp, j;
    int count_pass = 0, count_swap = 0;

    for(i=0; i<n-1; i++)
    {
        count_pass++;
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

        printf("The number of passes are: %d\t", count_pass);
        printf("The number of swaps are: %d\t", count_swap);
    
}