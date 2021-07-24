#include<stdio.h>
int main()
{
    int a[30],n,i,j;
      printf("\n enter the number count in array = ");
    scanf("%d",&n);
    
    printf("\nEnter the numbers = \n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);

    printf("\nu enter the numbers are = \n");
    for(i=1;i<=n;i++)
    printf("%d\t",a[i]);

     printf("\nReverce numbers of the given array are = \n");
    for(i=n;i>=1;i--)
    printf("%d\t",a[i]);

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc revercearray.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

 enter the number count in array = 5

Enter the numbers =
10
30
40
50
60

u enter the numbers are =
10      30      40      50      60
Reverce numbers of the given array are =
60      50      40      30      10
PS F:\PROFOUND\PRACTICAL\c>
*/
