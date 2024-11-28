#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[100];
    int length;
    char *substring;

    // Input strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character

    // 1. String Length
    length = strlen(str1);
    printf("Length of the first string: %d\n", length);

    // 2. String Copy
    strcpy(str3, str1);
    printf("After copying, str3: %s\n", str3);

    // 3. String Concatenation
    strcat(str3, " ");
    strcat(str3, str2);
    printf("After concatenation, str3: %s\n", str3);

    // 4. String Comparison
    if (strcmp(str1, str2) == 0) {
        printf("The two strings are equal.\n");
    } else {
        printf("The two strings are not equal.\n");
    }

    // 5. Finding a Substring
    substring = strstr(str1, str2);
    if (substring != NULL) {
        printf("Substring '%s' found in '%s' at position: %ld\n", str2, str1, substring - str1);
    } else {
        printf("Substring '%s' not found in '%s'.\n", str2, str1);
    }

    // 6. String Reverse
    strrev(str1);
    printf("Reversed first string: %s\n", str1);

    return 0;
}
