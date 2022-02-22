#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,count=0,digits;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        digits=(int)log10(a[i])+1;
        if(digits%2==0)
        count++;
    }
    if(count>0)
    printf("%d",count);
}