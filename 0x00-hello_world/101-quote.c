#include <unistd.h>
/**
 * main - program entry point
 *
 * print a string to the output using the unix standard output
 * Return: int(1)*
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
