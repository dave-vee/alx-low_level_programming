#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char charc = 'a';

	while (charc <= 'z')
	{
		if (charc != 'e' && charc != 'q')
		{
			putchar(charc);
		}
			charc++;
	}
		putchar('\n');
		return (0);
}
