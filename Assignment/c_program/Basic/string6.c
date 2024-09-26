 

#include <stdio.h>
#include <ctype.h>

void countCharacters(const char *str, int *alphabets, int *digits, int *special) {
    int i = 0;
    *alphabets = 0;
    *digits = 0;
    *special = 0;

    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            (*alphabets)++;  
        } else if (isdigit(str[i])) {
            (*digits)++;
        } else if (!isspace(str[i])) {
            (*special)++;  
        }
        i++;
    }
}

int main() {
    char str[200];
    int alphabets, digits, special;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countCharacters(str, &alphabets, &digits, &special);

    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", special);

}
