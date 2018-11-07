#include <stdio.h>

int counterSum(int a) {
	int sum = 0;

	for (int i = 0; i <= a; i++) {
		sum = sum + i;
	}
	printf("%d\n", sum);
}

int counterSumRec(int a, int sum) {
    
    if(a) {
        return a + counterSumRec(a-1, sum);
    }return 0;
}


int main() {

	counterSum(5);
	printf("Summe: %d\n", counterSumRec(5,0));
}
