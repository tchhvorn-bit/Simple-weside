#include<stdio.h>

int main(){
	
	float salary, tax, amount;
	printf("Enter your SALARY: ");
	scanf("%f", &salary);
	
	if(salary >= 1500)
		
		tax = salary * 0.1;
		amount = salary - tax;
	if(salary >= 550 < 1500)
	
		tax = salary * 0.05;
		amount = salary - tax;
	if(salary < 550)
	
		tax = salary * 0.02;
		amount = salary - tax;		
	
	printf("Your SALARY is: %.2f$", amount);
	
	
	return 0;
	
}

