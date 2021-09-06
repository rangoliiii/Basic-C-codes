/*Write a program to input n elements in an
array and calculate sum of digit off all no.
using function.

Name: Rangoli Dhawan
Roll number: 53
Section: B
*/
#include<stdio.h>
void main()
{
    int n,a[50],i,j,rem,sum;
    printf("\n\t\t\t*****INPUT*****");
    printf("\nEnter limit of first array(n):");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\t\t\t*****OUTPUT*****");
    printf("\n");
    for(i=0;i<n;i++)
    {
        sum=0;
       for(j=0;j<n;j++)
       {
           rem=a[i]%10;
           sum=sum+rem;
           a[i]=a[i]/10;
       }
       printf("%d\t",sum);

    }

}
