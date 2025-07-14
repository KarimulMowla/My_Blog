#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, len;

    printf("Enter an arithmetic expression: ");
    scanf("%s", str);

    len = strlen(str);

    // The expression must start and end with a digit
    if (!isdigit(str[0]) || !isdigit(str[len - 1])) {
        printf("Rejected\n");
        return 0;
    }

    // Check pattern: digit (operator digit)* (e.g., 1+2-3)
    for (i = 1; i < len - 1; i++) {
        if (i % 2 == 1) {
            if (str[i] != '+' && str[i] != '-') {
                printf("Rejected: Invalid operator at position %d\n", i);
                return 0;
            }
        } else {
            if (!isdigit(str[i])) {
                printf("Rejected: Invalid digit at position %d\n", i);
                return 0;
            }
        }
    }

    printf("Accepted\n");
    return 0;
}