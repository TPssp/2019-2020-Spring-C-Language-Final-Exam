#include <stdio.h>

float m(float a[], int n)
{
	int i;
	float sum=1;
	for (i = 1; i < n - 1; i++)
	{
		sum *= a[i];
	}

	return sum;
}

//
//int main()
//{
//	float a[3] = { 1,2,3 };
//	int n;
//	scanf_s("%d", &n);
//	printf("%lf", m(a, n));
//
//}