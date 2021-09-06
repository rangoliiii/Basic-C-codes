/*Write a program to input n elements in an array and check
whether an inputted number k exist in that array or not.If yes
 than find frequency of number k in array.

Name: Rangoli Dhawan
Roll number: 53
Section: B
*/
#include<stdio.h>
void main()
{
    int n,a[20],k,i,c=0;//variable declared.
     printf("\t\t\t*****INPUT*****\n");
    //initialization through user input
    printf("Enter the limits of first array(n):");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//initialization through user input
    }
    printf("enter the number(k):");
    scanf("%d",&k);//initialization through user input
    for(i=0;i<n;i++)
    {
        if(a[i]%k==0 && a[i]/k==1)//checking if k exists
        {
           c++;
        }

    }
    printf("\t\t\t*****OUTPUT*****\n");
    if(c!=0)
    {
        printf("YES number exist in array \n Frequency=%d:%d",k,c);//required output printed
    }
    else
    {
        printf("no");//required output printed
    }
}
