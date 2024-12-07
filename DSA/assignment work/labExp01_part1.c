#include <stdio.h>

void inputArray(int arr[], int n) {
    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void findLargestAndSmallest(int arr[], int n, int *largest, int *smallest) {
    *largest = arr[0];
    *smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *largest) {
            *largest = arr[i];
        }
        if (arr[i] < *smallest) {
            *smallest = arr[i];
        }
    }
}

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void calculateSumAndAverage(int arr[], int n, int *sum, float *average) {
    *sum = 0;
    for (int i = 0; i < n; i++) {
        *sum += arr[i];
    }
    *average = (float)(*sum) / n;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    inputArray(arr, n);

    int largest, smallest;
    findLargestAndSmallest(arr, n, &largest, &smallest);

    printf("Largest Element: %d\n", largest);
    printf("Smallest Element: %d\n", smallest);

    sortArray(arr, n);
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int sum;
    float average;
    calculateSumAndAverage(arr, n, &sum, &average);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
