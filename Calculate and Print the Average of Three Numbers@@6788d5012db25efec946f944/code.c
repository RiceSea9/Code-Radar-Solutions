#include <stdio.h>

int main() {
    int a,b,c,avg;
    float sol;
    scanf("%d %d %d",&a,&b,&c);
    avg=a+b+c;
    sol=avg/3;
    printf("Average: %.2f",sol);
    return 0;
}