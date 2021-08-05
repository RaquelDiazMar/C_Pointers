#include <stdio.h>

int	main(void)
{
	int data[5]; /* array declaration */
	/* access the arrays using an index */
	/* write to arrays */
	data[0] = 3;
	data[1] = -2;
	data[2] = 0;
	data[3] = 100;
	data[4] = -13;

	/* display the content of the array */
	printf("data[0] = %d\n", data[0]);
	printf("data[1] = %d\n", data[1]);
	printf("data[2] = %d\n", data[2]);
	printf("data[3] = %d\n", data[3]);
	printf("data[4] = %d\n\n", data[4]);

	int* dtPTR = &data[0];
	/* display the content of the array using the pointer */
	printf("data[0] = %d\n", *dtPTR);
	/* *dtPTR = *dtPTR + 1;  this only adds up a value to dtPTR */
	dtPTR = dtPTR + 1; /* this moves up one memory position */
	printf("data[1] = %d\n", *dtPTR);
	dtPTR++; /* this also moves up one memory position */
	printf("data[2] = %d\n", *dtPTR);
	dtPTR++;
	printf("data[3] = %d\n", *dtPTR);
	dtPTR++;
	printf("data[4] = %d\n\n", *dtPTR);
	/* now the pointer is pointing to the last data member */
	/* alter the content of the arrays using the pointer */
	*dtPTR = *dtPTR + 1;
	dtPTR--;
	*dtPTR = 88;
	dtPTR--;
	*dtPTR = 1;
	dtPTR--;
	*dtPTR = 777;
	dtPTR--;
	*dtPTR = *dtPTR + 1;
	dtPTR--;
	/* display the content of the altered array */
	printf("data[0] = %d\n", data[0]);
	printf("data[1] = %d\n", data[1]);
	printf("data[2] = %d\n", data[2]);
	printf("data[3] = %d\n", data[3]);
	printf("data[4] = %d\n\n", data[4]);

	return (0);
}
