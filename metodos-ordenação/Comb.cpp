#include <stdio.h>

void combSort(int [], int);
void printArray (int [], int);

int main() {
    int array[] = {7, 2, 9, 1, 5, 6, 6, 2, 1, 6, 7, 4, 12, 144, 6, 7 ,89, 34, 88, 55};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Array antes da ordenação: ");
    printArray(array, n);

    combSort(array, n);

    printf("Array após a ordenação combo: ");
    printArray(array, n);

    return 0;
}



void printArray(int array[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

void combSort(int array[], int n) {
    int gap = n;
    int swapped = 1;

    while (gap > 1 || swapped) {
        gap = (gap * 10) / 13;
        if (gap < 1)
            gap = 1;

        swapped = 0;

        for (int i = 0; i < n - gap; i++) {
            if (array[i] > array[i + gap]) {
                int temp = array[i];
                array[i] = array[i + gap];
                array[i + gap] = temp;
                swapped = 1;
            }
        }
    }
}

