#include <stdio.h>
void printArray(int *p)
{
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", p[i]);
        p[i]=99;
        // p++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("\n%d ", p[i]);
        // *p*=2;
        // p++;
    }
}
void main()
{
    int arr[] = {1, 2, 3, 4};
    printArray(arr);
    for (int i=0;i<4;i++){
        printf("\n%d",arr[i]);
    }
}

// #include<stdio.h>
// void main()
// {
//     int arr[]={1,2,3,7,5};
//     int *p=arr;
//     for(int i=0;i<5;i++)
//     {
//     printf("%d ",*p);
//     p++;
//     }
// }

// #include<stdio.h>

// void printz(int *x){
//     printf("The value is: %d",*x);
//     *x=11;
//     printf("\nThe value is: %d",*x);

// }
// void main(){
//     int r=10;
//     printz(&r);
//     printf("\nThe value is: %d\n",r);

// }