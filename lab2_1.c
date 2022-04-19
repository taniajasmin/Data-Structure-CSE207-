#include<stdio.h>
#define N 5

int push();
int display();
int pop(); 

int S[100], top = -1;

int push()
{
    if(top == (N-1))
        printf("\nOverflow\n");    //or stack is full
    else 
    {
        int item;
        printf("Enter one item: ");
        scanf("%d",&item);
        top=top+1;
        S[top]=item;
        printf("One item added in the stack\n");

    }
}

int pop()
{
    if(top == -1)
        printf("Underflow.\n");  // or stack is empty
    else {

        int popitem = S[top];
        top = top-1;
        printf("you have popped %d from the stack.\n",popitem);

    }
}

int display()
{
    if(top == -1)
        printf("\n Stack empty.\n");
    else {
    int i = top;
    printf("Your stack is:\n");
    for(; i>=0; i--)
        printf("%d\n",S[i]);
    }
}

int main()
{
    int choice;

    while(1){

    printf("Enter your choice:  1-Push, 2-Pop, 3-display, 4-exit: \n\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("You have chosen push operation:\n");
            push();
            break;
        case 2:
            printf("You have chosen pop operation:\n");
            pop();
            break;
        case 3:
        printf("You have chosen display operation:\n");
        display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice: try another\n");
        }
    }
    return 0;
}