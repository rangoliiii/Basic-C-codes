#include<stdio.h>
void main()
{
int sum=0,a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;
printf("enter number of rows and columns");
scanf("%d%d",&m,&n);
printf("enter the elements of first matrix");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
printf("enter number of rows and columns of second matrix");
scanf("%d%d",&p,&q);
printf("enter elements of second matrix");
for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&b[i][j]);
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
for(k=0;k<p;k++)
{
sum=sum+a[i][k]*b[k][j];
}
c[i][j]=sum;
sum=0;
}
}
printf("product of the matrices:\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
printf("%d\t",c[i][j]);
printf("\n");
}
}
