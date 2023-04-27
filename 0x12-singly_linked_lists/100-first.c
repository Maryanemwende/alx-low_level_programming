#include <stdio.h>

void __attribute__((constructor)) me_first(void);

/**
 * me_first - prints string before main is executed
 *
 */

void me_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
