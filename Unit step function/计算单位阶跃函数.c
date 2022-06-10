#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0;
	while (scanf("%d", &q) != EOF)
	{
		if (q > 0)
		{
			printf("1\n");
		}
		else if (!q)
		{
			printf("0.5\n", 1 / 2);
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}