#include<stdio.h>
int main()
{
    char s[100][100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%s",s);
        }
    }
    printf("%s",s[0]);
}