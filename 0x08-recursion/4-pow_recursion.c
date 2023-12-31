#include "main.h"
#include<stdio.h>
#include<math.h>
/**
 *_pow_recursion - x powered by y
 *@x: integer input
 *@y: integer input
 *Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
