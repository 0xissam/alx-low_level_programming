#include <stdio.h>
/**
 * main - print the size of various types on the computer using sizeof fonction
 * Return: 0
 */
int main(void)
{
printf("Size of char: %ld byte(s)\n", sizeof(char));
printf("Size of int: %ld byte(s)\n", sizeof(int));
printf("Size of long: %ld byte(s)\n", sizeof(long));
printf("Size of long long: %ld byte(s)\n", sizeof(long long));
printf("Size of float: %ld byte(s)\n", sizeof(float));
return (0);
}
