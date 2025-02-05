#include <stdio.h>


int main() {
    int a,i,j,k,l,m,n;
    scanf("%d",&a);
    for( i=0;i<a;i++){
        for( j=0;j<a-i;j++){
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++){
            printf("*");
        }
        printf("\n");
    }
    for(l=0;l<a;l++){
        for(m=0;m<a-l;m++){
            printf(" ");
        }
        for(int n=0;n<=2*l+1;n++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}