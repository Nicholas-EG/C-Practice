#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

#define BASE 16
#define OFFSET 10

int htoi(char* s);

int main() {
    int result = htoi("0xaff0");
    printf("result: %d\n", result);
}

int htoi(char* s) {
    int length = strlen(s);
    int result = 0;

    for (int i = length - 1; i > 1; i--) {
        char offset;
        if (isnumber(s[i]))
            offset = '0';
        else if (isalpha(s[i]))
            offset = 'a' - OFFSET;
        result += (pow(BASE, length - 1 - i)) * (s[i] - offset);
    }
    return result;
}