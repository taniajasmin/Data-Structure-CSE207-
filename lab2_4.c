#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int stack[MAX];
int top = -1;

int stack_full()
{
    if (top == MAX -1)
        return 1;
    else 
        return 0;    
}

int stack_empty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}

void push(int data)
{
    if (stack_full())
    {
        printf("Stack Overflow.");
        exit(1);
    }
    top++;
    stack[top] = data;
}

int pop()
{
    int val;
    if (stack_empty())
    {
        printf("Stack underflow.");
        exit(1);
    }
    val = stack[top];
    top--;
    return val;
}

void dec_bin(int n)
{
    while (n != 0)
    {
        push(n % 2);
        n = n / 2;
    }     
}
int display()
{
    if(stack_empty())
    {
        printf("\n Stack Underflow.\n");
        exit(1);
    }
    while(!stack_empty())
    {
        printf("%d",pop());
    }
}

int main()
{
    int dec;
    printf("Enter the decimal number: \n");
    scanf("%d", &dec);

    dec_bin(dec);
    printf("The converted binary number is: ");
    printf("");
    display();
}