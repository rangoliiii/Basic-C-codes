#include<stdio.h>
int pow(int,int);
void main()
{
    int a,b,c;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    c=pow(a,b);
    printf("%d",c);
}
int pow(int x,int y)
{
    if(y==0)
    {
        return 1;
    }
    else if(y==1)
    {
        return x;
    }
    else
    {
        return x*pow(x,y-1);
    }
}
