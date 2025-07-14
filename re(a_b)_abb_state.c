#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int state = 0;
    printf("Enter a string (only a and b): ");
    scanf("%s", str);  // Read the whole string at once

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (state == 0) {
            if (ch == 'a') state = 1;
            else if (ch == 'b') state = 0;
            else { printf("rejected\n"); return 0; }
        }
        else if (state == 1) {
            if (ch == 'a') state = 1;
            else if (ch == 'b') state = 2;
            else { printf("rejected\n"); return 0; }
        }
        else if (state == 2) {
            if (ch == 'b') state = 3;
            else if (ch == 'a') state = 1;
            else { printf("rejected\n"); return 0; }
        }
        else if (state == 3) {
            if (ch == 'a') state = 1;
            else if (ch == 'b') state = 0;
            else { printf("rejected\n"); return 0; }
        }
    }
    if (state == 3)
        printf("accepted\n");
    else
        printf("rejected\n");

    return 0;
}