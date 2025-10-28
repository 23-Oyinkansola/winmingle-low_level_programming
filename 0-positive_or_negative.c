/*
 * Author: Oyinkansola
 * Program: Winmingle Community C Training
 * Description: Program that checks if a number is positive,negative,or zero
 */

#include<stdlib.h>
#include<time.h>
#include<stdio.h>

int main(void)
{
	int n;
	srand(time(0));
	n = rand()-RAND_MAX/2;

	if(n > 0)
		printf("%d is positive\n",n);
	else if (n == 0)
		printf("%d is zero\n",n);
	else
		printf("%d is negative\n",n);

	return(0);
}
