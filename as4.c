/* Write a menu driven program to design a
 calculator which can perform basic operations like
%,/,*,+,-.

Name: Rangoli Dhawan
Roll number: 53
Section: B
*/
#include<stdio.h>
void main()
{
int n1,n2,opt;
printf("\n\t\t\t*****INPUT*****");
printf("\nenter the first integer:");
scanf("%d",&n1);
printf("\nenter the second integer:");
scanf("%d",&n2);
printf("\n input your option:\n");
printf("1-modulus.\n2-divison.\n3-multiplication.\n4-addition.\n5-substraction\n");
scanf("%d",&opt);
printf("\n\t\t\t*****OUTPUT*****");
switch(opt)
{
case 1:
printf("\nthe modulus of %d and %d gives:%d",n1,n2,n1%n2);
break;
case 2:
printf("\nthe division of %d and %d gives:%d",n1,n2,n1/n2);
break;
case 3:
printf("\nthe multiplication of %d and %d gives:%d",n1,n2,n1*n2);
break;
case 4:
printf("\nthe addition of %d and %d gives:%d ",n1,n2,n1+n2);
break;
case 5:
printf("\nthe substraction of %d and %d gives:%d",n1,n2,n1-n2);
break;
default:
printf("invalid");
}
}
