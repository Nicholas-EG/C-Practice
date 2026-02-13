#include <stdio.h>
#include <stdlib.h>

#define MAXIMUM 1000

char* reverse(char* s, int length);
int mygetline(char* s, int lim);

int main() {
    int c;
    char line[MAXIMUM];
    while ((c = mygetline(line, MAXIMUM)) != EOF) {
        char* string = reverse(line, c);
        printf("%s\n", string);
        free(string);
    }
}

char* reverse(char* s, int length) {
    char* result = malloc(length * sizeof(char));
    for (int i = 0; i < length; i++) {
        result[i] = s[length - 1 - i];
    }
    return result;
}

int mygetline(char* s, int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    s[i] = '\0';
    return i;
}