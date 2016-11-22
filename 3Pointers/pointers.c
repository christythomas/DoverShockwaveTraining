/* Source code to demonstrate, handling of pointers in C program */
#include <stdio.h>

int main(void) {
	int *pc;
	int c;

	c = 22;

	printf("\nAddress of c: 0x%08x\n", (unsigned int) &c);
	printf("Value of c: %d\n\n", c);

	pc = &c;
	printf("Address of pointer pc: 0x%08x\n", (unsigned int) pc);
	printf("Content of pointer pc: %d\n\n", *pc);

	c = 11;
	printf("Address of pointer pc: 0x%08x\n", (unsigned int) pc);

	printf("Content of pointer pc: %d\n\n", *pc);

	*pc = 2;
	printf("unsignedAddress of c: 0x%08x\n", (unsigned int) &c);
	printf("Value of c: %d\n\n", c);

	return 0;
}
