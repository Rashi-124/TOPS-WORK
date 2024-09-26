#include <stdio.h>
#include <string.h>

#define MAX_NAMES 5
#define MAX_NAME_LENGTH 40

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];

    printf("Enter 5 names:\n");

    for (int i = 0; i < MAX_NAMES; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], MAX_NAME_LENGTH, stdin);
        names[i][strcspn(names[i], "\n")] = 0;
    }

    printf("\nYou entered the following names:\n");

    for (int i = 0; i < MAX_NAMES; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }

    return 0;
}