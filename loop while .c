#include<stdio.h>

int main(){
	int i = 0;
	int sum = 0;
	
	while( i <= 100){
		
		if (i % 3 == 0 && i % 9==0 && i % 18==0 ){
			sum += i;
	}
		i++;
	}
	
	printf("the sum of all number from 0 to 100 divisible by 3,9 and 18 is :%d\n",sum);
	
	return 0;
}
