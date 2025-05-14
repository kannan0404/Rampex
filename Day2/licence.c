#include <stdio.h>
#include <string.h>

int main() {
    int age = 18;
    char license_name[] = "Alice";
    char registered_name[] = "Alice";

    if (age >= 18 && strcmp(license_name, registered_name) == 0) {
        printf("Access granted: You are 18 or older and the license matches.\n");
    } else {
        if (age < 18) {
            printf("Access denied: You must be 18 or older.\n");
        }
        if (strcmp(license_name, registered_name) != 0) {
            printf("Access denied: License name does not match.\n");
        }
    }

    return 0;
}
