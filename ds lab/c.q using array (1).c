
#include<stdio.h>
#define max 5
void enqueue();
void dequeue();
int rear =-1,front =-1,cq[max];
void main()
{
    int ch;
    while(1)
    {
        printf("\nMENU\n");
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.EXIT\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue();
                   break;
            case 2:dequeue();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
                   break;
            default:
                   {
                       printf("enter a valid choice");
                   }
        }
    }
}

void enqueue()
{

    int n;
    printf("\nEnter the number to be inserted : ");
    scanf("%d",&n);

	if(front==(rear+1)%max)
		printf("Circular Queue is Full !....");
	else if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		cq[rear]=n;
	}
	else
	{
		rear=(rear+1)%max;
		cq[rear]=n;
	}

}

void dequeue()
{

	if(front==-1)
		printf("\nCircular Queue is Empty !....");
	else
	{
		printf("\nThe deleted Element is %d ",cq[front]);
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
			front=(front+1)%max;
	}
}

void display()
{
	int f;
	if(front==-1)
		printf("\nCircular Queue is Empty !....");
	else
	{
		printf("\nQueue contents :  ");
		if(front<=rear)
		{
			f=front;
			while(f<=rear)
			{
				printf("%3d",cq[f]);
				f++;
			}
		}
		else if(rear<front)
		{
			f=front;
			while(f<max)
			{
				printf("%3d",cq[f]);
				f++;
			}
			f=0;
			while(f<=rear)
	          {
				printf("%3d",cq[f]);
				f++;
			  }
		}
	}
}
