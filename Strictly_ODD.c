#include<stdio.h>
int main()
{
    int a[100],n,i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i+=2)
    {
        if(a[i]%2!=0)
        {
            
            count++;
            printf("False");
            break;
        }
        
    }
    if(count==0)
    {
        printf("True");
    }
}