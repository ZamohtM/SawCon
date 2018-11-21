#include <stdio.h>
#include <math.h>

int functionOne(int base, int arrayvalue[]) {
    
    int result = 0;
    int length = 2;
    
    for(int i=0; i<3; i++) {
        result = result + arrayvalue[i]*(pow(base, length));
        length--;
    }
    printf("Ergebnis: %d\n", result);
}

int functionTwo(int base, int value) {
    
    int result = 0;
    int rresult = 0;
    
    result = value/base;
    rresult = value%base;
    
}

int main() {
    
    int base = 0;
    int arrayvalue[3];
    int value = 0;
    
    printf("Geben Sie Ihre Basis ein!\n");
    scanf("%d", &base);
    printf("Geben Sie Ihren Startwert ein!\n");
    for(int i = 0; i<3;i++){
        scanf("%d", arrayvalue+i);
    }
    
    for(int j=0; j<3;j++){
        value = 10 * value + arrayvalue[j];
    }
    
    functionOne(base,arrayvalue);
    functionOne(base,value);
}
