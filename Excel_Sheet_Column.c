#include<stdio.h>
int main()
{
    int n,a[100],c=0,m=0;
    scanf("%d",&n);
    char s[100],k=0;
    while(n!=0)
    {
        int r=(n-1)%26;
        s[k++]=(char)(r+'A');
        n=(n-1)/26;
    }
    for(int i=k-1;i>=0;i--)
    printf("%c",s[i]);
}