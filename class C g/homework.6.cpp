#include<stdio.h>

int main(){
	
	float pay;
	float dis;
	float amount;
	
	printf("Enter Your PAY: $");
	scanf("%f", &pay);
	
	if(pay >= 150)
		if(pay >= 300)
			if(pay >= 550)
			dis = pay * 0.1;		
			else
				dis = pay * 0.07;
		else
			dis = pay * 0.05;
	else 
		dis = pay * 0.02;		
	
	amount = pay - dis;
	
	printf("Your discount is: $%.2f\n", dis);
	printf("Your amount befor discount is: $%.2f", amount);
				
	
}
