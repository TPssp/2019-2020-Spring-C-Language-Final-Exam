#include <stdio.h>

int f(int n)
{
	if (n == 1)return 1;
	else if (n == 2)return 1;
	else return f(n - 1) + f(n - 2);

}


int main()
{
	int i;
	for (i = 1; i < 11; i++)
	{
		printf("%d ", f(i));
	}
	return 0;
}