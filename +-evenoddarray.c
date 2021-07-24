#include<stdio.h>
int main()
{
       int a[50] ,n,i;
    printf("\n\nEnter the number count in array = ");
    scanf("%d",&n);
    
    printf("\n\nEnter the numbers = \n");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);

     printf("\n\nPositive numbers in the array are =");
    for(i=1;i<=n;i++)
    { if(a[i]>0)
         printf("\t%d",a[i]);
    }
    printf("\n\nNegative numbers in the array are =");
     for(i=1;i<=n;i++)
    { 
     if(a[i]<0)        
           printf("\t%d",a[i]);  
     }
     printf("\n\nZero or neutral in array =");
     for(i=1;i<=n;i++)
     {
     	if(a[i]==0)
	    printf("\t%d",a[i]);
	}
     printf("\n\nEven number in array are =");
     for(i=1;i<=n;i++)
    {
	    if(a[i]%2==0)
	    printf("\t%d",a[i]);
	}
    printf("\n\nOdd number in array are =");
      for(i=1;i<=n;i++)
    {
	   if(a[i]%2!=0)
	    printf("\t%d",a[i]);
     }
   return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc +-evenoddarray.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe 


Enter the number count in array = 10


Enter the numbers = 
10
-20
33 
-44
-61
-88
89
70
-60
-98


Positive numbers in the array are =     10      33      89      70

Negative numbers in the array are =     -20     -44     -61     -88     -60     -98

Zero or neutral in array =

Even number in array are =      10      -20     -44     -88     70      -60     -98

Odd number in array are =       33      -61     89
PS F:\PROFOUND\PRACTICAL\c> 
*/