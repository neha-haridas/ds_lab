#include <stdio.h>
#include <stdlib.h>
struct node{
	struct node*next;
	int data;
};*head;
struct node * Union(struct node * L1, struct node * L2){
	struct node * head = NULL;
	struct node * temp = NULL;
	while(L1&&L2){
		struct node * newNode = (struct node *) malloc(sizeof(struct node));
		newNode->next = NULL;
		if(L1->data<L2->data){
			newNode->data = L1->data;
			L1 = L1->next;
		}
		else if(L1->data>L2->data){
			newNode->data = L2->data;
			L2 = L2->next;
		}
		else{
			int data = L1->data;
			newNode->data = data;
			while(L1 && L2 && L1->data == data && L2->data == data){
				L1 = L1->next;
				L2 = L2->next;
			}
		}
		if(!head)
			head = temp = newNode;
		else{
			temp->next = newNode;
			temp = temp->next;
		}
	}
	while(L1){
		temp->next = (struct node *) malloc(sizeof(struct node));
		temp= temp->next;
		temp->data = L1->data;
		L1 = L1->next;
	}
	while(L2){
		temp->next = (struct node *) malloc(sizeof(struct node));
		temp = temp->next;
		temp->data = L2->data;
		L2 = L2->next;
	}
	temp->next = NULL;
	return head;
}


void createlist(int n);
void traverselist();

    void createlist(int n)
    {
       struct node *newnode,*temp;
       int data,i;
       head=(struct node *)malloc(sizeof(struct node));
       if (head==NULL)
       {
         head=newnode;
       }
       else
        {
            printf("input data for node 1:");
            scanf("%d",&data);
            head->data=data;
            head->next=NULL;
            temp=head;
        }
        for (i=2;i<=n;i++)
        {
            newnode=(struct node *)malloc(sizeof(struct node));
            if (newnode==NULL)
            {
               head=newnode;
            }
            else
            {
                printf("input data for node %d:",i);
                scanf("%d",&data);

               newnode->data=data;
               newnode->next=NULL;
               temp->next=newnode;
               temp=temp->next;
            }

        }


    }

    void traverselist()
    {
        struct node *temp;
        if (head==NULL)
        {
            printf("list is empty");


        }
        else
            {
                temp=head;
                while(temp !=NULL)
                {
                    printf("Data=%d\n",temp->data);
                    temp=temp->next;
                }


            }
    }
   int main()
{
    int n,m,data;

struct node * L1 = NULL;
	struct node * L2 = NULL;
	struct node * L3 = NULL;
	L1 = printf("input the number of nodes in the first list:");
            scanf("%d",&n);
            createlist(n);
            printf("\ndata entered in the first list:\n");
            traverselist();
	L2 =    printf("input the number of nodes in the second list:");
            scanf("%d",&n);
            createlist(n);
            printf("\ndata entered in the second list:\n");
            traverselist();
    printf("Union : ");
	L3 = Union(L1, L2);
	print(L3);
	return 0;

}
