#include <stdio.h>
#include <math.h>

int functionOne(int base, int value[]) {
    
    int result = 0;
    int length = 2;
    
    for(int i=0; i<3; i++) {
        result = result + value[i]*(pow(base, length));
        length--;
    }
    printf("Ergebnis: %d\n", result);
}


int main() {
    
    int base = 0;
    int value[3];
    
    printf("Geben Sie Ihre Basis ein!\n");
    scanf("%d", &base);
    printf("Geben Sie Ihren Startwert ein!\n");
    for(int i = 0; i<3;i++){
        scanf("%d", value+i);
    }
    
    functionOne(base,value);
}
