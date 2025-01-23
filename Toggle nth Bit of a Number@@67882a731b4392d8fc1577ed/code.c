#include <stdio.h>


int main() {
    int a,b,new;
    scanf("%d %d",&a,&b);
    new=a^(1<<b);
    printf("%d",new);
    return 0;
}