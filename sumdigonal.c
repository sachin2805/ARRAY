#include<stdio.h>
int main()
{
    int a[3][3],sum=0;
    int i,j;
    printf("\nEnter the 3*3 matrix = \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
             scanf("%d",&a[i][j]);
    }


      printf("\n the matrix =\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
             printf("%d\t",a[i][j]);

             printf("\n");
     
    }
     
               for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            sum= sum + a[i][j];
          
        }
    }
     printf("\n the Sum of all digonal elements are =%d",sum);
   
    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c\ARRAY> gcc sumdigonal.c
PS F:\PROFOUND\PRACTICAL\c\ARRAY> ./a.exe

Enter the matrix = 
2
3 
6
5
4
9
8
7
1

 the matrix =
2       3       6
5       4       9
8       7       1

 the Sum of all digonal elements are =7
PS F:\PROFOUND\PRACTICAL\c\ARRAY>  
*/