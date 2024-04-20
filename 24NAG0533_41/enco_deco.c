#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *run_length_encode(const char *input) {
    if (input == NULL || strlen(input) == 0) {
        return NULL;
    }

    int input_len = strlen(input);
    char *output = (char *)malloc(2 * input_len + 1);
    int count = 1;
    int output_index = 0;

    for (int i = 1; i <= input_len; i++) {
        if (input[i] == input[i - 1]) {
            count++;
        } else {
            output[output_index++] = input[i - 1];
            if (count > 1) {
                output[output_index++] = count + '0';
            }
            count = 1;
        }
    }

    output[output_index] = '\0';
    return output;
}

char *run_length_decode(const char *input) {
    if (input == NULL || strlen(input) == 0) {
        return NULL;
    }

    int input_len = strlen(input);
    char *output = (char *)malloc((input_len / 2) + 1);
    int output_index = 0;

    for (int i = 0; i < input_len; i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            int count = input[i] - '0';
            for (int j = 0; j < count - 1; j++) {
                output[output_index++] = input[i - 1];
            }
        } else {
            output[output_index++] = input[i];
        }
    }

    output[output_index] = '\0';
    return output;
}
/*
int main() {
    printf("Encoding 'AAA': %s\n", run_length_encode("AAA"));
    printf("Decoding 'A3': %s\n", run_length_decode("A3"));

    return 0;
}*/

/*char* run_length_encode(char const* input){
    if (input == NULL || *input == '\0') return NULL;

    char* encoded = (char*)malloc(strlen(input) * 2 + 1);
    char* encoded_ptr = encoded;

    char current_char = *input;
    int count = 1;

    for (input++; *input != '\0'; input++){
        if (*input == current_char) {
            ++count;
        } else {
            encoded_ptr += sprintf(encoded_ptr, "%c%d", current_char, count);
            current_char = *input;
            count = 1;
        }
    }

    encoded_ptr += sprintf(encoded_ptr, "%c%d", current_char, count);
    *encoded_ptr = '\0';

    return encoded;
}

char* run_length_decode(char const* input){
    if (input == NULL || *input == '\0') return NULL;

    char* decoded = (char*)malloc(strlen(input) + 1);
    char* decoded_ptr = decoded;

    while (*input != '\0') {
        char current_char = *input++;
        int count = 0;

        while (isdigit(*input)) {
            count = count * 10 + (*input++ - '0');
        }

        for (int i = 0; i < count; i++) {
            *decoded_ptr++ = current_char;
        }
    }

    *decoded_ptr = '\0';

    return decoded;
}*/

int main() {
    char input[] = "WWWWBBWWWWW";
    char* encoded_string = run_length_encode(input);
    printf("Encoded String: %s\n", encoded_string);

    char* decoded_string = run_length_decode(encoded_string);
    printf("Decoded String: %s\n", decoded_string);

    free(encoded_string);
    free(decoded_string);

    return 0;
}
