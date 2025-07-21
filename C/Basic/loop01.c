#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 100;

	while (i >= 0) {
		printf("%d\n", i);
		i--;
		// i -= 1;
		// i = i-1;
	}

	return 0;
}
