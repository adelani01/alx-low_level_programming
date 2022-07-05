#include <stdio.h>
/**
 * main -entry point
 *
 * Return: always return 0
 *
 */
int main(void)
{
int a;
char ch;
for (a = 0; a < 10; a++)
putchar(a);
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
