/*Write a program to add two 1D array of unequal size

Name: Rangoli Dhawan
Roll number: 53
Section:B
*/

#include<stdio.h>
void main()
{
    int a[50]={0},n,b[50]={0},m,c[50],i,l;//variable declared.
     printf("\t\t\t\t*****INPUT*****\n");
    printf("Enter the limit of first array:");
    scanf("%d",&n);//initialization through user input

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//initialization through user input

    }
    printf("Enter the limit of second array:");
     scanf("%d",&m);//initialization through user input
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);//initialization through user input

    }
    //initialization of l
    if(m>n)
    {
        l=m;
    }
    else
    {
        l=n;
    }
     printf("\t\t\t\t*****OUTPUT*****\n");
     printf("Final array:");
    for(i=0;i<l;i++)
    {
        c[i]=a[i]+b[i];//sum calculated
        printf("%d",c[i]);//sum printed
        printf("\t");
    }
}
