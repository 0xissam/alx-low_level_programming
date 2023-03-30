# 0x06. C - More pointers, arrays and strings
## 0. strcat
a function that concatenates two strings.
* Prototype: char *_strcat(char *dest, char *src);
* This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
* Returns a pointer to the resulting string dest
## 1. strncat
a function that concatenates two strings.
* Prototype: char *_strncat(char *dest, char *src, int n);
* The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
* src does not need to be null-terminated if it contains n or more bytes
* Return a pointer to the resulting string dest
## 2. strncpy
a function that copies a string.
* Prototype: char *_strncpy(char *dest, char *src, int n);
* Your function should work exactly like strncpy
## 3. strcmp
Write a function that compares two strings.
* Prototype: int _strcmp(char *s1, char *s2);
* Your function should work exactly like strcmp
## 4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy
a function that reverses the content of an array of integers.
* Prototype: void reverse_array(int *a, int n);
* Where n is the number of elements of the array
## 5. Always look up
a function that changes all lowercase letters of a string to uppercase.
* Prototype: char *string_toupper(char *);
## 6. Expect the best. Prepare for the worst. Capitalize on what comes
a function that capitalizes all words of a string.
* Prototype: char *cap_string(char *);
* Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
## 7. Mozart composed his music not for the elite, but for everybody
a function that encodes a string into 1337.
* Letters a and A should be replaced by 4
* Letters e and E should be replaced by 3
* Letters o and O should be replaced by 0
* Letters t and T should be replaced by 7
* Letters l and L should be replaced by 1
## 8. rot13
a function that encodes a string using rot13.
* Prototype: char *rot13(char *);
* You can only use if statement once in your code
* You can only use two loops in your code
## 9. Numbers have life; they're not just symbols on paper
a function that prints an integer.
* Prototype: void print_number(int n);
* You can only use _putchar function to print
* You are not allowed to use long
## 10. A dream doesn't become reality through magic; it takes sweat, determination and hard work
Add one line to this code, so that the program prints a[2] = 98, followed by a new line.
## 11. It is the addition of strangeness to beauty that constitutes the romantic character in art
a function that adds two numbers.
* Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r);
* Where n1 and n2 are the two numbers
* r is the buffer that the function will use to store the result
* size_r is the buffer size
* The function returns a pointer to the result
## 12. Noise is a buffer, more effective than cubicles or booth walls
 a function that prints a buffer.
* Prototype: void print_buffer(char *b, int size);
* The function must print the content of size bytes of the buffer pointed by b
* The output should print 10 bytes per line
* Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0
* Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
* Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
* Each line ends with a new line \n
* If size is 0 or less, the output should be a new line only \n
