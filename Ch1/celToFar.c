#include <stdio.h>

int main() {
    float fahr, celcious;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahr   Cel\n");
    while (fahr <= upper) {
        celcious = (5.0/9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celcious);
        fahr = fahr + step;
    }
}