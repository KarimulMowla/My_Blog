#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string (only a and b): ");
    scanf("%s", str);
    int state = 0; // 0: q0, 1: q1, 2: reject
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch != 'a' && ch != 'b') {
            printf("Rejected ❌ (invalid character: %c)\n", ch);
            return 0;
        }
        if (state == 0) {
            if (ch == 'a') {
                state = 1; // expect 'b' next
            }
        } 
        else if (state == 1) {
            if (ch == 'b') {
                state = 0; // valid 'ab' pair
            } else {
                state = 2; // 'a' not followed by 'b'
                break;
            }
        }
    }
    if (state == 0) {
        printf("Accepted ✅ (every 'a' is followed by 'b')\n");
    } else {
        printf("Rejected ❌ (invalid 'a' not followed by 'b')\n");
    }

    return 0;
}