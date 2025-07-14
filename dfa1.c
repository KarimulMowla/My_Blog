#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string (only a and b): ");
    scanf("%s", str);
    if (str[0] != 'a') {
        printf("Rejected\n");
        return 0;
    }
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != 'a' && str[i] != 'b') {
            printf("Rejected \n");
            return 0;
        }
    }
    printf("Accepted \n");
    return 0;
}