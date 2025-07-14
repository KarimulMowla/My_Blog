#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string (only a and b): ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Reject invalid characters
        if (ch != 'a' && ch != 'b') {
            //printf("Rejected ❌ (invalid character: %c)\n", ch);
            return 0;
        }
        // Check if 'a' is followed by 'b'
        if (ch == 'a' && str[i + 1] == 'b') {
            printf("Rejected ❌ ('a' is followed by 'b')\n");
            return 0;
        }
    }
    printf("Accepted ✅ ('a' is never followed by 'b')\n");
    return 0;
}