#include<stdio.h>
int sod(int);
void main()
{
    int num,s;
    printf("enter no.");
    scanf("%d",&num);
    s=sod(num);
    printf("%d",s);
}
int sod(int n)
{
    int  rev=0,rem;
    while(n!=0)
    {
    rem=n%10;
    rev=rev+rem;
    n=n/10;
    }
    return rev;
}
