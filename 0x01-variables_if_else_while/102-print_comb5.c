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
int i, j, k, l;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 9; k++)
{
for (l = 0; l <= 9; l++)
{
int num1 = i * 10 + j;
int num2 = k * 10 + l;

if (num1 < num2)
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
}

if (!(i == 9 && j == 8 && k == 9 && l == 9))
{
putchar(',');
putchar(' ');
}
}

}

}

}

putchar('\n');

return (0);
}
