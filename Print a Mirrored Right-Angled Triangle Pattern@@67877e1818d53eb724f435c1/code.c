#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<rows;i++){
        for(int j=0;j<2*(rows-i)-1;j++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}