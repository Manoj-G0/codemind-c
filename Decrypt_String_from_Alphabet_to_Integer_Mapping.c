#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],c[100];
    scanf("%s",s);
    int i=0,k=0;
    int len=strlen(s);
    while(i<len)
    {
        if(i+2<len && s[i+2]=='#')
        {
            c[k++]=(s[i]-'0')*10+(s[i+1]-'0')-10+'j';
            i+=3;
        }
        else
        {
            c[k++]=s[i]-'1'+'a';
            i++;
        }
    }
    c[k]=NULL;
    for(i=0;i<k;i++)
    printf("%c",c[i]);
    
}