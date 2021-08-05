/* Dynamic string memory allocation */

#include <stdio.h>
#include <string.h>
#include <stdlib.h> /* for malloc function */
#include <ctype.h> /* for iscntrl function */

int	main()
{
	char buffer[100];
	char* strPTR;

	printf("Please, enter a couple of words: ");
	gets(buffer);
	printf("Buffer content: %s\n", buffer);
	printf("Array size: %lu\n", sizeof(buffer)); /* including '\0' */
	printf("Array length: %lu\n", strlen(buffer));	/* excluding '\0' */
	strPTR = malloc(strlen(buffer) + 1); /* allocate memory space for a new string, sized to the content of the buffer plus 1 for the '\0' ending */
	strcpy(strPTR, buffer); /* copy the trimmed content up to '\0' to the new string */
	printf("Copy of buffer: %s\n", strPTR);
	printf("String length of the copy: %lu\n", strlen(strPTR));
	/* demonstrate that '\0' is still there */
	int i = 0;
	printf("String read one character at a time: ");
	while (!iscntrl(strPTR[i]))
	{
		printf("%c", strPTR[i]);
		i++;
	}
	printf("\n");
	free(strPTR); /* deallocate memory */
	return (0);
}

/* The iscntrl() function checks whether a character is a control character or not.

Characters that cannot be printed on the screen are known as control characters.  For example, backspace, Escape, newline etc.

The iscntrl() function checks whether a character (passed to the function) is a control character or not. If the character passed is a control character, it returns a non-zero integer. If not, it returns 0.

This function is defined in ctype.h header file.*/
