#include<stdio.h>

int main(){
	
	char name[50];
	int age;
	char grade;
	float salary;
	char Add[100];
	
	printf("Enter Your NAME: ");
	fgets(name, sizeof(name), stdin);
	
	printf("Enter Your AGE: ");
	scanf(" %d", &age);
	
	printf("Enter Your GRADE: ");
	scanf(" %c", &grade);
	
	printf("Enter Your SALARY: ");
	scanf(" %f", &salary);
	
	printf("Enter Your ADDRESS: ");
	scanf(" %s", &Add);
	
	printf("\nYOUR NAME IS: %s\n", name);
	printf("YOUR AGE IS: %d\n", age);
	printf("YOUR GRADE IS: %c\n", grade);
	printf("YOUR SALARY IS: $%.2f\n", salary);
	printf("YOUR ADDRESS IS: %s\n", Add);
	
	
	
	return 0;
}
