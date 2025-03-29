#include<stdio.h>
int countoddnumbers(int *arr,int n);
int countevennumbers(int *arr,int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int oddcount=0;
        int evencount=0;
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    printf("%d %d",evencount,oddcount);
}