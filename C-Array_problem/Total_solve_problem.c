#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int p[n];
    int s[m];

    for(int i=1; i<=n; i++){
        scanf("%d",&p[i]);
    }
    
    for(int i=1; i<=s; i++){
        scanf("%d",&s[i]);
    }
    

    int sum=0;

    for(int i=1; i<=m; i++){
        int t=s[i];
        
            sum+=p[t];
        
    }

    printf("%d",sum);
    return 0;
}