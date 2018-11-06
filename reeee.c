#include <stdio.h>

int counterSum(int a) {
	int sum = 0;

	for (int i = 0; i <= a; i++) {
		sum = sum + i;
	}
	printf("%d\n", sum);
}

int counterSumRec(int b) {
    int sumR = 0;
	if (b) {
	    sumR = sumR + b;
		counterSumRec(b - 1);
	}
	
	printf("%d\n", sumR);
}


int main() {

	counterSum(5);
	counterSumRec(5);
}
