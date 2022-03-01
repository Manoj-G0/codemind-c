#include<stdio.h>
#include<string.h>
int main()
{
    int t,j,n=0,i;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        char s[4];
        scanf("%s",&s);
            if(strcmp(s,"++X")==0 || strcmp(s,"X++")==0)
            n=n+1;
            else if(strcmp(s,"--X")==0 || strcmp(s,"X--")==0)
            n=n-1;
             n=n;
    }
    printf("%d",n);
}