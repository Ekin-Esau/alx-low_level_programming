#include <stdio.h>
/**
 * main - prints all letters except q and e,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char al;
	while (al <= 'z')
		{
		if (al != 'e' && al != 'q')
			{
			putchar(al);
			}
		al++;
		}
		putchar('\n');
		return (0);
}
