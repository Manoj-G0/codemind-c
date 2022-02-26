#include<stdio.h>
int main()
{
    int n,i,a[100],r,first=-1,last=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&r);
    for(i=0;i<n;i++)
    {
        if(r!=a[i])
        {
            continue;
        }
        else if(first==-1)
            first=i;
            last=i;
    }
    if(first!=-1)
    {
        printf("%d %d",first,last);
    }
    else
    printf("-1 -1");
    
    
}