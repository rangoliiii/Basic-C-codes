#include<stdio.h>
#include<conio.h>
#include<math.h>
int isprime (int);
void main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if (isprime (num))
        printf("no. is prime");
    else
        printf("no. is not prime");
    getch ();
}
int isprime (int n)
{
    int i,flag=1;
    for(i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
        flag=0;
         break;
}
}
return (flag);
}
