#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        int k = 1;
        for (int j=1; j<=n; j++){
            if (j>=n+1-i){
                printf("%d ", k++);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}