/*
 * Author:Oyinaksnola
 * Program:WinMingle Community C Training
 * Description:Print base 16 numbers
 */

#include <stdio.h>

int main(void)
{
	int i;
	char c;

	for(i = 0; i < 10; i++)
		putchar(i + '0');

	for(c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return(0);
}
