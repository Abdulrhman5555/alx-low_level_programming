#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *_abs - prints abs value of an integer
 *@n: input
 *Return: abs value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
		return (n);
}
