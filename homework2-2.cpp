#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int shopping, hour, minute,hm,hp,pay;
	printf("Shopping expenses : ");
	scanf("%d", &shopping);
	printf("\nParking time(hour,minute) : ");
	scanf("%d %d",&hour,&minute);
	if (minute >= 0 && hour>=0)
	{
		if (minute >= 60)
		{
			hm = minute / 60;
			hour += hm;
			minute %= 60;
			printf("\n                          : %d hours %d minutes", hour, minute);
		}
		if (minute % 60 > 0)
		{
			hour += 1;
		}
		if (shopping >= 1000)
		{
			hp = hour - 4;
		}
		else
		{
			hp = hour - 1;
		}
		if (hp <= 0)
		{
			pay = 0;
		}
		pay = hp * 40;
		if (pay >= 150)
		{
			pay = 150;
		}
		printf("\nPayment for parking : %d", pay);
	}
	else
	{
		printf("\n-------ERROR-------");
	}
}