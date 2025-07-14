#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string (only a and b): ");
    scanf("%s", str);
    // Check length
    if (strlen(str) != 2) {
        printf("Rejected ❌ (length is not exactly 2)\n");
        return 0;
    }
    // Optional: check for valid characters
    for(int i=0;i<2;i++){
    if (str[i] != 'a' && str[i] != 'b') {
        printf("Rejected ❌ (invalid characters found)\n");
        return 0;
    }
}
    printf("Accepted ✅ (length is exactly 2)\n");
    return 0;
}