#include<stdio.h>
void main(){
    int arr[]={1,2,3,4,5,6};
    int n=6,i=0;
    int del=3;
    for (i=0;i<n;i++){
        if (arr[i]==del){
            break;
        }
    }
    for (i;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[i]=0;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    // printf("%d",i);
}