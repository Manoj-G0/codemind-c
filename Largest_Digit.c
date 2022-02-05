#include<stdio.h>
int main()
{
    int n,i,a[100],temp=0,j,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        a[j]=r;
        n=n/10;
        j++;
    }
    for(i=0;i<j;i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        
    }
    printf("%d",a[j]);
    
}