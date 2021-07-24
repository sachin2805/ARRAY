#include<stdio.h>
int main()
{
    int a[10][10] , max=0;
    int i,j;
    printf("\nEnter the matrix = \n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
             scanf("%d",&a[i][j]);
    }
    printf("\nGiven matrix is \n");
     for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
             printf("%d\t",a[i][j]);
             printf("\n");
    }
     for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
             if(max<a[i][j])
             {
             max=a[i][j];
             }
    }
    printf("\nThe largest number in given matrix is = %d",max);

    return 0;
}
