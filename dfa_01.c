#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string (only 0 and 1): ");
    scanf("%s", str);
    int state = 0; // 0: q0, 1: q1, 2: reject
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch != '0' && ch != '1') {
            printf("Rejected (invalid character: %c)\n", ch);
            return 0;
        }
        if (state == 0) {
            if (ch == '0') {
                state = 1; // expect 'b' next
            }
        } 
        else if (state == 1) {
            if (ch == '1') {
                state = 0; // valid 'ab' pair
            } else {
                state = 2; // 'a' not followed by 'b'
                break;
            }
        }
    }
    if (state == 0) {
        printf("Accepted  (every '0' is followed by '1')\n");
    } else {
        printf("Rejected  (invalid '0' not followed by '1')\n");
    }

    return 0;
}