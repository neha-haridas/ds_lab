#include <stdio.h>
#define max 5
int stack[max],top=-1;
void push(int n)
{
    stack[++top]=n;
}
int pop()
{
    return(stack[top--]);
}
void display()
{
    int p=top;
    if(p==-1)
        printf("\nstack is empty");
    else
    {
        printf("\nstack contents");
        while(p>=0)
        {
            printf("%2d",stack[p]);
            p--;
        }
    }
}
void main()
{
    int ch,n,i;
    while(1)
    {
        printf("\n\tmenu\nstack with capacity %d",max);
        printf("\n1.push\n2.pop\n3.display\n4.exit\nenter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: if(top==max-1)
                    {
                        printf("\nstack is full");

                    }
                    else
                    {
                        printf("\nenter the element to be inserted:");
                        scanf("%d",&n);
                        push(n);
                    }
                    break;
            case 2: if (top<0)
                    {
                        printf("\nstack is empty");

                    }
                    else
                    {
                        n=pop();
                        printf("\ndeleted element is %d\n",n);

                    }
                    break;
            case 3:if (top>=0)
                      printf("the elements in stack");
                      for(i=top;i>=0;i--)
                       {
                       printf("\n%d",stack[i]);
                       }


                       break;

            case 4:exit(0);


        }

    }
}
