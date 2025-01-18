
#include<stdio.h>
#include<math.h>
int main () 
{ float principal_amount,time,rate,compound_interest;

printf("enter the principal amount:/n");
scanf("%f",&principal_amount);

printf("enter the time :\n");
sacnf("%f",&time);

printf("enter the rate(in%):/n");
scanf("%f",&rate);

compound_interest= principal_amount*pow((1 + rate/100), time);

    printf("The compound_interest is: %.2f\n",Compound_interest);

    return 0;
}

