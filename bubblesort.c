#include <stdio.h>
#include <string.h>

int main()
{
   int len = 10;
   int array[len];
   int gaus = 0;
   int numCompare;
   
   gaus = (len/2)*(1+len);
   
   creatArray(array,len);
   
   printf("Array mit %d Zahlen:\n", len);
   showArray(array, len);
   
   numCompare = bubbleSort(array,len);
   
   printf("\nArray mit %d Zahlen sortiert:\n",len);
   showArray(array,len);
   
   printf("\n\nMaximalzahl der nötigen Vergleiche wäre (%d-1)*(%d-1) = %d", len, len, (len-1)*(len-1));
   printf("\nVerbesserte Version (pro Durchlauf 1 Vergleich weniger) wäre (%d+%d+%d ... +3+2+1) = %d",len,len-1,len-2, gaus);
   printf("\nVerbesserte Verbessete Version: %d",numCompare);
   
   return 0;
}

void creatArray(int * array, int len) {
    srand(time(0));
    for(int i = 0; i < len; i ++) {
        int random = rand();
        array[i] = random%100;
    }
}

void showArray(int * array, int len) {
    for(int i=0; i < len; i++) {
       printf("%d ",array[i]);
   }
}

int bubbleSort(int * array, int len)
{
    int runs, compare, tmp;
    int swap = 0;
    int numSwaps = 0;
   for (runs = 1; runs < len ; runs++) 
   {
       swap = 0;
      for (compare = 0; compare < len - runs ; compare++) 
      {
          if (array[compare] > array[compare+1]) 
          {
              tmp = array[compare];
              array[compare] = array[compare+1];
              array[compare+1] = tmp;
              swap = 1;
          }
          numSwaps++;
      }
      if (swap == 0) {
          break;
      }
   }
   return numSwaps;
}
