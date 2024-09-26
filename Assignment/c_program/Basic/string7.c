
#include <stdio.h>

void copyString(char *destination, const char *source) {
    int i = 0;

    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';
}

int main() {
    char source[100], destination[100];

    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);

    copyString(destination, source);

    printf("Copied string: %s", destination);

}
