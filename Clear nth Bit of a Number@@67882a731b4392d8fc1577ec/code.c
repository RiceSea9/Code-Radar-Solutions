#include <stdio.h>


int main() {
    int a,b,clrnum;
    scanf("%d %d",&a,&b);
    clrnum=a &(b<<1);
    printf("%d",clrnum);
    return 0;
}