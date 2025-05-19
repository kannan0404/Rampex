#include <stdio.h>

int main() {
    int roll[5];
    int marks[5][3];
    int total[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &roll[i]);

        printf("Enter marks for 3 subjects:\n");
        total[i] = 0;
        for (int j = 0; j < 3; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total[i] += marks[i][j];
        }
        printf("\n");
    }

    printf("Roll No\tMarks1\tMarks2\tMarks3\tTotal\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", roll[i]);
        for (int j = 0; j < 3; j++) {
            printf("%d\t", marks[i][j]);
        }
        printf("%d\n", total[i]);
    }

    return 0;
}
