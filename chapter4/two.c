int c = 6;
extern int a, b;

int func(int x, int y)
{
	a++; b++;
	return (x + y + a + b);
}
