#include<stdio.h>
int main()
{
    int n,i,k=0;
    char s[100];
    scanf("%d",&n);
    while(n)
    {
        int r=(n-1)%26;
        s[k++]= r+'A';
        n=(n-1)/26;
    }
    for(i=k-1;i>=0;i--)
    printf("%c",s[i]);
}