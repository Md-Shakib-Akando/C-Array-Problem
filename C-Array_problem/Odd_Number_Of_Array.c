#include<stdio.h>
int main(){

    int t;
    scanf("%d",&t);

    for(int i=0; i<t; i++){
        int n;
        scanf("%d",&n);
        int ar[n];
        for(int j=0; j<n; j++){
            scanf("%d",&ar[j]);

        }
        int count_odd=0;
        for(int j=0; j<n; j++){
            if(ar[j]%2==1){
                count_odd++;
            }
        }

        printf("%d\n",count_odd);
    }


    return 0;
}