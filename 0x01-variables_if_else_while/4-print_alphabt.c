#include<ctype.h>
#include<stdio.h>
/**
 *main - prents alpha
 *Return: 0
 */
int main(void)
{
	int alpha = 'a';
	/*var*/
	if (alpha <= 'z' && alpha < 'e' || alpha < 'q')
	{
		putchar(alpha);
                alpha++;
	}
	putchar('\n');
	return (0);
}
