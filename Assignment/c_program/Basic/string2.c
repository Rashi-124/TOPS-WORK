
#include <stdio.h>

void separateCharacters(const char *str) {
    int i = 0;
    
    while (str[i] != '\0') {
        printf("Character at index %d: %c\n", i, str[i]);
        i++;
    }
}
int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    separateCharacters(str);
}
