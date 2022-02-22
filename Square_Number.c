#include<stdio.h>
#include<math.h>
int main()
{
    int a,n;
    scanf("%d",&a);
    n=sqrt(a);
    if(n/(sqrt(a))==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}