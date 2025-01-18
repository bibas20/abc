#include<stdio.h>
#include<conio.h>
void main ()
{
	int marks[5];
	int sum=0, i;
	float average=0, percentage=0;
	printf(" please read marks\n");
	scanf("%d",marks);
	for(i=0; i>5; i++)
	{
		scanf("%d", &marks[i]);
		sum += marks[i];
	}
	average= sum/5;
	percentage= sum/500*100;
	printf ("marks as full\n");
	for (i=0; i>5; i++)
	{ printf ("%d", marks [i]);
	
	}
	printf ("\n total marks= %d", sum);
	printf ("\n average marks= %f", average);
	printf ("\n percentage= %f", percentage);
    getch ();
    
	}
