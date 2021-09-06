/*write a program which will print
the fabonacci series upto limit n.

Name: Rangoli Dhawan
Roll number: 53
Section: B
*/

#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a=0,b=1,c;
printf("\n\t\t********INPUT********");
printf("\nEnter limit :");
scanf("%d",&n);
printf("\n\t\t********OUTPUT********\n");
for(i=1;i<=n;i++)
{
    printf("%d,",a);
    c=a+b;
    a=b;
    b=c;
}
getch();
}
