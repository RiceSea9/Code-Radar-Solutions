#include <stdio.h>


int main() {
    int a,b;
    scanf("%d",&a,&b);
    if(a==b||b==a){
        printf("Equal");
    }
    else if(a>b){
        printf("First");
    }
    else if(b>a){
        printf("Second");
    }
    return 0;
}