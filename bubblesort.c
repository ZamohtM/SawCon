#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
   const int anz = 10;
   int z[anz];
   
   erzeugeArray(z,anz);
   printf("Array mit %d Zahlen:\n", anz);
   zeigeArrayInKonsole(z, anz);
   bubbleSort(z,anz);
   printf("\nArray mit %d Zahlen sortiert:\n",anz);
   zeigeArrayInKonsole(z,anz);
   
   return 0;
}

void erzeugeArray(int * array, int len) {
    srand(time(0));
    for(int i = 0; i < len; i ++) {
        int random = rand();
        array[i] = random%100;
    }
}

void zeigeArrayInKonsole(int * array, int len) {
    for(int i=0; i < len; i++) {
       printf("%d ",array[i]);
   }
}

void bubbleSort(int * array, int len)
{
   int i, j,tmp;

   for (i = 1; i < len ; i++) 
   {
      for (j = 0; j < len - i ; j++) 
      {
          if (array[j] > array[j+1]) 
          {
              tmp = array[j];
              array[j] = array[j+1];
              array[j+1] = tmp;
          }
      }
   }
}

