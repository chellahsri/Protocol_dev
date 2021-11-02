#include<stdio.h>
int main()
{
	int mango,mango_price;
	printf("Enter no.of mango kg's:\n");
	scanf("%d",&mango);
	printf("Enter the price:\n");
	scanf("%d",&mango_price);
	if(mango>0)
	{
	printf("Mangos are available\n");
	}
	if(mango_price==30)
	{
	printf("Buy 5kg mango\n");
	}
	if(mango_price>30)
	{
	printf("Buy 2kg mango's\n");
	}
	return 0;
}


