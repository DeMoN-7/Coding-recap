#include<stdio.h>
void main(){
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
    printf("\nEnter the value of array");
    scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}