#include <stdio.h>

void __attribute__((constructor)) myStartupFun(void);

/**
 * myStartupFun - implementation of myStartupFun
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n")
	printf("I bore my house upon my back!\n");

}
