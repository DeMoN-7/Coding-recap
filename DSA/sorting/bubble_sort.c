#include <stdio.h>
void main()
{
    int arr[] = {1, 13, 53, 32, 3, 43};
    int l = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < l - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < l - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    for (int i = 0; i < l; i++)
    {
        printf("%d\t", arr[i]);
    }
}