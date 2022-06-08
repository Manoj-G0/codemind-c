#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i,a[100],p1=0,p2=strlen(s),k=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='I')
        {
            a[k++]=p1;
            p1++;
        }
        else
        {
            a[k++]=p2;
            p2--;
        }
    }
    a[k++]=p1;
    for(i=0;i<k;i++)
    {
        printf("%d ",a[i]);
    }
}