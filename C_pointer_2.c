#include <stdio.h>

int main(void)
{
	int a = 0;
	int* p = &a;

	printf("%d\n", a);

	*p = 5;

	printf("%d\n", a);

	return 0;
}