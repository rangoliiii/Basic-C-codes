/*write a program to calculate sum
of following series using recursive function.

Name: Rangoli Dhawan
Roll number: 53
Section: B
*/

#include<stdio.h>
void main()
{
int a,n;
printf("\t\t\t********INPUT********\n");
printf("enter the number=");
scanf("%d",&n);
printf("\t\t\t*******OUTPUT********\n");
a=square(n);
printf("%d",a);
}
int square(int a)
{
int s=0,i;
if(a==1)
    return a;
s=a*a+square(a-1);
return s;
}
