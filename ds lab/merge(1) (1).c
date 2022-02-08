#include <stdio.h>
#include <stdlib.h>
void main()
{
int a1[10],a2[10],i,n,m,j,temp,s,k,merge[50];
    printf("\n enter the size of the first array:");
    scanf("%d",&n);
    printf("enter the elements in first array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a1[i]);
        for(i=0;i<n;i++)
        {
          for(j=i+1;j<n;j++)
            {
             if(a1[i]>a1[j])
               {
                 temp=a1[i];
                 a1[i]=a1[j];
                 a1[j]=temp;

               }
           }

       }


    printf("\nthe sorted first array:");
    for(i=0;i<n;i++)
        printf("%2d",a1[i]);

    printf("\n enter the size of the second array:");
    scanf("%d",&m);
    printf("enter the elements in second array\n");
    for(i=0;i<m;i++)
        scanf("%d",&a2[i]);
        for(i=0;i<m;i++)
        {
          for(j=i+1;j<m;j++)
            {
             if(a2[i]>a2[j])
               {
                 temp=a2[i];
                 a2[i]=a2[j];
                 a2[j]=temp;

               }
           }

       }
    printf("\nthe sorted second array:");
    for(i=0;i<m;i++)
        printf("%2d",a2[i]);


  j=0;
  k=0;
  s=n+m;
    for(i=0;i<s;i++)

    {
      if(a1[j]<=a2[k])
      {
        merge[i]=a1[j];
        j++;
    }
      else
      {
        merge[i]=a2[k];
       k++;
      }
    }
    printf("\nsorted array after merging 2 sorted array is:\n");

    for(i=0;i<s;i++)
    {
        printf("%2d",merge[i]);
    }

}
