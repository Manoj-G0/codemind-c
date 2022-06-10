#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *s;
    s=(char *)malloc(0*sizeof(char));
    scanf("%s",s);
    long int n,c,k,i; 
    scanf("%ld",&n);
    c=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a')
        c++;
    }
    k=n%i;
    n=n/i;
    c=c*n;
    n=0;
    for(i=0;i<k;i++)
        if(s[i]=='a')
        n++;
        printf("%ld",c+n);
    return 0;
}