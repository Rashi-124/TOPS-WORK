

#include <stdio.h>
#include <string.h>
#include <limits.h>

void findLargestAndSmallestWords(const char *str, char *largest, char *smallest) {
    char word[100];
    int maxLen = 0, minLen = INT_MAX;
    
    largest[0] = '\0';
    smallest[0] = '\0'; 

    const char *ptr = str;
    
    while (*ptr) {
        int len = 0;
        while (*ptr && *ptr != ' ') {
            word[len++] = *ptr++;
        }
        word[len] = '\0';  

        if (len > maxLen) {
            maxLen = len;
            strcpy(largest, word);
        }

        if (len > 0 && len < minLen) {
            minLen = len;
            strcpy(smallest, word);
        }

        if (*ptr) ptr++;
    }
}

int main() {
    char str[256];
    char largest[100], smallest[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    findLargestAndSmallestWords(str, largest, smallest);

    printf("Largest word: '%s'\n", largest);
    printf("Smallest word: '%s'\n", smallest);

}
