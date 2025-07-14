#include <stdio.h>
#include <string.h>
int main() {
    char bin[100];
    printf("Enter a binary number (only 0 and 1): ");
    scanf("%s", bin);
    int len = strlen(bin);
    // Check for valid binary digits
    for (int i = 0; i < len; i++) {
        if (bin[i] != '0' && bin[i] != '1') {
            printf("Rejected ❌ (invalid character: %c)\n", bin[i]);
            return 0;
        }
    }
  // Check if last bit is 0 (divisible by 2)
    if (bin[len - 1] == '0') {
        printf("Accepted ✅ (binary is divisible by 2)\n");
    } else {
        printf("Rejected ❌ (binary is not divisible by 2)\n");
    }
    return 0;
}