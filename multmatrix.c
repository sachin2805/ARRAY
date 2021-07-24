#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j,k;
    printf("\nEnter the first matrix = \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
             scanf("%d",&a[i][j]);
    }
      printf("\nEnter the Second matrix = \n");
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
             scanf("%d",&b[i][j]);
    }

      printf("\n the first matrix =\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
             printf("%d ",a[i][j]);
             printf("\n");

    }
      printf("\n the Second matrix =\n");
      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
             printf("%d ",b[i][j]);
             printf("\n");
    }
        
               for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          c[i][j]=0;
          for(k=0;k<3;k++)
          {
            c[i][j]+= a[i][k]*b[k][j];
          }
         }
      }
              printf("\n the Multiplication of the matrix =\n");
               for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

             printf("%d   ",c[i][j]);
            
        }
         printf("\n");
    }

   
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc multmatrix.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe

Enter the first matrix = 
1
2
3
4
5
6
7
8
9

Enter the Second matrix =
1
2
3
4
5
6
7
8
9

 the first matrix =
1 2 3
4 5 6
7 8 9

 the Second matrix =
1 2 3
4 5 6
7 8 9

 the Multiplication of the matrix =
30   36   42
66   81   96
102   126   150   
PS F:\PROFOUND\PRACTICAL\c>
*/