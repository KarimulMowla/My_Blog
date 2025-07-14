#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string (only a and b): ");
    scanf("%s", str);
    int state = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch != 'a' && ch != 'b') {
            printf("Rejected " );
            return 0;
        }
        if (state == 0) {
            if (ch == 'b') state = 1;
        } 
        else if (state == 1) {
            if (ch == 'a') state = 2;
            else if (ch == 'b') state = 1;
            else state = 0;
        } 
        else if (state == 2) {
            if (ch == 'b') state = 3;
            else if (ch == 'a') state = 0;
        } 
        else if (state == 3) {
            if (ch == 'a') state = 4;  // final accepting state
            else if (ch == 'b') state = 1;
            else state = 0;
        } 
        else if (state == 4) {
            // remain in final state after 'baba' is found
            state = 4;
        }
    }
    if (state == 4) {
        printf("Accepted (contains 'baba')\n");
    } else {
        printf("Rejected (does not contain 'baba')\n");
    }
    return 0;
}