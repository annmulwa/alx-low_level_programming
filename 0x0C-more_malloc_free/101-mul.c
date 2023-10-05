#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * is_digit - checks if a string contains a non-digit character
 * @s: input string
 * Return: 0 if a non-digit is found or 1
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * errors - checks the errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int length1, length2, length, i, carry, num1, num2, *output, c = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	length1 = _strlen(s1);
	length2 = _strlen(s2);
	length = length1 + length2 + 1;
	output = malloc(sizeof(int) * length);
	if (!output)
		return (1);
	for (i = 0; i <= length1 + length2; i++)
		output[i] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		num1 = s1[length1] - '0';
		carry = 0;
		for (length2 = _strlen(s2) - 1; length2 >= 0; length2--)
		{
			num2 = s2[length2] - '0';
			carry += output[length1 + length2 + 1] + (num1 * num2);
			output[length1 + length2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			output[length1 + length2 + 1] += carry;
	}
	for (i = 0; i < length - 1; i++)
	{
		if (output[i])
			c = 1;
		if (c)
			_putchar(output[i] + '0');
	}
	if (!c)
		_putchar('0');
	_putchar('\n');
	free(output);
	return (0);
}

