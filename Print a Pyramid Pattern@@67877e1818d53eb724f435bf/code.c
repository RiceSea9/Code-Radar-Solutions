#include <stdio.h>


int main() {
    int a,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;j<a-i;j++){
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}