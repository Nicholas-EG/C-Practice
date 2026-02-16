#include <stdio.h>
#include <string.h>

void squeeze(char* string, char* filter);
int main() {
    char* input = "this is a test";
    char* filter = "t";
    squeeze(input, filter);
}

/**
 * Removes any characters that appear in the filter from the string. Writes the output to stdout.
 */
void squeeze(char* string, char* filter) {
    int characters[26] = {0};
    int filterLength = strlen(filter);
    for (int i = 0; i < filterLength; i++) {
        characters[filter[i] - 'a'] = 1;
    }
    int stringLength = strlen(string);
    for (int j = 0; j < stringLength; j++) {
        if (!characters[string[j] - 'a'])
            putchar(string[j]);
    }
    putchar('\n');
}