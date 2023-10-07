#include <stdio.h>

/**
* main - entry point
*
* Description: 'the program's description'
*
* Return: Always 0 (Success)
*/

int main(void)
{
char letter;

for (letter = '0'; letter <= '9'; letter++)
{
putchar(letter);
}

for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');

return (0);
}
