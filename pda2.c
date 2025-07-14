#include <stdio.h>
int main() {
    char str[100];
    int i = 0, count_a = 0, count_b = 0, count_c = 0;

    printf("Enter string (format: a^i b^j c^k): ");
    scanf("%s", str);

    // Count 'a's
    while (str[i] == 'a') {
        count_a++;
        i++;
    }

    // Count 'b's
    while (str[i] == 'b') {
        count_b++;
        i++;
    }

    // Count 'c's
    while (str[i] == 'c') {
        count_c++;
        i++;
    }

    // Check if input ends and counts are > 0 and (i==j or i==k)
    if (str[i] == '\0' && count_a > 0 && count_b > 0 && count_c > 0 &&
        (count_a == count_b || count_a == count_c)) {
        printf("Accepted\n");
    } else {
        printf("Rejected\n");
    }

    return 0;
}