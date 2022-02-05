#include<stdio.h>
int main()
{
    int n,count=0,sum=0,i,r;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        r=n%10;
        if(r%2==0)
        {
            count++;
        }
        else
        sum++;
        n=n/10;
    }
    
    if(count==i)
    printf("Even");
    else if(sum==i)
    {
        printf("Odd");
        
    }
    else
    printf("Mixed");
}