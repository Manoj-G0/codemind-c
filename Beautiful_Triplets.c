#include<stdio.h>
int main()
{
    int n,max=0,k=0,i,c;
    scanf("%d",&n);
    int a[100];
    for(i=0;i<100;i++)
        a[i]=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&c);
        if(c>max)
        max=c;
        a[c]++;
    }
    printf("%d
",n);
    for(i=1;i<max;i++)
    {
        if(a[i])
        {
            k+=a[i];
            printf("%d
",n-k);
            
        }
    }
    return  0;
}