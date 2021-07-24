#include<stdio.h>
int main()
{
    int a[50] ,i,n,j,b;
    printf("\n enter the number count in array = ");
    scanf("%d",&n);
    
    printf("\nEnter the numbers = \n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
    {
        if(a[i]<a[j])
        {
            b=a[i];
            a[i]=a[j];
            a[j]=b;
        }

    }
}
   
    printf("\n the Array in acending order is :\n" );
       for(i=1;i<=n;i++)
    printf("%d\t",a[i]);
     return 0;
     
}

/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc decendingarray.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

 enter the number count in array = 7

Enter the numbers =
90
50
80
20
27
60
76

 the Array in acending order is :
90      80      76      60      50      27      20
PS F:\PROFOUND\PRACTICAL\c>
*/