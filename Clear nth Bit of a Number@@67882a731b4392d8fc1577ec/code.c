#include <stdio.h>

int main() {
    int a, b, clrnum;
    scanf("%d %d", &a, &b);
    
    // Ensure b is positive before shifting
    if (b < 0) {
        printf("Invalid input for b\n");
        return 1;
    }

    clrnum = a & (b >> 1);
    printf("%d\n", clrnum);
    
    return 0;
}
