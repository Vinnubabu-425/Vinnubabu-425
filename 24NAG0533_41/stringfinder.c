#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error: Please provide a valid input.\n");
        return 1;
    }

    char *input = argv[1];
    int numeric = 1;
    int alphabetic = 1;

    for (int i = 0; i < strlen(input); i++) {
        if (!isdigit(input[i])) {
            numeric = 0;
        }
        if (!isalpha(input[i])) {
            alphabetic = 0;
        }
    }

    if (numeric) {
        printf("The input is a number.\n");
    } else if (alphabetic) {
        printf("The input is a character.\n");
    } else {
        printf("The input is alphanumeric.\n");
    }

    return 0;
}
