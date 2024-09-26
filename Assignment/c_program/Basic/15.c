#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char school_name[100];
    printf("Enter the school's name: ");
    fgets(school_name, sizeof(school_name), stdin);
    school_name[strcspn(school_name, "\n")] = 0; 
    char abbrev[100] = "";
    char *token = strtok(school_name, " ");
    while (token!= NULL) {
        abbrev[0] = toupper(token[0]); 
        strcat(abbrev, &abbrev[1]); 
        token = strtok(NULL, " ");
    }

    printf("The abbreviated form of the school's name is: %s\n", abbrev);

    return 0;
}