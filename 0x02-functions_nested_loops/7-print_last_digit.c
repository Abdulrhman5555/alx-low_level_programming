#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *print_last_digit - '_'
 *@n: input
 *Return: ld
 */
int print_last_digit(int n)
{
	int ld;
	/*variable to git last digit*/
	if (n < 0)
	  {
	    ld = -1 * (n % 10);
	    _putchar(ld + '0');
	    return (ld);
	  }
	else
	  {
	    ld = n % 10;
	    _putchar(ld + '0');
	    return (ld);
	  }
}
