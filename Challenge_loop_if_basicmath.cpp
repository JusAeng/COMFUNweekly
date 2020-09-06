#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
int main()
{
	int a, b, c, x;
	int total = 0;
	double sd0,d=0,sd,av,n;
	printf("enter 2 numb : ");
	scanf("%d %d", &a, &b);
	printf("\n\nINPUT : %d %d", a, b);
	printf("\nOUTPUT : \n");
	printf("          ");
	if (a > b)
	{
		for (x = a; x >= b; x--)
		{
			printf("%d  ", x);
			c = x * x;
			d += c;
			total = total + x;

		}
		n = a - b + 1;
		av = total / n;
		printf("\n          Average = %.2lf", av);
		sd0 = ((n * d) - (total * total)) / (n * (n - 1));
		sd = sqrt(sd0);
		printf("\n          SD = %.2lf", sd0);
	}
	else if (a < b)
	{
		for (x = a; x <= b; x++)
		{
			printf("%d  ", x);
			c = x * x;
			d += c;
			total = total + x;
		}
		n = b - a + 1;
		av = total / n;
		printf("\n          Average = %.2lf", av);
		sd0 = ((n * d) - (total * total)) / (n * (n - 1));
		sd = sqrt(sd0);
		printf("\n          SD = %.2lf", sd0);
	}
	else
	{
		printf("%d",a);
		printf("\n          Average = %d", a);
		printf("\n          SD = 0");
	}
}
