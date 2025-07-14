#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter an arithmetic expression: ");
    scanf("%s", str);

    len = strlen(str);

    // Expression must start and end with a single digit
    if (len % 2 == 0 || !isdigit(str[0]) || !isdigit(str[len - 1])) {
        printf("Rejected\n");
        return 0;
    }

    // Strict pattern: digit, operator, digit, operator, digit ...
    for (i = 0; i < len; i++) {
        if (i % 2 == 0) {
            // Expect digit only
            if (!isdigit(str[i])) {
                printf("Rejected: Expected digit at position %d\n", i);
                return 0;
            }
        } else {
            // Expect operator only
            if (str[i] != '+' && str[i] != '-') {
                printf("Rejected: Expected operator at position %d\n", i);
                return 0;
            }
        }
    }
    printf("Accepted\n");
    return 0;
}