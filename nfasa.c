#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int state = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    if (str[0] == 'a') {
        state = 1; // valid start
    } else {
        state = -1; // invalid start
    }
       // Check rest of the characters
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'b') {
            state = -1; // invalid character
            break;
        }
    }
    if (state == 1)
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}