#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char country_name[100];
    printf("Enter the country's name: ");
    fgets(country_name, sizeof(country_name), stdin);
    country_name[strcspn(country_name, "\n")] = 0; 

    char abbrev[4] = ""; 
    char *token = strtok(country_name, " ");
    int i = 0;
    while (token!= NULL && i < 3) {
        abbrev[i] = toupper(token[0]);
        token = strtok(NULL, " ");
        i++;
    }

    printf("The abbreviated form of the country's name is: %s\n", abbrev);

    return 0;
}