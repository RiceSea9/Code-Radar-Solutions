#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c&&c==a){
        print("Equilateral");
    }
    else if(a==b&&b==a&&a!=c||a==c&&c==a&&c!=b||c==b&&b==c&&b!=c){
        printf("Isosceles");
    }
    else if(a!=b&&b!=c&&a!=c){
        printf("Scalene");
    }
    return 0;
}