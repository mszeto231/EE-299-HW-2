// EE299 
// HW 2, Question 1
// By Mitchell Szeto

// This is a simple C program prompts for an ASCII code value 
// and then prints the character having that code.

#include <stdio.h>

int main(void)
{
	int code = 0;
	printf("Please enter in an ASCII code: ");

	int status = scanf("%d", &code);
	while (status == 0 || code < 0 || code > 256) {
		while (getchar() != '\n');
		printf("Please enter a valid ASCII Code: ");
		status = scanf("%d", &code);
	}

	printf("The character of your code is: %c\n", code);

	return 0;
}
