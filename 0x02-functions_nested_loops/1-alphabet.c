#include "main.h"


/**
* print_alphabet - prints the alphabets from a - z
*/

void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}

_putchar('\n');
}
