#include <stdio.h>
/**
 * main - this sdescribes the main function of the code
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu byte($)\n", (unsigned long)sizeof(a));
	printf("size of a int: %lu byte($)\n", (unsigned long)sizeof(b));
	printf("size of a long: %lu byte($)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu byte($)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu byte($)\n", (unsigned long)sizeof(e));
	return (0);
}
