#include<stdio.h>

struct Node {

int data;
struct Node *next;

};

struct Node *head, *node, *temp;

void remove_duplicates(struct Node* head)
{
    struct Node* current = head;
    struct Node* next_next;
    if (current == NULL)
       return;

    while (current->next != NULL)
    {
       if (current->data == current->next->data)
       {
           next_next = current->next->next;
           free(current->next);
           current->next = next_next;
       }
       else
       {
          current = current->next;
       }
    }
}

int main(){

int n,i;
printf("Enter the number of nodes: ");

scanf("%d",&n);
head=NULL;
for(i=1;i<=n;i++)
{
    node=(struct Node *)malloc(sizeof(struct Node*));
    if(node==NULL)
        printf("Con not allocate");
    else {
        int item;
        printf("\nEnter your data %d: ",i);
        scanf("%d",&item);
        node->data=item;
        node->next=NULL;

        if(head==NULL)
        {
            head=node;
            printf("\nInserted at head\n");
        }

        else {

            temp=head;
            while(temp->next!=NULL)
                temp=temp->next;

            temp->next=node;

        }

    }
}


            temp=head;
            while(temp!=NULL)
                {printf("%d------->",temp->data);
                temp=temp->next;
                }
            printf("NULL");


    remove_duplicates(head);

    printf("\n Linked list after duplicate removal \n");
                temp=head;
            while(temp!=NULL)
                {printf("%d------->",temp->data);
                temp=temp->next;
                }
            printf("NULL");


}
