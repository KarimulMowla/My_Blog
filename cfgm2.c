#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    char ch;
    printf("Enter a string (length at most 2): ");
    // Read character by character until newline or 2 chars
    while ((ch = getchar()) != '\n') {
        str[i++] = ch;
    }
    // If input length > 2, reject
    if (i > 2) {
        printf("Rejected: Length is more than 2\n");
        return 0;
    }
    // Check if all characters are a or b E->AA,A=a|b|epsilon
    for (int j = 0; j < i; j++) {
        if (str[j] != 'a' && str[j] != 'b') {
            printf("Rejected: Invalid character\n");
            return 0;
        }
    }
    // Accept if length <= 2 and only contains a/b or empty string
    printf("Accepted\n");
    return 0;
}