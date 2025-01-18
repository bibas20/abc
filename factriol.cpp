#include<stdio.h>
int main (){
	int num,i=0;
	long fact =1;
	printf("enter the number:\n");
	scanf("%d",&num);
	
	for (i=1;i<=num;i++)
	long fact =long fact*i;
	printf("the factriol is :%d",fact);
	return 0;
}
