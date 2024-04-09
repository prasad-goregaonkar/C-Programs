#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void firstOccurrence(const char str[], char ch) {
    const char *result = strchr(str, ch);
    if (result != NULL)
        printf("The character '%c' was found at index %ld.\n", ch, result - str);
    else
        printf("The character '%c' was not found in the string.\n", ch);
}

void firstOccurrenceStr(const char str[], const char substr[]) {
    const char *result = strstr(str, substr);
    if (result != NULL)
        printf("The substring '%s' was found.\n", substr);
    else
        printf("The substring '%s' was not found in the string.\n", substr);
}

void splitToken(const char str[], const char delimiters[]) {
    char *token = strtok(str, delimiters);
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, delimiters);
    }
}

int main() {
    char str[100];
    char substr[100];
    char ch;
    int input;
    const char delimiters[] = " .,";
    
    do {
        printf("\nSelect Operation:\n");
        printf("1. String Length\n");
        printf("2. Concatenate Strings\n");
        printf("3. Concatenate Specified Number of Characters\n");
        printf("4. Copy String\n");
        printf("5. Copy String up to Specified Length\n");
        printf("6. Compare Strings\n");
        printf("7. Compare Strings up to 'n' characters ignoring case sensitivity\n");
        printf("8. Compare Strings ignoring case sensitivity\n");
        printf("9. Uppercase\n");
        printf("10. Lowercase\n");
        printf("11. Reverse String\n");
        printf("12. Find First Occurrence of Character\n");
        printf("13. Find First Occurrence of Substring\n");
        printf("14. Split String into Tokens\n");
        printf("15. Find characters in string\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &input);

        switch (input) {
            case 1:
                printf("Enter a String: ");
                scanf("%s", str);
                printf("Length of given string: %lu\n", strlen(str));
                break;
            case 2:
                printf("Enter Two Strings: ");
                scanf("%s %s", str, substr);
                strcat(str, substr);
                printf("Concatenated String: %s\n", str);
                break;
            case 3:
                printf("Enter Substring & String: ");
                scanf("%s %s", substr, str);
                printf("Enter Length: ");
                scanf("%d", &length);
                strncat(str, substr, length);
                printf("Concatenated String: %s\n", str);
                break;
            case 4:
                printf("Enter String: ");
                scanf("%s", str);
                strcpy(str1, str);
                printf("Copied String: %s\n", str);
                break;
            case 5:
                printf("Enter String: ");
                scanf("%s", str);
                printf("Enter Length: ");
                scanf("%d", &length);
                strncpy(str1, str, length);
                printf("Copied String up to length %d: %s\n", length, str);
                break;
            case 6:
                printf("Enter Two Strings: ");
                scanf("%s %s", str, substr);
                if (strcmp(str, substr) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;
            case 7:
                printf("Enter Two Strings: ");
                scanf("%s %s", str, substr);
                printf("Enter Length up to Compare: ");
                scanf("%d", &length);
                if (strncasecmp(str, substr, length) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;
            case 8:
                printf("Enter Two Strings: ");
                scanf("%s %s", str, substr);
                if (strcasecmp(str, substr) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;
            case 9:
                printf("Enter String: ");
                scanf("%s", str);
                printf("Uppercase: ");
                for (int i = 0; str[i] != '\0'; i++)
                    printf("%c", toupper(str[i]));
                printf("\n");
                break;
            case 10:
                printf("Enter String: ");
                scanf("%s", str);
                printf("Lowercase: ");
                for (int i = 0; str[i] != '\0'; i++)
                    printf("%c", tolower(str[i]));
                printf("\n");
                break;
            case 11:
                printf("Enter String: ");
                scanf("%s", str);
                printf("Reversed String: ");
                for (int i = strlen(str) - 1; i >= 0; i--)
                    printf("%c", str[i]);
                printf("\n");
                break;
            case 12:
                printf("Enter String: ");
                scanf("%s", str);
                printf("Enter Character to Search: ");
                scanf(" %c", &ch);
                firstOccurrence(str, ch);
                break;
            case 13:
                printf("Enter String: ");
                scanf("%s", str);
                printf("Enter Substring to Search: ");
                scanf("%s", substr);
                firstOccurrenceStr(str, substr);
                break;
            case 14:
                printf("Enter String: ");
                scanf("%s", str);
                splitToken(str, delimiters);
                break;
            case 15:
                printf("Enter String: ");
                scanf("%s", str);
                char *ptr = strpbrk(str, "abcde");
                if (ptr != NULL) {
                    printf("Found character '%c' at position: %ld\n", *ptr, ptr - str);
                } else {
                    printf("No characters found.\n");
                }
                break;
            case 0:
                printf("Exiting.\n");
                break;
            default:
                printf("Invalid Choice.\n");
        }
    } while (input != 0);

    return 0;
}
