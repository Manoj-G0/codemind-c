#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a[100];
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        int f=0;
        for(int i=0;i<n;i++)
        {
            int s=0,k=0;
            for(int j=0;j<i;j++)
            {
                s+=a[j];
            }
            for(int j=i+1;j<n;j++)
            {
                k+=a[j];
            }
            if(k==s)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        printf("YES
");
        else
        printf("NO
");
    }
}