#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

int* getFreqs();
int findMaxHeight(int height[]);
void printHistogram(int* charFreqs, int height);

int* getFreqs() {
    int c;
    int* characters = malloc(SIZE * sizeof(int));
    for (int k = 0; k < SIZE; k++) {
        characters[k] = 0;
    }

    while ((c = getchar()) != EOF) {
        characters[c]++;
    }
    return characters;
}

void printHistogram(int* charFreqs, int height) {
    // print the height values
    for (int c = height - 1; c >= 0; c--) {
        for (int d = ' '; d <= '~'; d++) {
            if (c < charFreqs[d])
                printf("- ");
            else
                printf("  ");
        }
        printf("\n");
    }

    // print the bottom row of characters
    for (int c = ' '; c <= '~'; c++) {
        printf("%c ", c);
    }
    printf("\n");
}

int findMaxHeight(int heights[]) {
    int max = 0;
    for (int i = 0; i < SIZE; i++) {
        if (heights[i] > max)
            max = heights[i];
    }
    return max;
}

int main() {
    int* charFreqs = getFreqs();
    printHistogram(charFreqs, findMaxHeight(charFreqs));
    free(charFreqs);
}