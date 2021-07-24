#include<stdio.h>
int main()
{
    int a[50] ,i,n,j,sum=0;
    printf("\n enter the number count in array = ");
    scanf("%d",&n);
    
    printf("\nEnter the numbers = \n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
sum=sum+a[i];  
}
printf("\n The sum of all element/numbers of are is = %d",sum);

return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c\ARRAY> gcc sumofarray.c
PS F:\PROFOUND\PRACTICAL\c\ARRAY> ./a.exe

 enter the number count in array = 10

Enter the numbers =
1
2
3
4
5
6
7
8
9
10

 The sum of all element/numbers of are is = 55
PS F:\PROFOUND\PRACTICAL\c\ARRAY>
*/