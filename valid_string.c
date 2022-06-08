#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i,c=0,a[26]={0};
    int len=strlen(s),k;
    for(i=0;i<len;i++)
    {
        a[s[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]!=0)
        {
            k=a[i];
            break;
        }
    }
    for(i=0;i<26;i++)
    {
        if(a[i]!=k && a[i]!=0)
        {
            c++;
        }
    }
    if(c==1 || c==0)
    printf("Valid String");
    else
    printf("Not Valid");
}