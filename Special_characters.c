#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isalnum(char ch)
{
    if((ch>='0' && ch<='9') ||(ch>=97 && ch<=122) || (ch>=65 && ch<=90))
    return 1;
    return 0;
}
int isdigit(char ch)
{
    if(ch>='0' && ch<='9')
    return 1;
    return 0;
}
int main()
{
    char s[100];
    scanf("%s",s);
    int i,c=0,a[100],b[100],v=0,u=0,l[100],m;
    for(i=0;s[i]!=NULL;i++)
    {
        if(isalnum(s[i])==0)
        {
            c++;
        }
        else if(isdigit(s[i]))
        {
            if(int(s[i])%2==0)
            {
                a[u++]=s[i]-'0';
            }
            else
            {
                b[v++]=s[i]-'0';
            }
            
        }
    }
    if(c%2==1)
    {
        for(i=0;i<u;i++)
        l[i]=a[i];
        for(i=0;i<v;i++)
        a[i]=b[i];
        for(i=0;i<u;i++)
        b[i]=l[i];
    }
    if(v>u)
    m=v;
    else
    m=u;
    int p=0,q=0;
    for(i=0;i<m;i++)
    {
        if(p!=u)
        {
            printf("%d",a[p]);
            p++;
        }
        if(q!=v)
        {
            printf("%d",b[q]);
            q++;
        }
    }
}