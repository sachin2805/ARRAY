#include<stdio.h>
int main()
{
    int a[10] , min;
    int n,i;
    printf("\nEnter the count in array = \n");
    scanf("%d",&n);
    printf("\nEnter the numbers = \n");
    for(i=1;i<=n;i++)
    {
       scanf("%d",&a[i]);
    }
  for(i=1;i<=n;i++)
  {
             if(min>a[i])
             {
             min=a[i];
             }
    }
    printf("\nThe Smallest number in given array is = %d",min);

    return 0;
}