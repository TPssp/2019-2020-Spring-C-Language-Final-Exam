#include <stdio.h>
int main()
{
	int a[] = { 24,26,10,8,30,12 };
	int i, j, p;
	for (i = 0; i < 6 - 1; i++)
	{
		for (j = 0; j < 6 - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				p = a[j];
				a[j] = a[j+1];
				a[j + 1] = p;
			}
		}
	}
	printf("%d", a[5]);

}