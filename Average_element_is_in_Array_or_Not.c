#include<stdio.h>
int main()
{
    int n,i,sum=0,flag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int avg;
    for(i=0;i<n;i++)
    {
       sum=sum+a[i];
    }
    avg=(float)sum/n;
    for(i=0;i<n;i++)
    if(avg==a[i])
    {
        flag=1;
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}