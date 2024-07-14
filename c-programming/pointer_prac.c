#include<stdio.h>
void main(){
    int a=10;
    char x='x';
    int *ptr=&a;
    printf("%d",*ptr);
    printf("\n%d",a);
    *ptr+=11;
    printf("\n%d",a);
    printf("\n%x",ptr);
    printf("\n%d",&x);
    printf("\n%x",&x);
    
}