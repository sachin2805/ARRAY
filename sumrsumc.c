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
     
               for(i=1;i<=3;i++)
    {
        sumr=0;
        for(j=1;j<=3;j++)
        {
           sumr= sumr + a[i][j];  
        }
         printf("\n the Sum row %d elements are =%d",i,sumr);
    }
              for(i=1;i<=3;i++)
    {
        sumc=0;
        for(j=1;j<=3;j++)
        {
            
            sumc= sumc + a[j][i];
        }
        printf("\n the Sum column %d elements are =%d",i,sumc);
    }
    
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c\ARRAY> gcc sumrsumc.c
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

 the Sum row 1 elements are =6
 the Sum row 2 elements are =15
 the Sum row 3 elements are =24
 the Sum column 1 elements are =12
 the Sum column 2 elements are =15
 the Sum column 3 elements are =18
PS F:\PROFOUND\PRACTICAL\c\ARRAY> 
*/