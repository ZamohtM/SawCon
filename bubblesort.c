#include <stdio.h>
#include <string.h>

void intoArray(int*, int);
void zeigeArrayInKonsole(int*, int);
void dreiEcksTausch(int*,int);


int main()
{
    
   int number = 2893457;
   int len = 7;
   printf("z1: %d\n",number);
   int array[]={0};
   
}

void intoArray(int* number, int len, int array[]) {
    
    
    for(int i = 0; i < len; i ++) {
        array[i] = number % 10;
        number = number / 10;
    }
    
    
}


void zeigeArrayInKonsole(int* array, int len) {
    
}

void dreiEcksTausch(int* array,int len);
