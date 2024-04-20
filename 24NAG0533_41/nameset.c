#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <string1> <string2> ... <stringN>\n", argv[0]);
        return 1;
    }

    char *longest = argv[1];
    char *shortest = argv[1];

    for (int i = 2; i < argc; i++) {
        if (strlen(argv[i]) > strlen(longest)) {
            longest = argv[i];
        }

        if (strlen(argv[i]) < strlen(shortest)) {
            shortest = argv[i];
        }
    }

    printf("Longest string: %s\n", longest);
    printf("Shortest string: %s\n", shortest);

    return 0;
}
