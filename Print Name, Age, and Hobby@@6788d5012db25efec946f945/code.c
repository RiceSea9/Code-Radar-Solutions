#include <stdio.h>

int main() {
    int a;
    char str1[100];
    char str2[100];
    scanf("%s %d %s",&str1,&a,&str2);
    printf("Name: %s\nAge: %d\nHobby: %s",str1,a,str2);
    return 0;
}