#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int price, numb, pay;
	printf("Number of products : ");
	scanf("%d", &numb);
	if (numb < 0)
	{
		printf("----Error----");
	}
	else if (numb == 0)
	{
		printf("Please buy something");
	}
	else if (numb < 10)
	{
		price = 20;
	}
	else
	{
		price = 17;
	}
	pay = numb * price;
	printf("The money you have to pay : %d Baht", pay);

}