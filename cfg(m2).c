#include <stdio.h>
#include <string.h>

int main() {
    char str[10];
    printf("Enter a string (length at most 2): ");
    scanf("%s", str);

    int len = strlen(str);

    if (len > 2) {
        printf("Rejected: Length is more than 2\n");
        return 0;
    }

    // Check if all characters are from {a, b}
    for (int i = 0; i < len; i++) {
        if (str[i] != 'a' && str[i] != 'b') {
            printf("Rejected: Invalid character\n");
            return 0;
        }
    }

    // All strings of a, b up to length 2 are valid by S → AA and A → a|b|ε
    printf("Accepted\n");
    return 0;
}