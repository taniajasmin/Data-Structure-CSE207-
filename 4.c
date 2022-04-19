#include<stdio.h>

int count = 1;

int tOfHanoi(int n, char A, char B, char C)
{
    if (n == 1)
    {
        printf("%d. %d is moving from %c to %c\n", count, n, A, C);
        count++;
    }
    else {
        tOfHanoi(n - 1, A, C, B);
        printf("%d. %d is moving from %c to %c\n", count, n, A, C);
        tOfHanoi(n - 1, B, A, C);
      }
      return count;
  }
int main(int n)
{
    printf("How many discs: ");
    scanf("%d", &n);
    int count;
    tOfHanoi(n, 'A', 'B', 'C');
}


