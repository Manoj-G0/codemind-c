#include <stdio.h>
void fun(int a[], int n)
{
    int i,j,sum=0,k=-1,s=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]==0)
        {
            sum=-1;
        }
        else
        {
            sum=1;
        }
        for(j=i+1;j<n;j++)
        {
            if(a[j]==0)
            {
                sum--;
            }
            else
            {
                sum++;
            }
            if(sum==0 && k<j-i+1)
            {
                k=j-i+1;
                s=i;
            }
        }
    }
    if(k==-1)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d",s,s+k-1);
    }
    
}
int main()
{
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    fun(a,n);
}