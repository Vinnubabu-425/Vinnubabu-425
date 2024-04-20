#include <stdio.h>
#include <stdlib.h>
// Selection Sort
void selection_sort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

int main() {
    int num_values;
    printf("Enter the number of values to be stored in the array: ");
    scanf("%d", &num_values); //number of values to be sorted.

    int *arr = (int *)malloc(num_values * sizeof(int)); //memiory allocation
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
//reading the values
    printf("Enter the values:\n");
    for (int i = 0; i < num_values; i++) {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, num_values);

    printf("Sorted array: ");
    for (int i = 0; i < num_values; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
