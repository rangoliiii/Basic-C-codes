#include<stdio.h>
int rev(int);
void main()
{
    int n,r;
    printf("enter no.");
    scanf("%d",&n);
    r=rev(n);
    printf("%d",&r);
    if(r==n)
    {
        printf("p");
    }
    else
    {
        printf("np");
    }
}
int rev(int x)
{
    int rem,p=0;
    while(x>0)
    {
        rem=x%10;
        p=(p*10)+rem;
        x=x/10;
    }
    return (p);
}
