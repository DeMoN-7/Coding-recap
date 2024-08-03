// 2875925324
#include<stdio.h>
#include<math.h>
int main(){
    int num=21;
    for (int i = 2; i < num/2; i++)
    {
        if(num%i==0)
        {
            printf("\nNot Prime\a");
            return 0;
        }

    }
    printf("Prime");
    return 0;
    
}