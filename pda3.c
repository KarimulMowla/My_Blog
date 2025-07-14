#include <stdio.h>

int main() {
    char str[100];
    int i = 0, countA = 0, countB = 0, countC = 0;

    printf("Enter string (a^i b^j c^k): ");
    scanf("%s", str);

    // Count a's
    while (str[i] == 'a') {
        countA++;
        i++;
    }

    // Count b's
    while (str[i] == 'b') {
        countB++;
        i++;
    }

    // Count c's
    while (str[i] == 'c') {
        countC++;
        i++;
    }

    // Check order is correct and either i=j or i=k
    if (str[i] == '\0' && (countA == countB || countA == countC)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }

    return 0;
}