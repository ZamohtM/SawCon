#include <stdio.h>
#include <time.h>

void newArray(int *array, int size)
{
    srand(time(0));
    for(int i = 0; i < size; i++)
    {
        array[i] = rand()%100;
    }
}

void showArray(int *array, int size)
{
    printf("Array in normaler Reihenfolge: \n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

void showArrayInReverse(int *array, int size)
{
    printf("\nArray in umgekehrter Reihenfolge: \n");
    for(int i = size; i > 0; i--)
    {
        printf("%d ", array[i-1]);
    }
}

int sumCalculator(int *array, int size)
{
    printf("\nSumme des Array's\n");
    int sum = 0;
    
    for(int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    
    printf("%d", sum);
}

int averageCalculator(int *array, int size)
{
    printf("\nDurchschnitt des Array's\n");
    int average = 0;
    
    for(int i = 0; i < size; i++)
    {
        average = average + array[i];
    } average = average/size;
    
    return average;
}

void convertArray(int *array, int size, int average) 
{
    printf("\nArray mit gleichem Durchschnitt\n");
    for(int i = 0; i < size; i++)
    {
        if (array[i]*0,8 < average || array[i]*1.20 > average)
        {
            array[i] = average;
        }
        printf("%d ", array[i]);
    }
}

int main()
{
	int size = 10;
	int array[size];
    
    newArray(array, size);
    showArray(array, size);
    showArrayInReverse(array, size);
    sumCalculator(array, size);
    
    printf("%d", )
    
    int average = averageCalculator(array, size);
    
    
    
    
	return 0;
}
