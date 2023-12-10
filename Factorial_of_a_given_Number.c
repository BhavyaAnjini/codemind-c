#include<stdio.h>
int main()
{
    int x,fact=1,n;
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
        fact=fact*x;
    }
        printf("%d ",fact);
}