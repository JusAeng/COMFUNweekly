#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	const float PI = 3.14;
	float r,area,circum;
	printf("-------Area&Circumference-------");
	printf("\nEnter radius of the circle(m) : ");
	scanf("%f",&r);
	if (r >= 0)
	{
		printf("\nRadius = %.2f m", r);
		circum = 2 * PI * r;
		area = PI * r * r;
		printf("\nCircumference : %.2f m", circum);
		printf("\nArea : %.2f m^2", area);
	}
	else
	{
		printf("--------ERROR--------");
	}
}