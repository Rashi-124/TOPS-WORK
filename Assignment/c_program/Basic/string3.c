

#include <stdio.h>

int stringLength(const char *str) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}

void printReverse(const char *str) {
    int length = stringLength(str);

    for (int i = length - 2; i >= 0; i--) { 
        printf("Character at index %d: %c\n", i, str[i]);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printReverse(str);

}
