#include<stdio.h>

int main(){
	
	float salary, tax, amount;
	printf("ENTER YOUR SALARY: ");
	scanf("%f", &salary);
	
	
	if(salary >= 550)
		tax = salary * 0.05;
			
	else
		tax = salary * 0.02;
		
	amount = salary - tax;		
	
	printf("YOUR SALARY IS: %.2f$", amount);
	
	
	return 0;
	
}

