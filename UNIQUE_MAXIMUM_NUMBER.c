#include<stdio.h>
int main()
{
    int x[20],n,i,j,flag=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&x[i]);
    }

    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
            if(x[i]==x[j])
            {
            flag=1;
            break;
            }
        }
    }
        if(flag==0)
    {
    if(x[i]>=max)
    {
    max=x[i];
    }
    }
    }
    if(max>0)
    printf("%d",max);
    else
    printf("-1");
    
    
    
    return 0;
}