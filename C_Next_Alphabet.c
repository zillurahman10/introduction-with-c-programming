#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);

    if (a == 'z') {
        char nextChar = 'a';
        printf("%c\n", nextChar);
    } else if (a >= 'a' && a < 'z') {
        char nextChar = a + 1;
        printf("%c\n", nextChar);
    }

    return 0;
}
