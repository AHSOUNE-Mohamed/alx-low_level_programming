#include <stdio.h>
/**
 * main size type proram
 */
int main(void)
{
	  char a;
	  int b;
	  int long c;
	  long long int d;
	  float f;

printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of int long: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
