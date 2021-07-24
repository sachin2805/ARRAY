#include<stdio.h>
int main()
{
    int a[10][10] , min;
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
             if(min>a[i][j])
             {
             min=a[i][j];
             }
    }
    printf("\nThe Smallest number in given matrix is = %d",min);

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc minimum5-5.c   
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

Enter the matrix = 
1
2
3
4
5
0
6
7
8
8
9
1
10
2
2
5
6
4
1
3
5
6
4
12
23

Given matrix is
1       2       3       4       5
0       6       7       8       8
9       1       10      2       2
5       6       4       1       3
5       6       4       12      23

The smallest number in given matrix is = 0
PS F:\PROFOUND\PRACTICAL\c>
*/
