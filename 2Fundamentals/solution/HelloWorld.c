#include <stdio.h>

/* Returns if the given number is prime */
int is_prime(int num) {
	int i;
	if (num <= 1) {
		return 0;
	}
	if (num % 2 == 0 && num > 2) {
		return 0;
	}
	for (i = 3; i < num / 2; i += 2) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}

/* Returns the square root of number */
int square(int x) {
	int p;
	p = x * x;
	return (p);
}

/* Returns the multiplication of two numbers */
int multiply(int x, int y) {
	int p;
	p = x * y;
	return (p);
}

/* Entry point into the program */
int main(int argc, char **argv) {
	printf("Hello, Dover Shockwave Robotics!\n");
	int i;

	/* initialize array of numbers to do calculations on */
	int values[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (i = 0; i < 10; i++) {
		int value = values[i];
		int sq = square(value);
		printf("Square Root of %d is %d\n", value, sq);

		/* added in section to multiply */
		int prev_value = values[i - 1] ? values[i - 1] : 0;
		int answer = multiply(value, prev_value);
		printf("Multiply %d * %d is %d\n", value, prev_value, answer);

		printf("Difference between square root and multiplication = %d\n",
				sq - answer);

		if (is_prime(value)) {
			printf("  Working with a prime number %d!\n", value);
		} else if (sq % 2 == 0) {
			printf("  The answer was an even number %d.\n", sq);
		} else if (sq % 2 != 0) {
			printf("  The answer was an odd number %d.\n", sq);
		}
	}
	return 0;
}
