#include <stdio.h>

/* pass by value */

void	pass1(int copy)
{
	printf("The value of the local variable copy = %d\n", copy);
	copy = -8;
	printf("The value of copy after altering it = %d\n", copy);
}

/* pass by reference - you can alter the value of a variable in another function */
void	pass2(int* dtPTR)
{
	printf("dtPTR is pointing to this data %d\n", *dtPTR);
	*dtPTR = 100;
}

int	main(void)
{
	int	data = 0;

	printf("The initialized value of data = %d\n", data);
	pass1(data);
	printf("The value of data after calling pass1() = %d\n", data);
	pass2(&data);
	printf("The value of data after calling pass2() = %d\n", data);
	return (0);
}
