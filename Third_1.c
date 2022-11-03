#include <stdio.h>
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	if (a > b)
		printf("%d", b);
	else printf("%d", a);
	return 0;
}