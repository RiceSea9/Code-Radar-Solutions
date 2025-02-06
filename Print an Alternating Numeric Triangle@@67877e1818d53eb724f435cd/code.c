#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            printf("%d",(j % 2) ? 1 : 0);
        }
        printf("\n");
    }
    return 0;
}