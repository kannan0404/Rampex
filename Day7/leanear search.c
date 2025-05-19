#include <stdio.h>

int main() {
    int arr[] = {8, 10, 11, 12, 50, 99};
    int key, i;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (i = 0; i < 6; i++) {
        if (arr[i] == key) {
            printf("Yes\n");
            return 0;
        }
    }

    printf("No\n");
    return 0;
}
