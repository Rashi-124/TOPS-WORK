

#include <stdio.h>
#include <ctype.h>

void removeNonAlphabetic(char *str) {
    char *ptr = str;  
    char *result = str;  

    while (*ptr != '\0') {
        if (isalpha((unsigned char)*ptr)) {  
            *result = *ptr;  
            result++;
        }
        ptr++;  
    }
    
    *result = '\0';  
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    removeNonAlphabetic(str);

    printf("Modified string: %s\n", str);

}
