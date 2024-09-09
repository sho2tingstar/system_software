#include <stdio.h>

int a = 3, b = 4;
int c = 5;

extern int func(int, int);

void main() {
	int i = 1, j = 2;
	c = c + func(i, j);
	printf("%d\n", c);
}
