#include <stdio.h>

/**
 * main -prints the alphabet in lowercase and uppercase followed by new line*
 * return: 0.
*/
int main(void)
{
	char letter
	for (letter ='a'; letter <='z'; letter++)
	putchar(letter);
	for (letter ='A'; letter <='Z'; letter++)
	putchar(letter);
	putchar('\n'); /*this is ASCII code for new line*/
	return (0);
}
