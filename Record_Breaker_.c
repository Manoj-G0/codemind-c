#include<stdio.h>
int main()
{
    int t,k=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,c=0,m=-1;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            if(i==n-1 && a[i]>m)
            {
                c++;
            }
            else if(i==0 && a[i]>a[i+1])
            {
                c++;
            }
            else if(a[i]>m && a[i]>a[i+1])
            {
                c++;
            }
            if(a[i]>m)
            m=a[i];
            else
            m=m;
        }
        printf("Case #%d: %d
",k,c);
        k++;
    }
    
}