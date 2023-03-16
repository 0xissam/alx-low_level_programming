#include <unistd.h>
/**
 * main - print line using printf fonction to the standard error
 *  Return: 1
 */
int main(void)
{
char *m = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, m, 59);
return (1);
}
