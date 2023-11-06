#include "main.h"
/**
 * swap_int - Swapping of the numbers
 * @a: first num
 * @b: Second num
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
