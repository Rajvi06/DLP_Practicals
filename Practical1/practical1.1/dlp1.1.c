//a*bb

#include <stdio.h>
#include <string.h>

int valiPatt(const char *str) {
    int len = strlen(str);

    if (str == NULL || len < 2) {
        return 0;
    }

    if (len == 2) {
        return (str[0] == 'b' && str[1] == 'b') ? 1 : 0;
    }

    for (int i = 0; i < len - 2; i++) {
        if (str[i] != 'a') {
            return 0;
        }
    }

    if (str[len - 2] == 'b' && str[len - 1] == 'b') {
        return 1;
    }

    return 0;
}

int main() {
    char input[50];

    printf("22DCS122\n");
    printf("Enter a string: ");
    scanf("%s", input);

    if (valiPatt(input)) {
        printf("Valid String\n");
    } else {
        printf("Invalid String\n");
    }

    return 0;
}
