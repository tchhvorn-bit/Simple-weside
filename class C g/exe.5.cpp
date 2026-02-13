#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	
	int st;
	int et;
	int total;
	char key;
	
	printf(">>== WARNING: IF YOUR IN BEFORE HOUR 12 AND EXIT BEFOR HOUR 12.YOUR MUST PAY 100 REAL / HOUR.\n");
	printf("== IF YOUR IN PASS HOUR 12 AND EXIT PASS HOUR 12.YOUR MUST PAY 200 REAL / HOUR.\n");
	
	MOTO:
		printf("\nEnter your start time: ");
		scanf("%d", &st);
	
		printf("Enter your end time: ");
		scanf("%d", &et);
	
		if(st < 12 && et < 12 ){
			total = (et - st) * 100;
		}
		else if(st >= 12 && et > 12){
			total = (et - st) * 200;
		}
		else{
			total = (12 -st) * 100 + (et - 12) * 200;
		}
	printf("\nYOU MUST GIVE MONEY TO CASHEI IS: %d REAL\n", total);
	
	printf("\nPRESS YOUR KEY 'Y' OR 'y' TO AGAIN, ANY TO EXIT: ");
	printf("\nYOUR KEY: ");
	
	
	key = getch();
	
	if(key == 'Y' || key =='y'){
		goto MOTO;
	}
}
