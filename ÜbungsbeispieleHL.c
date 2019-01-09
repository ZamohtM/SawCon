#include <stdio.h>

int main()
{
    int length = 10;
    int array[length];
    int i, k, j, x;
    int summe = 0;
    int mittelwert = 0;
    
    for(i=0; i < length; i++) {
        array[i]=rand()%10;
    }
    
    printf("Zahlen: ");
    for(k=0; k<i; k++){
        printf("%d ", array[k]);
    }
    
    printf("\nZahlen Umgekehrt: ");
    for(j=length-1; j>=0; j--){
        printf("%d ", array[j]);
    }
    
    printf("\nSumme: ");
    for(x=0; x<length; x++){
        summe = summe + array[x];
    }
    
    printf("%d", summe);
    mittelwert = summe/length;
    printf("\nMittelwert: %d", mittelwert);
    
    
    
}
