#include <stdio.h>
#include <stdlib.h>
void create();
void display();
void insert_beginning();
void insert_end();
void delete_beginning();
void delete_ent();
void insert_position();
void search();
struct node
{
    int data;
    struct node *next,*prev;
};
  struct node *head=NULL;

 void main()
{
    int choice=0;
    printf("Doubly linked list operations\n");
    while(1)
    {
        printf("\n\nChose one from the below options\n\n");
        printf("\n1.create\n2.display\n3.insert_beginning\n4.insert_end\n5.delete_beginning\n6.delete_ent\n7.insert_position\n8.search\n9.Exit");
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                {
                    create();
                    break;
                }
            case 2:
                {
                    display();
                    break;
                }
           case 3:
                {
                    insert_beginning();
                    break;
                }
           case 4:
                {
                    insert_end();
                    break;
                }
          case 5:
                {
                    delete_beginning();
                    break;
                }
          case 6:
                {
                    delete_ent();
                    break;
                }
          case 7:
                {
                    insert_position();
                    break;
                }

           case 8:
                {
                   search();
                   break;
                }
           case 9:
                {
                   printf("EXIT");
                   break;
                }
          default:
            {
                printf("Please Enter valid choice ");
            }
        };
    }
}
void create()
{
       struct node *newnode,*temp;
       int data,i,n;
        printf("enter the limit:");
        scanf("%d",&n);

       for(i=0;i<n;i++)
       {
       newnode=(struct node *)malloc(sizeof(struct node));
       printf("enter the data:");
       scanf("%d",&newnode->data);
       newnode->prev=NULL;
       newnode->next=NULL;
       temp=head;
       if (head==NULL)
       {
           head=newnode;

       }
       else
         {
             while(temp->next!=NULL)
               {
                   temp=temp->next;
                   //temp=temp->prev;
               }
               temp->next=newnode;
               newnode->prev=temp;
               newnode->next=NULL;
         }

       }
        printf("\t**created**");
}
void display()
{
        struct node *temp;
        if (head==NULL)
        {
            printf("list is empty");


        }
        temp=head;
        printf("\n\tthe doubly linked list is:");
        while(temp!=NULL)
        {
            printf("<=>%d",temp->data);
            temp=temp->next;
        }



    }
void insert_beginning ()
{

        struct node *newnode;
        int data;
       newnode=(struct node *)malloc(sizeof(struct node));
       printf("enter the data:");
       scanf("%d",&newnode->data);
       newnode->prev=NULL;
       newnode->next=NULL;
       if (head==NULL)
       {
           head=newnode;

       }
       else
       {
           newnode->next=head;
           head=newnode;
           printf("**inserted**");

       }
}
void insert_end()
{
        struct node *newnode,*temp;
        int data;
       newnode=(struct node *)malloc(sizeof(struct node));
       printf("enter the data:");
       scanf("%d",&newnode->data);
       newnode->prev=NULL;
       newnode->next=NULL;
       temp=head;
       if (head==NULL)
       {
           head=newnode;

       }
       else
         {
             while(temp->next!=NULL)
               {
                   temp=temp->next;
               }
               temp->next=newnode;
               newnode->prev=temp;
               newnode->next=NULL;
         }


        printf("\t**inserted**");
}
void delete_beginning()
{
      struct node *temp;
      if (head==NULL)
        {
            printf("list is empty");


        }

    else
       {
         temp=head;
         head=head->next;
         head->prev=NULL;
         free(temp);
       }

       printf("\t**deleted**");

}
void delete_ent()
{
      struct node *temp,*temp1;
      temp=head;
      if(head==NULL)
        {
             printf("List is empty");
        }
      else
        {
          while(temp->next->next!=NULL)
           {
            temp=temp->next;
          }
           temp1=temp->next;
           temp->next=NULL;
           free(temp1);
            printf("\t**deleted**");
       }

}
void insert_position()
{
    int data,n;
    struct node *newnode,*temp,*temp1;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data to be inserted:\t");
    scanf("%d",&newnode->data);
    printf("enter the near data: ");
    scanf("%d",&n);
    newnode->prev=NULL;
    newnode->next=NULL;
    temp=temp1=head;
     if(head==NULL)
      {
        head=newnode;
      }
    else
    {
         while(temp->next!=NULL&&temp->data!=n)
        {
            temp=temp->next;
        }
            temp1=temp->next;
            temp->next=newnode;
            newnode->prev=temp;
            newnode->next=temp1;


         printf("**inserted**");


    }
}
void search()
{
    int item,i,flag=0;
    struct node *temp;
     temp=head;
    if(temp==NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        printf("Enter the element to search:\t");
        scanf("%d",&item);
        while(temp!=NULL)
            {
               if(temp->data==item)
               {

                    flag=1;
                    break;
                }
              temp = temp -> next;
            }
            if(flag==1)
               printf("\tElement found ");
              else
                 {
                printf("\telement not found");
                 }

         }
    }




