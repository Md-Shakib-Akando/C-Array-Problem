#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n*7];
    for(int i=0; i<n*7; i++){
        scanf("%d",&ar[i]);
    }

    

    for(int i=0; i<n; i++){
        int weekly_sum=0;
        for(int j=0; j<7; j++){
            weekly_sum+=ar[i*7 + j];
        }

        printf("%d ",weekly_sum);
    }


    return 0;
}