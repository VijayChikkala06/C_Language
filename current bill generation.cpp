#include<stdio.h>
int main()
{
	int units;
	float current_bill;
	printf("Enter no of units consumed :");
	scanf("%d",&units);
	if(units>0){
	if(units<=100)
	{
		current_bill=units*1.9;
		printf("%f",current_bill);
		}
		else if(units<=200){
		current_bill=units*2.8;
		printf("%f",current_bill);
		}
		else if(units<=300){
		current_bill=units*3.56;
		printf("%f",current_bill);
		}
		else if(units<=400){
		current_bill=units*4.95;
		printf("%f",current_bill);
		}
			else if(units<=500){
		current_bill=units*5.76;
		printf("%f",current_bill);
		}
			else if(units<=600){
		current_bill=units*7.55;
		printf("%f",current_bill);
		}
			else if(units<=1000){
		current_bill=units*9.88;
		printf("%f",current_bill);
		}
		else{
			printf("ala avvadhu amma");
		}
	} else printf("ala avvadhu amma");
	
	
}
