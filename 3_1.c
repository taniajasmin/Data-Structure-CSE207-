#include<stdlib.h>
#include <stdio.h>

void create();
void display();
void insert_begin();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void reverse();


struct node
{
        int info;
        struct node *next;
};
struct node *start=NULL, *previous, *current;

void create()
{
        struct node *temp,*ptr;
        temp = (struct node *)malloc(sizeof(struct node));
        if(temp == NULL)
        {
                printf("\nOut of Memory Space. Can not allocate.");
                exit(0);
        }
        printf("\nEnter the value of the node: ");
        scanf("%d",&temp  -> info);
        temp -> next=NULL;
        if(start == NULL)
        {
                start = temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}
void display()
{
        struct node *ptr;
        if(start == NULL)
        {
                printf("\nList is empty.");
                return;
        }
        else
        {
                ptr = start;
                printf("\nThe List of elements are:  ");
                while(ptr != NULL)
                {
                        printf("%d",ptr->info );
                        ptr = ptr -> next ;
                }
        }
}

void insert_begin()
{
        struct node *temp;
        temp = (struct node *)malloc(sizeof(struct node));
        if(temp == NULL)
        {
                printf("\nOut of Memory Space. Can not allocate.");
                return;
        }
        printf("\nEnter the value of the node to be inserted at beginning:  ");
        scanf("%d",&temp->info);
        temp -> next = NULL;
        if(start == NULL)
        {
                start = temp;
        }
        else
        {
                temp -> next = start;
                start = temp;
        }
}

void insert_pos()
{
        struct node *ptr,*temp;
        int i,pos;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space. Can not allocate.");
                return;
        }
        printf("\nEnter the position of the new node to be inserted:  ");
        scanf("%d",&pos);
        printf("\nEnter the value of the node to be inserted:  ");
        scanf("%d",&temp->info) ;

        temp->next=NULL;
        if(pos==0)
        {
                temp->next=start;
                start=temp;
        }
        else
        {
                for(i=0,ptr=start;i<pos-1;i++) { ptr=ptr->next;
                        if(ptr==NULL)
                        {
                                printf("\nPosition not found.");
                                return;
                        }
                }
                temp->next =ptr->next ;
                ptr->next=temp;
        }
}
void delete_begin()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("\nList is Empty.");
                return;
        }
        else
        {
                ptr=start;
                start=start->next ;
                printf("\nThe deleted element is :  %d",ptr->info);
                free(ptr);
        }
}
void delete_end()
{
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("nList is Empty:");
                exit(0);
        }
        else if(start->next ==NULL)
        {
                ptr=start;
                start=NULL;
                printf("\nThe deleted element is:  %d", ptr->info);
                free(ptr);
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        temp=ptr;
                        ptr=ptr->next;
                }
                temp->next=NULL;
                printf("\nThe deleted element is:  %d", ptr->info);
                free(ptr);
        }
}
void delete_pos()
{
        int i,pos;
        struct node *temp,*ptr;
        if(start==NULL)
        {
                printf("\nThe List is Empty.");
                exit(0);
        }
        else
        {
                printf("\nEnter the position of the node to be deleted:  ");
                scanf("%d",&pos);
                if(pos==0)
                {
                        ptr=start;
                        start=start->next ;
                        printf("nThe deleted element is:%d",ptr->info  );
                        free(ptr);
                }
                else
                {
                        ptr=start;
                        for(i=0;i<pos;i++) { temp=ptr; ptr=ptr->next ;
                                if(ptr==NULL)
                                {
                                        printf("\nPosition not Found.");
                                        return;
                                }
                        }
                        temp->next =ptr->next ;
                        printf("nThe deleted element is:%d",ptr->info );
                        free(ptr);
                }
        }
}

void reverse()
{
    struct node *previous, *current;

    if(start != NULL)
    {
        previous = start;
        current = start->next;
        start = start->next;

        previous->next = NULL; //convert the first node as last

        while(start != NULL)
        {
            start = start->next;
            current->next = previous;

            previous = current;
            current = start;
        }
        start = previous; //convert the last node as head
    }
}


int main()
{
        int choice;

        while(1){

                printf("\nMENU: \n");
                printf("\n\nEnter your choice:\n1. Create Linked List\n");
                printf("2. Insert node at beginning\n3. Insert node at any position\n");
                printf("4. Delete Node from last position\n5. Delete Node from beginning\n");
                printf("6. Delete Node from any position\n7. Reverse Linked list\n");
                printf("8. Display\n9. Exit\n");

                printf("\nEnter your choice:   ");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        create();
                                        break;
                        case 2:
                                        insert_begin();
                                        break;
                        case 3:
                                        insert_pos();
                                        break;
                        case 4:
                                        delete_end();
                                        break;
                        case 5:
                                        delete_begin();
                                        break;
                        case 6:
                                        delete_pos();
                                        break;

                        case 7:
                                        reverse();
                                        //exit(0);
                                        break;
                        case 8:
                                        display();
                                        break;

                        default:
                                        printf("n Wrong Choice:n");
                                        break;
                }
        }
        return 0;
}
