#include<stdio.h>
void main(){
    int a=10;
    int *ptr=&a;
    printf("%d",*ptr);
    printf("\n%d",a);
    
    printf("\n%d",a);
    printf("\n%d",*ptr);

}