#include <unistd.h>
/**
 * main - print line using printf fonction to the standard error
 *  Return: 1
 */
int main(void)
{
char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, 41);
return (1);
}
