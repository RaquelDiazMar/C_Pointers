#include <stdio.h>
/* a pointer is just like a variable except that it contains the address of another variable */

int	main(void)
{
	int	data;

	data = 8;
	printf("The value assigned to data = %d\n", data);

	int* dtPTR;

	dtPTR = &data;
	printf("The value pointed by the pointer = %d\n", *dtPTR);

	*dtPTR = -4;
	printf("The value of data after altering it using the pointer = %d\n", data);
	printf("The value of pointed by the pointer is now = %d\n", *dtPTR);

//	system("PAUSE"); implicit declaration of function 'system' is invalid in C99 [-Wimplicit-function-declaration]
	return (0);
}
