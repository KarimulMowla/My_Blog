#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string (only a and b): ");
    scanf("%s", str);
    int len = strlen(str);
    // Check for valid characters
    for (int i = 0; i < len; i++) {
        if (str[i] != 'a' && str[i] != 'b') {
            printf("Rejected ❌ (invalid character: %c)\n", str[i]);
            return 0;
        }
    }
    // Check if length is divisible by 2
    if (len % 2 == 0) {
        printf("Accepted ✅ (length is divisible by 2)\n");
    } else {
        printf("Rejected ❌ (length is not divisible by 2)\n");
    }

    return 0;
}