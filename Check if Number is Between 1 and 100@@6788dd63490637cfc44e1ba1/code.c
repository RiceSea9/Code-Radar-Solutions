#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(100>=a && a>=1){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}