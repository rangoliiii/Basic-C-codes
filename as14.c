/*W.A.P to input elements into sq. matrix
and print secondary diagonal elements.

Name: Rangoli Dhawan
Roll number: 53
Section: B
*/

#include<stdio.h>
int main()
{
    int m,n,i,a[10][10],j;
    printf("\t\t\t***********INPUT**************\n");
    printf("enter m and n: ");
    scanf("%d %d",&m,&n);
    printf("enter elements of matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\t\t\t*********OUTPUT************\n");
    if(m==n)
    {
        printf("the diagonals of given matrix is:\n");
        j=m-1;
        for(i=0;i<n;i++)
        {
            while(j>=0)
            {
                printf("%d ",a[i][j]);
                j--;
                break;
            }
        }
        printf("\n");
    }
    else
    printf("matrix is not sq. matrix");
    return 0;
}
