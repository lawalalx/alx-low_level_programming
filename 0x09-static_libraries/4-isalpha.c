#include "main.h"

/**
* _isalpha - check the lphaaabet
* @c: the argument
* Return: returns an integer
*/



int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}


