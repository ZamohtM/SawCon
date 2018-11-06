#include <stdio.h>

int counterSum(int numbers[], int length) {
	int sum = 0;

	for (int i = 0; i <= length; i++) {
		sum = sum + numbers[i];
	}
	printf("%d\n", sum);
}

int counterSumRec(int numbers[], int length) {
    
    if (length) {
        return numbers[length] + counterSumRec(numbers, length-1);
    }return numbers[0];
}

int main() {

	int numbers[] = {1,2,3,4,5};
	int length = 4;

	counterSum(numbers, length);
    printf("%d\n", counterSumRec(numbers, length));
}
