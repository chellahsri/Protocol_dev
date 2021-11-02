#include<stdio.h>
int main()
{
	int x,y;
	printf("x value is: \n");
	scanf("%d",&x);
	printf("y value is : \n");
	scanf("%d",&y);
	if(x>y)
	{
		printf("x is greater than y\n");
	}
	/*else 
	{	
		printf("y is greater than x \n");
	}*/
	if(x<y)
	{
		printf("y is greater than x \n");
	}
	if(x==y)
	{
		printf("x and y values are equal\n");
	}
	if(x>=y)
	{
		printf("x is equal or greater than y\n");
	}
	if(x<=y)
	{
		printf("x is equal or less than y\n");
	}

		return 0;
}

