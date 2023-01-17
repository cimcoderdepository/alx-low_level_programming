#include <stdio.h>

int main(void)
{
/* return a string literal */
printf("File: %s\n", __FILE__);  /* return a string literal */
printf("Date: %s\n", __DATE__);  /* return a string literal */
printf("Time: %s\n", __TIME__);  /* return a string literal */
printf("Timestamp: %s\n", __TIMESTAMP__);  /* return a string literal */
printf("Line: %d\n", __LINE__);  /* return an integer */
printf("ANSI: %d\n", __STDC__);  /* return an integer */
printf("STDC version: %ld\n", __STDC_VERSION__);  /* return a long integer */
printf("Function Name: %s\n", __func__);  /* return a string literal */
printf("Pretty Function name: %s\n", __PRETTY_FUNCTION__);  /* return a string literal */

return (0);
}
