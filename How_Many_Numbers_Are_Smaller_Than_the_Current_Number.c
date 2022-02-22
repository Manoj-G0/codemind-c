#include<stdio.h>
int main()
{
    int n,a[100],i,count=0,j,b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            count++;
        }
        printf("%d ",count);
        
    }

    
}