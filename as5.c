/*Write a program to print
following patterns:
    1
   121
  12321
 1234321
123454321

Name: Rangoli Dhawan
Roll number: 53
Section: B
*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,k,n;
    printf("\t\t\t\t*****INPUT*****\n");
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("\t\t\t\t*****OUTPUT*****\n");
    for(i=1;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            printf(" ");
        }
        for(j=1,k=2*i-1;j<=2*i-1;j++,k--)
        {
            if(j<=k)
            {
            printf("%d",j);
            }
            else
               {
                printf("%d",k);
               }
        }
        printf("\n");
    }
    getch();
}
