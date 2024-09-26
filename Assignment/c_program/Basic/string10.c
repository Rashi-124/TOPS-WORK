 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void extractSubstring(char *source, int start, int length, char *result) {
    int sourceLength = strlen(source);
    
    if (start < 0 || start >= sourceLength || length < 0 || (start + length) > sourceLength) {
        printf("Invalid start index or length.\n");
        result[0] = '\0';  
        return;
    }
    
    strncpy(result, source + start, length);
    result[length] = '\0';  
}

int main() {
    char source[100], result[100];
    int start, length;

    printf("Enter the original string: ");
    fgets(source, sizeof(source), stdin);
    
    source[strcspn(source, "\n")] = 0;

    printf("Enter start index: ");
    scanf("%d", &start);
    printf("Enter length of substring: ");
    scanf("%d", &length);

    extractSubstring(source, start, length, result);

    printf("Extracted substring: '%s'\n", result);

}
