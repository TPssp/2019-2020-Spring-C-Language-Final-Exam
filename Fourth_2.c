#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c;
	double p, s;
	scanf_s("%d %d %d", &a, &b, &c);
	if ((a + b > c) && (a + c > b) && (b + c) > a)
	{
		p = 1.0 * (a + b + c) / 2;
		s = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("�ܹ��������Σ����Ϊ: %lf\n", s);
	}
	else printf("���ܹ���������\n");

	return 0;


}