#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",((i+j) % 2) ? 0 : 1);
        }
        printf("\n");
    }
    return 0;
}