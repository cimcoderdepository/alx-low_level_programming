### Create the dynamic library libdynamic.so containing all
the functions listed below:

* int \_putchar(char c);
* int \_islower(int c);
* int \_isalpha(int c);
* int \_abs(int n);
* int \_isupper(int c);
* int \_isdigit(int c);
* int \_strlen(char \*s);
* void \_puts(char \*s);
* char \*\_strcpy(char \*dest, char \*src);
* int \_atoi(char \*s);
* char \*\_strcat(char \*dest, char \*src);
* char \*\_strncat(char \*dest, char \*src, int n);
* char \*\_strncpy(char \*dest, char \*src, int n);
* int \_strcmp(char \*s1, char \*s2);
* char \*\_memset(char \*s, char b, unsigned int n);
* char \*\_memcpy(char \*dest, char \*src, unsigned int n);
* char \*\_strchr(char \*s, char c);
* unsigned int \_strspn(char \*s, char \*accept);
* char \*\_strpbrk(char \*s, char \*accept);
* char \*\_strstr(char \*haystack, char \*needle);

To create a dynamic library containing the functions listed above, you would need to perform the following steps:

1. Write the implementation for each function in a separate source file.
2. Compile each source file into an object file using a compiler such as gcc with the "-c" flag. For example: `gcc -c _putchar.c -o _putchar.o`.
3 . Link the object files together to create a shared library using the "-shared" flag. For example: `gcc -shared -o libdynamic.so _putchar.o _islower.o _isalpha.o _abs.o _isupper.o _isdigit.o _strlen.o _puts.o _strcpy.o _atoi.o _strcat.o _strncat.o _strncpy.o _strcmp.o _memset.o _memcpy.o _strchr.o _strspn.o _strpbrk.o _strstr.o`.
4. This will create a shared library named `libdynamic.so` containing all the functions listed above. You can then use this library by linking it with your application at compile time or by dynamically loading it at runtime.
