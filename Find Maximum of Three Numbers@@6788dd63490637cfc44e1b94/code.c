#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d",a);
        }
    }
    else if(b>a){
        if(b>c){
            printf("%d",b);
        }
    }
    else{
        printf("%d",c);
    }
    return 0;
}