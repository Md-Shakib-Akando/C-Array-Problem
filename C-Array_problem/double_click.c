#include<stdio.h>
int main()
{
    int n,d;
    scanf("%d %d",&n,&d);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    int sub;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<=n; j++){
            if(ar[i]<a[j]){
                sub=ar[j]-ar[i];
                if(sub==d){
                    print("%d",ar[j]);
                    break;
                }
            }

            
        }
    }

    
    
    return 0;
}