#include "main.h"
#include<stdio.h>
#include<math.h>
/**
 *_sqrt_recursion - gets squer of a num
 *@n: integer input
 *Return: square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		int s;
		s = pow(double(n), 1/2);
		return (s);
	}
}
