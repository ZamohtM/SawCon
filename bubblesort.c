#include <stdio.h>
#include <string.h>

int main()
{
    
   const int anz = 10;
   int z[anz];
   int gaus = 0;
   
   gaus = (anz/2)*(1+anz);
   
   erzeugeArray(z,anz);
   printf("Array mit %d Zahlen:\n", anz);
   zeigeArrayInKonsole(z, anz);
   bubbleSort(z,anz);
   printf("\nArray mit %d Zahlen sortiert:\n",anz);
   zeigeArrayInKonsole(z,anz);
   printf("\n\nMaximalzahl der nötigen Vergleiche wäre (%d-1)*(%d-1) = %d", anz, anz, (anz-1)*(anz-1));
   printf("\nVerbesserte Version (pro Durchlauf 1 Vergleich weniger) wäre (9+8+7+6+ ... +2+1) = %d", gaus);
   printf("\nVerbesserte Verbessete Version: %d", bubbleSort(z,anz));
   
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

int bubbleSort(int * array, int len)
{
    int d, v, tmp;
    int getauscht = 0;
    int anzVertauschungen = 0;
   for (d = 1; d < len ; d++) 
   {
       getauscht = 0;
      for (v = 0; v < len - d ; v++) 
      {
          if (array[v] > array[v+1]) 
          {
              tmp = array[v];
              array[v] = array[v+1];
              array[v+1] = tmp;
              getauscht = 1;
          }
          anzVertauschungen++;
      }
      if (getauscht == 0) {
          break;
      }
    
   }
   return anzVertauschungen;
}
