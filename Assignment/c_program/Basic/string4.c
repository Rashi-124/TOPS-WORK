

#include <stdio.h>
#include <ctype.h>

int countWords(const char *str) {
    int count = 0, i = 0;
    int inWord = 0;  

    while (str[i] != '\0') {
        if (isspace(str[i])) {
            inWord = 0;
        }
        else if (inWord == 0) {
            inWord = 1;
            count++;  
        }
        i++;
    }

    return count;
}

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int wordCount = countWords(str);
    printf("Total number of words: %d\n", wordCount);

}
