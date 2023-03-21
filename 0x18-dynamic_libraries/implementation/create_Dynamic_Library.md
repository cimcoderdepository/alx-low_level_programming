# Step-by-step guide to create dynamic Libraries on Linux

Here are the steps to create dynamic libraries on Linux:

1. Create the source code for your library. This can be done in any programming language,
but for this example, we'll use C. Here's an example source code:
```
#include <stdio.h>
void greet()
{
   printf("Hello, world!\n");
}
```
Save this code in a file called `libgreet.c`.

2. Compile the source code into an object file. Use the following command:
```
$ gcc -c -Wall -Werror -fpic libgreet.c
```
This command tells the gcc compiler to compile the source code in `libgreet.c` and
create a position-independent object file (`-fpic`). The `-c` flag tells the compiler
not to link the code.

3. Create the shared library. Use the following command:
```
$ gcc -shared -o libgreet.so libgreet.o
```
This command tells the gcc compiler to create a shared library called `libgreet.so`
(`-o libgreet.so`) from the object file (`libgreet.o`) created in the previous step.

4. Set the library path. Use the following command:
```
$ export LD_LIBRARY_PATH=/path/to/library:$LD_LIBRARY_PATH
```
This command tells the operating system where to find the shared library when it is
called by an executable. Replace `/path/to/library` with the path to your library.

5. Test the shared library. Use the following command:
```
$ gcc -o main main.c -L/path/to/library -lgreet
$ ./main
```
This command compiles and links the main program (`main.c`) with the shared library
(`-L/path/to/library` `-lgreet`). The `-L` flag tells the linker where to find the library
and the `-l` flag tells the linker the name of the library. The resulting executable is
called `main`. When you run `./main`, you should see the message `"Hello, world!"` printed
to the console.

That's it! You've successfully created a dynamic library on Linux.
