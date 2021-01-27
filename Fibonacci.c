#include <stdio.h>

int num1 = 0;
int num2 = 1;
int count = 0;
int numberOfTerms;
int smth;

int main(void) {
	printf("please enter the number of terms you want to see in your sequence: ");
	scanf("%i", &numberOfTerms);
	if (numberOfTerms < 0) {
		return 0;
	}
	else {
		printf("here is the fibonacci sequence: \n");
		while (count < numberOfTerms) {
			printf("%i \n", num1);
			smth = num1 + num2;
			num1 = num2;
			num2 = smth;
			count = count + 1;

		}
	}
}
