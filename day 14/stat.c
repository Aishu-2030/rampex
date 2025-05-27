#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            str[i] = '*';
        }
    }
    printf("Modified string: %s\n", str);
    return 0;
}