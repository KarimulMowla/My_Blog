#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string (only a and b): ");
    scanf("%s", str);
    int len = strlen(str);
    if (len >= 3 && str[len - 3] == 'a' && str[len - 2] == 'b' && str[len - 1] == 'b') {
        // Check if all characters are 'a' or 'b'
        for (int i = 0; i < len; i++) {
            if (str[i] != 'a' && str[i] != 'b') {
                printf("rejected\n");
                return 0;
            }
        }
        printf("accepted\n");
    } else {
        printf("rejected\n");
    }
    return 0;
}