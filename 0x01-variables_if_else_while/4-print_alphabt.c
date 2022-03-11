#include <stdio.h>

/**
 * main - Entry point
 * Description: Using the main funnction
 * this program prints the alphabet in lowercase
 * Return: Always 0.
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
putchar(ch);
}
putchar('\n');
return (0);
}
