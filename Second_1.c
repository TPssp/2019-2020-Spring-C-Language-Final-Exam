#include <stdio.h>

int fun(int k)
{
	if (k == 1)return 1;
	return fun(k - 1) + k;
}

int main()
{
	int k;
	scanf_s("%d", &k);
	printf("%d", fun(k));


}