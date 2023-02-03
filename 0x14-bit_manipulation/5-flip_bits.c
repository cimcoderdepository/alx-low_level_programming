#include "main.h"
/**
 * flip_bits -  a function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: the lvalue of bitwise XOR operator
 * @m: the rvalue of bitwise XOR operator
 * Return: returns the number of bits
 *
 *Explanation:
 * - The ^ operator performs bitwise XOR on the two numbers, which sets the
 * bits to 1 where the corresponding bits in n and m are different.
 * - The while loop repeatedly shifts the bits of x to the right and increments
 * the count if the least significant bit is 1, until x becomes 0.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int x = n ^ m;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
