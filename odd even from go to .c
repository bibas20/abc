#include <stdio.h>
 
 int main()
{
	int i= 0;
	char isOdd='y';
	   data:
		for (i=0; i<=100;i++)
		
			if (isOdd=='y')
			{
				if (i%2!=0)
				{
			
					printf("%d\t", i);
				}
			}
		
		else
		{
			if (i%2==0)
			{
				printf("%d\t",i);
			}
		}
		if (isOdd=='y')
		{
			isOdd='n';
			goto data;
		}
	 return 0; 
}
