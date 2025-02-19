#include<stdio.h>
int main()
{
    int n ,m;
    scanf("%d %d",&n,&m);

    int ar[n];

    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);

    }

    for(int i=n-m; i<n; i++)
    {
        printf("%d ",ar[i]);
    }

    for(int i=0; i<n-m; i++)
    {
        printf("%d ",ar[i]);
    }
    
    printf("\n");
    return 0;
}