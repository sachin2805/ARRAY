#include<stdio.h>
int main()
{
    int a,n,sum=0;
    printf("\nEnter the number = ");
    scanf("%d",&a);//store the number

while(n>0) //loop upto n is positive
{
    n=a%10;  //first take a%10 in n 
    a=a/10;  //and a/10 means one by one a is shifted (like eg. a=1234 then 123 then 12 then 1) and compare its all digits from last 
     if(n%2==0) //if stored value in n is even 
	{
	sum=sum+n; //then add otherwise leave this digit by using if condition
	}
}
 printf("\nThe sum of even digits entered by user is = %d",sum);

 return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c\ARRAY> gcc sumofevendigits.c
PS F:\PROFOUND\PRACTICAL\c\ARRAY> ./a.exe

Enter the number = 12465                                          => sum of even digit present in wholenumber

The sum of even digits entered by user is = 12
PS F:\PROFOUND\PRACTICAL\c\ARRAY>
*/

