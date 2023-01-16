#ifndef function_like_macro_h
#define function_like_macro_h

#include <stdio.h>


unsigned int ABS(int x); /* fuction-like macro declaration starts here */

#define ABS(x) ((x<0)?(-x):(x))

#endif
