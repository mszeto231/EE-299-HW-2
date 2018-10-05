// EE299 
// HW 2, Question 1
// By Mitchell Szeto

// This program that prompts for a floating - point number 
// then prints the number first in decimal point notation 
// then in exponential notation.Present the output in the following format :
// The input is 98.600 or 9.8600 e+001 

#include <stdio.h>
/*
int main(void)
{
	int num = 0;
	int decimal = 0;
	printf("Please enter a floating point number: ");
	scanf("%d.%d", &num, &decimal);

	int numExp = num;
	int decExp = decimal;

	int temp = 1;
	int decDigits = 0;
	while (temp <= decimal ) {
		decDigits++;
		temp *= 10;
	}

	int exponent = 0;
	while (numExp >= 10) {
		temp = numExp % 10;
		for (int i = 0; i < decDigits; i++) {
			temp *= 10;
		}
		decDigits++;
		decExp += temp;
		numExp = numExp / 10;
		exponent++;
	}

	if (decimal == 0) {
		printf("The input is %d or ", num, numExp, decExp);
	}
	else {
		printf("The input is %d.%d or ", num, decimal, numExp, decExp);
	}

	if (decDigits == 0) {
		printf("%d e+", numExp);
	}
	else {
		printf("%d.%d e+", numExp, decExp);
	}

	if (exponent < 10) {
		printf("00%d\n", exponent);
	}
	else if (exponent < 100) {
		printf("0%d\n", exponent);
	}
	else {
		printf("%d\n", exponent);
	}
	return 0;
}
*/