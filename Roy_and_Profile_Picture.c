#include<stdio.h>
int main()
{
    int l,t,j;
    scanf("%d",&l);
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
        int w,h;
        scanf("%d%d",&w,&h);
        if(w<l || h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(w==h)
        printf("ACCEPTED
");
        else
        printf("CROP IT
");
    }
}