#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int i, j, temp;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}