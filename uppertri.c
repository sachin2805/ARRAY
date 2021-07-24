#include<stdio.h>
int main()
{
    int a[10][10],sumr=0,sumc=0;
    int i,j;
    printf("\nEnter the 3*3 matrix = \n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
             scanf("%d",&a[i][j]);
    }


      printf("\n the matrix =\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
             printf("%d\t",a[i][j]);

             printf("\n");
     
    }

    
      printf("\n Uppertriangular matrix of Given matrix is =\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
        if(i>j)
        {
             printf("0\t");
        }
        else
        {
             printf("%d\t",a[i][j]);
        }
        }
          printf("\n");
    }

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c\ARRAY> gcc uppertri.c
PS F:\PROFOUND\PRACTICAL\c\ARRAY> ./a.exe

Enter the 3*3 matrix = 
1
2
3
4
5
6
7
8
9

 the matrix =
1       2       3
4       5       6
7       8       9

 Uppertriangular matrix of Given matrix is =
1       2       3
0       5       6
0       0       9
PS F:\PROFOUND\PRACTICAL\c\ARRAY> 
*/
    