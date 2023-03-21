# How to use "extern" keyword in a C program

In C programming language, the extern keyword is used to declare a variable or function that is defined in another source file or module. This allows you to use a variable or function that is defined in a different file or module in your current program.

Here's an example of how to use the extern keyword:

Suppose you have two files, `file1.c` and `file2.c`, and you want to use a variable `var` that is defined in `file1.c` in `file2.c`. Here are the steps you would follow:

1. In `file1.c`, you would define the variable as follows:
```
int var = 10;
```
2. n `file2.c`, you would declare the variable using the extern keyword as follows:
```
extern int var;
```
This tells the compiler that the variable var is defined in another source file and is available for use in the current file.

3. You can then use the variable var in "file2.c" just as you would if it were defined in that file:
```
#include <stdio.h>

extern int var;

int main() {
   printf("The value of var is %d\n", var);
   return 0;
}
```
Note that the `extern` keyword is not necessary in `file1.c` because the variable is being defined in that file, not declared. The `extern` keyword is only used when you want to declare a variable or function that is defined in another file or module.
