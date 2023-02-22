#include "main.h"
/**
* print_last_digit - prints last digit of a number
* @num:number input to cuntion
* Return: int
*/
int print_last_digit(int num)
{
	if (num < 0)
		num = -1 * (num % 10);
	else
		num = num % 10;
	_putchar('0' + num);
	return (num);
}
