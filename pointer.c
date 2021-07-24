#include<stdio.h>
int main()
{
    //but pointer use the mostly int and char
    int a; char c; double d;
    int* p; char* r; double* s;
    int** e;
    a=10; c=20; d=30;
    p=&a;  r=&c;s=&d;
    e=&p;
    //printng values of given variable
     printf("\nThe Value of  a = %d",a);
       printf("\nThe Value of  c = %d",c);
        printf("\nThe Value of  d = %lf",d);
    //printing address of given variable
    printf("\nThe address of a = %d",&a);
    printf("\nThe address of c = %u",&c);
    printf("\nThe address of d = %u",&d);
    //printing the pointing variable and print the values at the variable
    printf("\n\nThe Value of  p = %d",p); //store value at address  of a or its point to a
       printf("\nThe Value of  &p = %d",&p); 
        printf("\nThe Value of  *p = %d",*p); //store value at a or its point to a
        printf("\nThe Value of  *r = %d",*r); //store value at d or its point the d
         printf("\nThe Value of  *s = %lf",*s); //store value at d or its point the d
         printf("\nThe Value of  **e = %d",**e); // store value at a and store address of p

    return 0;
}
/*OUTPUT
PS F:\PROFOUND\PRACTICAL\c> gcc pointer.c
PS F:\PROFOUND\PRACTICAL\c> ./a.exe      

The Value of  a = 10
The Value of  c = 20
The Value of  d = 30.000000
The address of a = 6422208
The address of c = 6422207
The address of d = 6422192

The Value of  p = 6422208
The Value of  &p = 6422188
The Value of  *p = 10
The Value of  *r = 20
The Value of  *s = 30.000000
The Value of  **e = 10
PS F:\PROFOUND\PRACTICAL\c>
*/