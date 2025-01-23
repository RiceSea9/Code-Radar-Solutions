#include <stdio.h>


int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    bit=(a>>b)&1;
    printf(bit);
    return 0;
}