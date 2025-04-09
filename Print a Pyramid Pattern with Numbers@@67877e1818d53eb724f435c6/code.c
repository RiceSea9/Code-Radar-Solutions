#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for (int i=1; i<=n; i++){
        for (int j=1; j<=2*n-1; j++){
            if (j>=n+1-i){
                printf("%d ", i);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}