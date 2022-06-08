#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i,t,res;
    for(i=0;s[i]!=NULL;i+=2)
    {
        t=s[i]-(s[i+1]-48);
        res=t%26;
        s[i+1]=char(res+97);
    }
    for(i=0;s[i]!=NULL;i++)
    printf("%c",s[i]);
}