/*
 * Author:Oyinkansola
 * Program:WinMingle Community C Training
 * Descriprtion:print alphabet in reverse
 */

#include <stdio.h>

int main(void)
{
	char c = 'z';

	while(c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return(0);
}
