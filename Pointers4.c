#include <stdio.h>

void	alterArray(int* dtPTR)
{
	*dtPTR = 1;
	dtPTR++;
	*dtPTR = 11;
	dtPTR++;
	*dtPTR = 111;
	dtPTR++;
	*dtPTR = 1111;
	dtPTR++;
	*dtPTR = 11111;
	dtPTR++;

}

int main()
{
	int size = 5;
	int data[size];
	alterArray(&data[0]);
	/* display the content of the arrays */
	printf("data[0] = %d\n", data[0]);
	printf("data[0] = %d\n", data[1]);
	printf("data[0] = %d\n", data[2]);
	printf("data[0] = %d\n", data[3]);
	printf("data[0] = %d\n", data[4]);
	return (0);
}
