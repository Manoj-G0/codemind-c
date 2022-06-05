#include<stdio.h>
int  sarray(int a[],int n,int k)
{
    int temp,i,j;
    for(i=0;i<n;i++)
    {
        temp=a[i];
        for(j=i+1;j<n+1;j++)
        {
            if(temp==k)
            {
                printf("%d %d
",i+1,j);
                return 1;
            }
            else if(temp>k || j==n)
            {
                break;
            }
            temp+=a[j];
        }
        
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,a[100],i,j,temp;
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int t=sarray(a,n,k);
        if(t!=1)
        {
            printf("-1
");
        }
    }
}