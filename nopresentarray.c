#include<stdio.h>
int main()
{
       int a[50] ,n,i,b,f=0;
    printf("\n enter the number count in array = ");
    scanf("%d",&n);
    
    printf("\nEnter the numbers = \n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);

    printf("\nEnter the any number which u have find presnet in array or not = ");
    scanf("%d",&b);

    for(i=0;i<=n;i++)
    {
        if(b==a[i])
        f++;
     }
     if(f>0)
     printf("\n %d is prsent in the array",b);
     else
      printf("\n %d is absent in the array",b);

    return 0;

}