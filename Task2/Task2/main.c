#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Printed messages
#define CURRECT_OUTPUT "The similar decimal number of our hexa decimal is: %u\n"
#define INVALID_INPUT "Invalid input,input would NEVER hold a number with letters\n"


#define TRUE 1
#define FALSE 0

//Main
int main() {
	unsigned int val1 = 0x1234;
	unsigned int val2 = 0;
	for (int i = 0; i <= 3; i++) {
		val2 += number_by_index(val1, i) * pow(10, i);
	}
	printf(CURRECT_OUTPUT, val2);
	return 0;
}

//Converts the number to decimal
unsigned int number_by_index(unsigned int number, int indexFromFloatingPoint) {
	unsigned int num = number;
	num = num / (unsigned int)(pow(16, indexFromFloatingPoint));
	num = num % 16;
	if (!isInputValid(num)) {
		printf(INVALID_INPUT);
		exit(0);
	}
	return num;
}

//true or false-if input valid
int isInputValid(unsigned int value) {
	if (value > 9) {
		return FALSE;
	}
	return TRUE;
}


