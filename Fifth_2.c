#include <stdio.h>
int main()
{
	char a[100]={0};
	gets(a);
	int i;
	for (i = 0;a[i]!='\0'; i++)
	{
		if (a[i] >= '0' && a[i] <= '9')
		{
			printf("%c", a[i]);
		}
	}
}