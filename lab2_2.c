#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

int stack[N];
int top = -1;

void push(int item)
{
    if (top == N - 1)
        printf("\nOverflow\n");
    else
    {

        top = top + 1;
        stack[top] = item;
    }
}

int pop()
{
    if (top == -1)
        printf("Underflow.\n");
    else
    {

        int popitem;
        popitem = stack[top];
        top--;
        return popitem;
    }
}

int main()
{

    // printf("You have chosen parenthesis parsing operation:\n");
    char exp[N];
    printf("\nInput the expression: \n");
    scanf("%s", &exp);

    for (int i = 0; i < strlen(exp); i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(exp[i]);
            continue;
        }
        else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (exp[i] == ')')
            {
                if (stack[top] == '(')
                {
                    pop();
                }
                else
                {
                    printf("\nThe parentheses in the string are not balanced.\n");
                }
                break;
            }
            if (exp[i] == '}')
            {
                if (stack[top] == '{')
                {
                    pop();
                }
                else
                {
                    printf("\nThe parentheses in the string are not balanced.\n");
                }
                break;
            }
            if (exp[i] == ']')
            {
                if (stack[top] == '[')
                {
                    pop();
                }
                else
                {
                    printf("\nThe parentheses in the string are not balanced.\n");
                }
                break;
            }
        }
    }

if (top == -1)
        {
            if(top == '(')
                printf("Opening parentheses not end");
            else
            {
                printf("Closing parentheses not matched");
            }
        }

}
/*
int main()
{
    char exp[N], par_exp[N];
    printf("\nInput the expression: \n");
    scanf("%s", &exp);

    for(int i=0; i<strlen(exp); i++)
    {
        if(exp[i] == '(' || exp[i] == ')')
        {
            exp[i] = par_exp[i];

            if(par_exp[i] %2 != 0)
            {
                if(par_exp[i] == '(' && par_exp[i] != ')')
                {
                    printf("\nClosing parentheses not matched\n");
                }
                if(par_exp[i] == ')' && par_exp[i] != '(')
                    {
                        printf("\nOpening parentheses not end\n");
                    }
            }
            else
            {
                printf("Parenthesis are matched.");
            }
        }


     }
} */

