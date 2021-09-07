#include<stdio.h>
void main()
{
    int a[20],i,j,n,temp;
     printf("Enter the value n");
    scanf("%d",&n);
    printf("enter the nos.");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            }
        }
        for(i=0;i<n;i++)
    printf("%d ",a[i]);

}

