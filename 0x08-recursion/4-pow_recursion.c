#include "main.h"
#include<stdio.h>
/**
 *_pow_recursion - x powered by y
 *@x: integer input 
 *@y: input power
 *Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else
	int i;
	/*powerd result*/
	i = x^y;
	return (i);
}
