#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	char name[50];
	char grade;
	char score; 
	team4:
		system(cls);
		printf("Enter your name: ");
		gets(name);
		
		printf("Enter your score: ");
		scanf(" %f", &score); 
		
	
		printf("\nYour name: %s\n", name);
		printf("Your score: %.2f", score);
		
		
		printf("\nPRESS KEY 'Y' OR 'y' TO CONTINUE, PRESS ANY KEY TO EXIT\n");
		
		key = getch(); 
		if(key == 'y' || key == 'Y')
			goto team4;
		else{
			printf("THANK YOU!!");
		}
		
}
