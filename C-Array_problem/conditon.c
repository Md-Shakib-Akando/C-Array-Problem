#include<stdio.h>
int main()
{
    
    int ar[8];
    for(int i=0; i<8; i++){
        scanf("%d",&ar[i]);
    }
   
    for(int i=0; i<8; i++){
       if(ar[i]<100 || ar[i]>675){
        printf("No\n");
        return 0;
       }
       if(ar[i]%25!=0){
        printf("No\n");
        return 0;
       }

      
    }

    for (int i = 1; i < 8; i++) {
        if (ar[i] < ar[i - 1]) {
            printf("No\n");
            return 0;
        }
    }
    
    printf("Yes\n");
    return 0;
}