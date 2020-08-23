#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int w1,r,b1000, b500, b100, b50, b20, b10, b5, b2, b1;
	printf("----ONLY INTEGER NUMBER----\n");
	printf("Enter the desired amount : ");
	scanf("%d", &w1);
	w1 = w1 / 1;
	if (w1 > 0 )
	{
		printf("Amount of money you will get is : %d", w1);
		b1000 = w1 / 1000; r = w1 % 1000;
		b500 = r / 500; r = r % 500;
		b100 = r / 100; r = r % 100;
		b50 = r / 50; r = r % 50;
		b20 = r / 20; r = r % 20;
		b10 = r / 10; r = r % 10;
		b5 = r / 5; r = r % 5;
		b2 = r / 2; r = r % 2;
		b1 = r / 1; r = r % 1;
		printf("\n--Your received--");
		printf("\nb1000 = %d", b1000);
		printf("\nb500 = %d", b500);
		printf("\nb100 = %d", b100);
		printf("\nb50 = %d", b50);
		printf("\nb20 = %d", b20);
		printf("\nb10 = %d", b10);
		printf("\nb5 = %d", b5);
		printf("\nb2 = %d", b2);
		printf("\nb1 = %d", b1);
	}
	else if (w1 == 0)
	{
		printf("\nZERO!!");
	}
	else 
	{
		printf("\nPlease follow the rules!!");
	}

	return 0;
}
