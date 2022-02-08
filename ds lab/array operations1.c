#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10],i,n,item,choice,flag=0;
    while(1)
    {
    printf("1. Inserting an Element in an Array\n");
    printf("2. Traversal\n");
    printf("3. Deleting an Element in an Array\n");
    printf("4. Searching an Element in an Array\n");
    printf("Select your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
           printf("the size of array(max is 10):");
           scanf("%d",&n);
           printf("the elements of array:");
           for(i=0;i<n;i++)
           scanf("%d",&a[i]);
           printf("the inserting element is:");
           scanf("%d",&item);


           printf("orginal elements are\n");
           for(i=0;i<n;i++)
           printf("a[%d]=%d\n",i,a[i]);
           n=n+1;

           a[n-1]=item;
           printf("the array elements after insertion:\n");
           for(i=0;i<n;i++)
           printf("a[%d]=%d\n",i,a[i]);
           break;
    case 2:

            printf("\n enter the size:");
            scanf("%d",&n);
            printf("enter the array");
            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
            printf("\nTraversal:");
            for(i=0;i<n;i++)
                printf("%2d",a[i]);
                break;
    case 3:
            printf("the size of array(max is 10):");
            scanf("%d",&n);
            printf("the elements of array:");
            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
            printf("the deleting element is:");
            scanf("%d",&item);

            printf("orginal elements are\n");
            for(i=0;i<n;i++)
                printf("a[%d]=%d\n",i,a[i]);
            n=n-1;
            printf("the array elements after deletion:\n");
            for(i=0;i<n;i++)
            printf("a[%d]=%d\n",i,a[i]);
            break;
     case 4:
            printf("the size of array(max is 10):");
            scanf("%d",&n);
            printf("the elements of array:");
            for(i=0;i<n;i++)
                scanf("%d",&a[i]);
            printf("Enter the searching element :");
            scanf("%d",&item);
            printf("the searching element :");
            for(i=0;i<n;i++)
            {

               flag==0;
                (a[i]==item);
                 break;}
         if (flag==0)
         {
         printf("element%d,position%d\n",item,i+1);

         }
         else
         {
         printf("value not found");
         }

            break;
       default:
        printf("Wrong choice, Please try again later");

       }
}
}

