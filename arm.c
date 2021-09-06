#include<stdio.h>
int sum(int);
void main()
{
    int n,s;
    printf("enter the no.");
    scanf("%d",&n);
    s=sum(n);
    printf("%d",s);
}
int sum(int x)
{
    if(x==0)   {
        return 0;
    }
    else
    {
        return x+sum(x-1);
    }
}
