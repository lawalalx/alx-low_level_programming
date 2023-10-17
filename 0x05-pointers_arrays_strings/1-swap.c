/**
 * swaap_int - the swap function
 * @a: the first argument
 * @b: the second argument
 * Return: the return part
 */


void swap_int(int *a, int *b)
	{
		int num = *a;
		*a = *b;
		*b = num;
	}
