/*
 * Author:Oyinkansola
 * Program:Winmingle Community C Training
 * Description:Print lowercase and uppercase alphabet
 */

#include <stdio.h>

int main(void)
{
	char c = 'a';
	char C = 'A';
	
	while(c <= 'z')
	{
		putchar(c);
		c++;
	}

	while(C <= 'Z')
	{
		putchar(C);
		c++;
	}
	putchar('\n');

	return(0);
}
