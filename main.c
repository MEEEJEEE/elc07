#include <stdio.h>
#include <stdlib.h>


//실습4

void f(void);

int i;
int main(void)
{
	int i;
	for (i=0; i<5; i++)
	{
		f();
	}
	return 0;
}

void f(void)
{
	for (i=0; i<10; i++)
	   printf("#");
}