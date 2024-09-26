

#include <stdio.h>

void combineStrings(char *str1, const char *str2) {
    while (*str1 != '\0') {
        str1++;
    }

    while (*str2 != '\0') {
        *str1 = *str2;  
        str1++;        
        str2++;        
    }

    *str1 = '\0';
}

int main() {
    char str1[100], str2[50];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    str2[strcspn(str2, "\n")] = 0;

    combineStrings(str1, str2);

    printf("Combined string: %s\n", str1);

}
