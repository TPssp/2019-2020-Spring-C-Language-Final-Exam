#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct stu {

	char name[10];
	double score;
};

int main()
{
	struct stu Stu[3];
	struct stu* p=Stu;
	int i;
	for (i = 0; i < 3; i++)
	{
		scanf("%s %lf", p->name, &p->score);
		p++;
	}
	p = Stu;
	for (i = 0; i < 3; i++)
	{
		printf("%s %lf\n", p->name, p->score);
		p++;
	}


}
