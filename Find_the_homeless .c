#include<stdio.h>
int main()
{
    int n,i,a[100],b[100],c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[j]>=a[i])
            {
                c++;
                b[j]=0;
                break;
            }
        }
    }
    printf("%d",n-c);
}