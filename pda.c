#include <stdio.h>

int main() {
    char str[100];
    int i = 0, count = 0;

    printf("Enter string (a^n b^n): ");
    scanf("%s", str);

    // Count number of a's
    while (str[i] == 'a') {
        count++;
        i++;
    }

    // Subtract for each b
    while (str[i] == 'b') {
        count--;
        i++;
    }

    // Accepted if all input is read and count is zero
    if (str[i] == '\0' && count == 0)
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}