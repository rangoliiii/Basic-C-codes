/*Write a program to input values of
n and r to calculate ,use function fact()
to calculate factorial.

Name: Rangoli Dhawan
Roll number: 53
Section: B
*/

#include<stdio.h>
#include<conio.h>
int fact(int z);
void main()
{
    int n,r;
    float ncr;
    printf("\t\t\t\t*****INPUT*****\n");
    printf("Enter the value of n and r");
    scanf("%d%d",&n,&r);
    printf("\t\t\t\t*****OUTPUT*****\n");
    ncr=fact(n)/(fact(r)*fact(n-r));
    printf("%.6f",ncr);
}
int fact(int z)
{
    int f=1,i;
    if (z==0)
    {
        return(f);
    }
    else
    {
        for(i=1;i<=z;i++)
        {
            f=f*i;
        }
    }
    return(f);
}
