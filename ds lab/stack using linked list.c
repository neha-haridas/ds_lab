#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();
void search();
struct node
{
int data;
struct node *next;
};
struct node *top;

void main ()
{
    int choice=0;
    printf("\t\t\t\tStack operations using linked list\n");
    while(choice != 5)
    {
        printf("\nChose one from the below options\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.search\n5.Exit");
        printf("\n Enter your choice:\t");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                search();
                break;
            }
            case 5:
            {
                printf("Exit");
                break;
            }
            default:
            {
                printf("Please Enter valid choice ");
            }
    };
}
}
void push ()
{
    int data;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data:\t\t");
        scanf("%d",&data);
        if(top==NULL)

        {
            newnode->data = data;
            newnode-> next = NULL;
            top=newnode;
        }
        else
        {
            newnode->data = data;
            newnode->next = top;
            top=newnode;

        }
        printf("Item pushed");

    }


void pop()
{
    int item;
    struct node *newnode;
    if (top== NULL)
    {
        printf("Underflow");
    }
    else
    {
        item = top->data;
        newnode= top;
        top=top->next;
        free(newnode);
        printf("Item popped");

    }
}
void display()
{
    int i;
    struct node *newnode;
    newnode=top;
    if(newnode == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements: \n");
        while(newnode!=NULL)
        {
            printf("-> %d ",newnode->data);
            newnode = newnode->next;
        }
    }
}
void search()
{
    int item,i=0,flag=0;
    struct node*newnode;
    newnode=top;
    if(newnode==NULL)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        printf("Enter the element to search:\t");
        scanf("%d",&item);
        while(newnode!=NULL)
            {
               if(newnode->data==item)
               {
                    printf("Element found at location %d ",i+1);
                    flag=0;
                }
              else
                 {
                  flag=1;
                 }
             i++;
            newnode = newnode -> next;
         }
    }
}



