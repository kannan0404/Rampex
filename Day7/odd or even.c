#include <stdio.h>

int main() {
    int arr[] = {4, 7, 2, 9, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}