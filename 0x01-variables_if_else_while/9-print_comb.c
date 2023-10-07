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
int n;

for (n = 0; n < 10; n++)
{
putchar(n + '0');
if (n < 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
