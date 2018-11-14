#include <stdio.h>

void ArrayFunc(int array[8][8]){
    printf("Func 1 \n");
    for(int i=0; i<8; i++){
        for(int j=0;j<8;j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void ArrayFunc2(int *ptrArray) {
    printf("Func 2 \n");
    for(int i=0; i<8; i++){
        for(int j=0;j<8;j++){
            printf("%d ",*ptrArray++);
        }
        printf("\n");
    }
}

int main(){
    
    int array[8][8];
    
    for(int i=0; i<8; i++){
        for(int j=0;j<8;j++){
            array[i][j]=(i+1)*10+j+1;
        }
    }    
    
    for(int i=0; i<8; i++){
        for(int j=0;j<8;j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    
    int *ptrArray;
    ptrArray = array;
    
    printf("Pointer\n");
    
    for(int i=0; i<8; i++){
        for(int j=0;j<8;j++){
            printf("%d ",*ptrArray++);
        }
        printf("\n");
    }
    
    ArrayFunc(array);
    ArrayFunc2(array);

    return 0;
}
