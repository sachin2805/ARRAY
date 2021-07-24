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
      printf("\nTranspose of matrix is \n");
     for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
             printf("%d\t",a[j][i]);
             printf("\n");
    }
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc transpose.c 
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

Enter the matrix = 
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
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25

Given matrix is
1       2       3       4       5
6       7       8       9       10
11      12      13      14      15
16      17      18      19      20
21      22      23      24      25

Transpose of matrix is
1       6       11      16      21
2       7       12      17      22
3       8       13      18      23
4       9       14      19      24
5       10      15      20      25
PS F:\PROFOUND\PRACTICAL\c>
*/