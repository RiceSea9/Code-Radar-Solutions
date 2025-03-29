#include<stdio.h>
void fibonacciSeries( int n);
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        int fib[n];
        fib[0]=0;
        fib[1]=1;
        return 0;
    }
    void fibonacciSeries( int n){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d \t",fib[i]);

    }
    printf("\n");
    return 0;
    
}