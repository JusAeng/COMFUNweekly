#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int x, y,numb;
	printf("Enter size of table board : ");
	scanf("%d", &numb);
	for (x = 1; x <= numb; x++)
	{
		if (x % 2 == 0)
		{
			for (y = 1; y <= numb; y++)
			{
				printf("-*");
			}
		}
		else
		{
			for (y = 1; y <= numb; y++)
			{
				printf("*-");
			}
		}
		printf("\n");
	}
}