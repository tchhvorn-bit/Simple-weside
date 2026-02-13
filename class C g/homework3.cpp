#include<stdio.h>

int main(){
	
	int score;
	printf("Enter Your SCORE: ");
	scanf("%d", &score);
	char grade;
	
	if(score >= 95)
		grade = 'A';
		
	if(score >= 85 && score < 95)
		grade = 'B';
		
	if(score >= 75 && score < 85)
		grade = 'C';
		
	if(score >= 65 && score < 75)
		grade = 'D';
		
	if(score >= 50 && score < 65)
		grade = 'E';
		
	if(score < 50)
		grade = 'F';
	
	printf("\nYOUR RESULT IS: %c", grade);
	
		
	return 0;
}
