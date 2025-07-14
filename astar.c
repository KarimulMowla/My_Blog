#include <stdio.h>
int main() {
    char ch;
    printf("Enter a string:\n");
    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (ch != 'a') {
            printf("rejected\n");
            return 0;
        }
    }
    printf("accepted\n");
    return 0;
}
wh