#include <stdio.h>

void createArray(int *array, int length)
{
    srand(time(0));
    
    for(int i = 0; i < length; i++)
    {
        int rng = rand();
        array[i] = rng%100;
    }
}

void showArray(int *array, int length)
{
    for(int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
}

int arrayMinIndex(int *x, int start, int size) {
    int minIndex = start, i;
    for(i = start; i < size; i++) {
        if(x[i] < x[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

void arrayMinSort(int *x, int size) {
    int i, temp, minIndex;
    for(i = 0; i < size-1; i++) {
        minIndex = arrayMinIndex(x, i, size);
        if(i != minIndex) {
        temp = x[i];
        x[i] = x[minIndex];
        x[minIndex] = temp;
        }
    }
}

int main()
{
    int length = 10;
    int numbers[length];
    
    createArray(numbers, length);
    printf("Array mit %d zufaelligen Zahlen:\n", length);
    showArray(numbers, length);
    
    arrayMinSort(numbers, length);
    
    printf("\nArray mit %d zufaelligen Zahlen sortiert:\n", length);
    showArray(numbers, length);
    
    return 0;
}
