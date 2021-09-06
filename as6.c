/*Write a program which will take a
 number and print its reverse along
 with the number of digits present in that number

Name: Rangoli Dhawan
Roll number: 53
Section: B
*/

#include<stdio.h>
void main()
{
    int n,c,rem,rev=0;
    printf("\t\t\t*****INPUT*****\n");
    printf("enter number:");
    scanf("%d",&n);
    printf("\t\t\t*****OUTPUT*****\n");
    c=0;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        c++;
    }
    printf("reverse of the number: %d",rev);
    printf("\n Number of digits: %d",c);
}
