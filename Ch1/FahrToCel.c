#include <stdio.h>

int main() {
    double celcious, fahr;
    printf("Cel\tFahr\n");
    for (celcious = 0.0; celcious <= 300; celcious += 20.0) {
        fahr = (9.0/5.0) * celcious + 32;
        printf("%3.1f\t%6.1f\n", celcious, fahr);
    }
}