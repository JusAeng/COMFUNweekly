#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int numb, x, y, z;
	printf("Enter Number : ");
	scanf("%d", &numb);
	for (x = 1; x <= numb; x++)
	{
		if (x == 1)
		{
			for (y = 1; y <= numb; y++)
			{
				if (y < 10)
				{
					printf("%d", y);
					printf("    ");
				}
				else if (y >= 10)
				{
					printf("%d", y);
					printf("   ");
				}
				else if (y >= 100)
				{
					printf("%d", y);
					printf("  ");
				}
			}
			printf("\n");
		}
		else
		{
			for (z = 1; z <= numb; z++)
			{
				if (x * z < 10)
				{
					printf("%d", x * z);
					printf("    ");
				}
				else if (x*z<100)
				{
					printf("%d", x * z);
					printf("   ");
				}
				else 
				{
					printf("%d", x*z);
					printf("  ");
				}
			}
			printf("\n");
		}
	}
}
