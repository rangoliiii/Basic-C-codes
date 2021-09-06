/*Write a program to find
 minimum of three numbers
 */

#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("\t\t\t\t*****INPUT*****\n");
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Enter third number:");
    scanf("%d",&c);
    printf("\t\t\t\t*****OUTPUT*****\n");
    if(a<b && a<c)
    {
        printf("Minmum among %d,%d,%d is:%d",a,b,c,a);
    }
    else if(b<a && b<c)
    {
        printf("Minmum among %d,%d,%d is:%d",a,b,c,b);
    }
    else
    {
        printf("Minmum among %d,%d,%d is:%d",a,b,c,c);
    }
    getch();
}
