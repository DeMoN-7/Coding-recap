#include<stdio.h>
void main(){
    int arr[2][3]={{1,2,3},{4,9,6}};
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <3; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
        
    }
int *ptr=arr[0];
for (int i = 0; i < 6; i++)
{
    /* code */
printf("%d\t",*ptr);   
ptr++; 
}

}
// wwe