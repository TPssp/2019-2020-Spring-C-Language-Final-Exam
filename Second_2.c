#include <stdio.h>
#include <string.h>
int main()
{
	char* s[5] = { "python","java","c++","basic","pascal" };
	char* t;
	int i, j, n = 5;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (strcmp(s[j],s[j+1])>0)
			{
				t = s[j];
				s[j] = s[j + 1];
				s[j + 1] = t;
			}


		}
	}
	for (i = 0; i < n; i++)
	{
		puts(s[i]);
	}
}