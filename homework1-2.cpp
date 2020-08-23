#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float w, h, bmi;
	printf("Enter your weight(kg) : ");
	scanf("%f", &w);
	printf("\nEnter your height(cm) : ");
	scanf("%f", &h);
	h /= 100;
	bmi = w / (h * h);
	if (bmi >= 40)
	{
		printf("\nYour BMI = %.2f", bmi);
		printf("\nYour shape : Very fat");
	}
	else if (bmi >= 35)
	{
		printf("\nYour BMI = %.2f", bmi);
		printf("\nYour shape : Fat LV.2");
	}
	else if (bmi >= 28.5)
	{
		printf("\nYour BMI = %.2f", bmi);
		printf("\nYour shape : Fat LV.1");
	}
	else if (bmi >= 23.5)
	{
		printf("\nYour BMI = %.2f", bmi);
		printf("\nYour shape : Over weight");
	}
	else if (bmi >= 18)
	{
		printf("\nYour BMI = %.2f", bmi);
		printf("\nYour shape : Standard");
	}
	else if (bmi < 18.5 && bmi >=0)
	{
		printf("\nYour BMI = %.2f", bmi);
		printf("\nYour shape : Thin");
	}
	else
	{
		printf("\n-----------ERROR-----------");
	}

}