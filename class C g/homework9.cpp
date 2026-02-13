#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	float score;
	char grade;
	char key;
	
	classer:
		printf("Enter Your Score: ");
		scanf("%f", &score);
	
		if(score >= 95){
			grade = 'A';
		}
		else if(score >= 85){
			grade = 'B';
		}
		else if(score >= 75){
			grade = 'C';
		}
		else if(score >= 65){
			grade = 'D';
		}
		else if(score >= 50){
			grade = 'E';
		}
		else{
			grade = 'F';
		}
	printf("YOUR GRADE IS: %c\n", grade);
	
	printf("\nPress c or C to continue, Any key to EXIT\n");
	
		key = getch();
		if(key == 'c' || key == 'C')
			goto classer;
	
	
	
	
}
