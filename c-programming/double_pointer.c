#include<stdio.h>
void main(){
    int a=10;
    int * ptr=&a;
    int **ptr2=&ptr;                                                                                            
    printf("%d\n",**ptr2);
    printf("%d\n",*ptr2);//
    printf("%x\n",ptr2);//gives address of the ptr 1 
    printf("%x\n",**ptr2);//gives value of a 
    printf("%x\n",&ptr);//simply gives address of ptr
    printf("%x\n",ptr);//simply gives address of ptr
}