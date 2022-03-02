#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,i,count=0,sum=0,j,p=0,h=0,b[100],k=0,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
        
    }
    if(count==2)
    {
        
        while(n!=0)
        {
            r=n%10;
            b[k]=r;
            k++;
            n=n/10;
        }
    for(i=0;i<k;i++)
    {  sum=0;
        for(j=1;j<=b[i];j++)
        {
            if(b[i]%j==0)
            sum++;
        }
      if(sum==2)
       m++;
    }
    if(m==k)
    printf("Mega Prime");
    else
    printf("Not Mega Prime");
    
    }
    else
    printf("Not Mega Prime");
}