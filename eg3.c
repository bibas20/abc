#include<stdio.h>
int main()
{
	float sp,cp,p,l;
	printf("\n Enter the cost price of an item:");
	scanf ( "%f",&cp);
	printf ("\nEnter the selling price of an item:");
	scanf("%f",&sp);
	
	if (cp>sp)
	{
	p=sp-cp;
	printf("\n the profit  amount is= %0.ef",p);
	}



	else
	{
	l=cp-sp;
		printf("\n the loss amount is =%0.2f",l);
		
	}
	return 0;
}
