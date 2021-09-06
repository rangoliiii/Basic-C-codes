/* write a program to check whether a number is
prime or not.

Name: Rangoli Dhawan
Roll number: 53
Section: B
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,count=0;
printf("\t\t\t********INPUT********\n");
printf("Enter a number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
    {
       count++;
    }
}
printf("\t\t\t********OUTPUT********\n");
if(count==2)
{
    printf("YES");
}
else
{
    printf("NO");
}
getch();
}
