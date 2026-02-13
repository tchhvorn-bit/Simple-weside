#include<stdio.h>

int main(){
	// tax = salary * 0.02
	
	float salary = 0.0;
	
	printf("Enter Your SALARY: ");
	scanf("%f", &salary);
	
	float tax = salary * 0.02;
	float Tax = salary * 0.05;
	float amount = salary - tax;
	float Amount = salary - Tax;
	
	if(salary < 550){
		
		printf("Your TAX is: %.2f$\n", tax);
		printf("Your SALARY after tax is: %.2f$\n", amount);
	}
	if(salary >= 550){
		
		printf("Your tax is: %.2f$\n", Tax);
		printf("Your SALARY after tax is: %.2f$\n", Amount);
	}
	
	return 0;
}
