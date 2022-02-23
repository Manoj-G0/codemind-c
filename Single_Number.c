#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j] && i != j)
            break;
        }
        if(j == n )
        {
            printf("%d",arr[i]);
        }
    }
}