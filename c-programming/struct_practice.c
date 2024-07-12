#include<stdio.h>
typedef struct prac
{
   int a;
   char b;
}pra;

void main(){
pra s1;
s1.a=10;
s1.b='a';
printf("%d\n",s1.a);
printf("%c\n",s1.b);
}