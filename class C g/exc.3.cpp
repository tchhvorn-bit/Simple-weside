#include<stdio.h>

int main(){
	
	int score;
	printf("Enter Your SCORE: ");
	scanf("%d", &score);
	char grade;
	
	if(score >= 95)
		grade = 'A';
		
	else if(score >= 85)
		grade = 'B';
		
	else if(score >= 75)
		grade = 'C';
		
	else if(score >= 65)
		grade = 'D';
		
	else if(score >= 50 && score < 65)
		grade = 'E';
		
	else if(score < 50)
		grade = 'F';
	
	printf("YOUR GRADE IS: %c", grade);
	
		
	return 0;
}
