
#include <stdio.h>
#include <string.h>

int countWordOccurrences(const char *str, const char *word) {
    int count = 0;
    const char *temp = str;

    while ((temp = strstr(temp, word)) != NULL) {
        count++;
        temp += strlen(word);  
    }

    return count;
}

int main() {
    char str[100];
    const char *word = "is";

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    int count = countWordOccurrences(str, word);

    printf("The word '%s' appears %d times in the given string.\n", word, count);

}
