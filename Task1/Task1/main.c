#include<stdio.h>
#include<math.h>

//Main
int main() {
	
	unsigned int val1 = 1234;
	unsigned int res=getResult(val1);
	printf("%u", res);
	return 0;
}

//This function is getting the number and calling the function that disaddembles it the converts it to a binary number
unsigned int getResult(unsigned int a) {
	
	unsigned int res = 0;
	unsigned int num, biNum;
	unsigned long p = 0; 
	for (int i = 0; (a % (int)(pow(10, i))) != a; i++) {
		num = number_by_index(a,i);
		biNum = getBinum(num);
		res += biNum * (unsigned long)(pow(10000, i));
	}
	return res;
}

//Disassembles the number
unsigned int number_by_index(unsigned int num, int indexFromFloatingPoint) {
	num = num / (int)(pow(10, indexFromFloatingPoint));
	num = num % 10;

	return num;
}

//Convert decimal number to binary number 
unsigned int getBinum(unsigned int value) {
	
	int binary = 0;
	int remaind = 0;
	int place = 1;

	while (value) {
		remaind = value % 2;
		value = value / 2;
		binary = binary + remaind * place;
		place = place * 10;
	}
	return binary;
}

