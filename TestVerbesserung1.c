#include <stdio.h>

void fillArray(int *array, int size, int ug, int og)
{
    srand(time(0));
    for(int i = 0; i < size; i++)
    {
        array[i] = (rand()%(og-ug))+ug;
    }
}

void printArray(int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(i%12==0) {
            printf("\n");
        }
        printf("%d ", array[i]);
    }
}

int min(int *array, int size)
{
    int min = array[0];
    
    for(int i = 1; i < size; i++) 
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

int max(int *array, int size)
{
    int max = array[0];
    
    for(int i = 1; i < size; i++) 
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

void buildNewArray(int *array, int size, int mini, int maxi)
{
    for(int i = 0; i < size; i++)
    {
        if(i%2==0) {
            array[i] = mini;
        }
        if(i%2!=0){
            array[i] = maxi;
        }
    }
}

int main() {
    
    int size = 20;
    int array[size];
    int ug = 300;
    int og = 500;
    int anzSpalten = 12;
    
    fillArray(array, size, ug, og);
    printf("Array Original: \n");
    printArray(array, size);
    
    int mini = min(array, size);
    int maxi = max(array, size);
    printf("\nArray Umgestellt: \n");
    
    buildNewArray(array, size, mini, maxi);
    printArray(array, size);
    
    return 0;
}
