#include<stdio.h>
void main()
{
    int n,fact=1,i,x;
    float odd=0,even=0,sum;
    printf("enter n");
    scanf("%d",&n);
    printf("enter x");
    scanf("%d",&x);
for(i=1;i<=n;i++)
{
    if(i%2==0)
    {
    fact=fact*i;
    even=even-(pow(x,i)/fact);
    }
    else
    {
    fact=fact*i;
    odd=odd+(pow(x,i)/fact);
    }
}
sum=odd+even;
printf("%f",sum);
}
