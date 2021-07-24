#include<stdio.h>
int main()
{
    int a[50] ,i,n,j,count=0;
    printf("\n enter the number count in array = ");
    scanf("%d",&n);
    
    printf("\nEnter the numbers = \n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    printf("duplicate elements are = ");
for(i=1;i<=n;i++)
{
    for(j=i;j<=n;j++)
    {
        if(a[i]==a[j])
        {
          printf("%d\t",a[j]);
          count++;
          break;
        }
        

    }
}
printf("\nduplicate numbers count is = %d\n",count);

return 0;
}
   