#include <stdio.h>

void intMax(void);
void shortMax(void);
void longMax(void);

int main() {
    intMax();
    shortMax();
    longMax();
}

void intMax() {
    unsigned int c = 0;
    printf("uint max value: %u\n", c - 1);
}

void shortMax() {
    unsigned short c = 0;
    printf("ushort max value: %hu\n", c - 1);
}

void longMax() {
    unsigned long c = 0;
    printf("ulong max value: %lu\n", c - 1);
}