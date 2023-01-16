# 0x0D. C - Preprocessor

## Resources

Read or watch:

 * [Understanding C program Compilation Process](https://intranet.alxswe.com/rltoken/X0ithSsqlz_D0c8V8uA1HQ)

 * [Object-like Macros](https://intranet.alxswe.com/rltoken/kaqIw352MSJ8xoi1xU09ZA)

 * [Macro Arguments](https://intranet.alxswe.com/rltoken/wcQZzunlgjepxExZFc2ORQ)

 * [Pre Processor Directives in C](https://intranet.alxswe.com/rltoken/S4zfCHzg82fUAxdt8_SaZQ)

 * [The C Preprocessor](https://intranet.alxswe.com/rltoken/G33GiOIZofiIN4Tx9_acbQ)

 * [Standard Predefined Macros](https://intranet.alxswe.com/rltoken/0OYhpL2cJfsIMBWhTuZsAA)

 * [include guard](https://intranet.alxswe.com/rltoken/oF2vgIZNePdU965jCEZLHA)

 * [Common Predefined Macros](https://intranet.alxswe.com/rltoken/ROl5xAMKX-JpenEqmf7FnQ)

# Learning Objectives

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/ipbpW8pLm91jdr3YD-AENg), **without the help of Google:**

## General

 * What are macros and how to use them

 * What are the most common predefined macros

 * How to include guard your header files



# Quiz questions

### Question #0

The preprocessor links our code with libraries.

 * True

 * False

### Question #1

Why should we use include guards in our header files?

 * Because we said so, and we should never ask why.

 * To avoid the problem of double inclusion when dealing with the include directive.

### Question #2

What will be the last 5 lines of the output of the command gcc -E on this code?

```
#include <stdlib.h>

int main(void)
{
    NULL;
    return (EXIT_SUCCESS);
}
```

```
int main(void)
{
 ((void *)0);
 return (0);
}
```

```
int main(void)
{
 '\0';
 return (0);
}
```

```
int main(void)
{
 0;
 return (0);
}
```

```
int main()
{
 0;
 return (0);
}
```

### Question #3

What are the steps of compilation?


 * preprocessor 2.compiler 3. linker 4. assembler

 * compiler 2. preprocessor 3. assembler 4. linker

 * preprocessor 2.compiler 3. assembler 4. linker

### Question #4

The preprocessor generates assembly code

 * True

 * False

### Question #5

What does the macro TABLESIZE expand to?

```
#define BUFSIZE 1020
#define TABLESIZE BUFSIZE
#undef BUFSIZE
#define BUFSIZE 37
```

 * nothing

 * 1020

 * 37

### Question #6

What is the gcc option that runs only the preprocessor?


 * -a

 * -pedantic

 * -preprocessor

 * -cisfun

 * -p

 * -E

 * -P

### Question #7

What will be the output of this program? (on a standard 64 bits, Linux machine)
```
#include <stdio.h>
#include <stdlib.h>

#define int char

int main(void)
{
    int i;

    i = 5;
    printf ("sizeof(i) = %lu", sizeof(i));
    return (EXIT_SUCCESS);
}
```

 * sizeof(i) = 1

 * Segmentation Fault

 * sizeof(i) = 8

 * sizeof(i) = 5

 * sizeof(i) = 4

 * It does not compile

### Question #8

The macro __FILE__ expands to the name of the current input file, in the form of a C string constant.

 * True

 * False

### Question #9

This portion of code is actually using the library stdlib.
```
#include <stdlib.h>
```

 * True

 * False

### Question #10

The preprocessor generates object code

 * True

 * False

### Question #11

This is the correct way to define the macro `SUB`:

```
#define SUB(a, b) a - b
```

 * No, it should be written this way:
```
#define SUB(a, b) (a) - (b)
```

 * No, it should be written this way:
```
#define SUB(a, b) ((a) - (b))
```

 * Yes

 * No, it should be written this way:
```
#define SUB(a, b) (a - b)
```

### Question #12

The preprocessor removes all comments

 * True

 * False

### Question #13

`NULL` is a macro

 * True

 * False

### Question #14

This code will try to allocate 1024 bytes in the heap:
```
#define BUFFER_SIZE 1024
malloc(BUFFER_SIZE)
```

 * True

 * False
