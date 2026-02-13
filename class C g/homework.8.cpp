#include<stdio.h>

int main(){
	
	float score;
	char grade;
	
	printf("ENTER YOUR SCORE: ");
	scanf("%f", &score);
	
	if(score < 50);
		if(score >= 50)
			if(score >= 65)
				if(score >= 75)
					if(score >= 85)
						if(score >= 95)
							grade = 'A';
					else 
						grade = 'B';
				else
					grade = 'C';
			else
				grade = 'D';
		else
			grade = 'E';
	else 
		grade = 'F';
		
		
	printf("YOUR GRADE IS: %c", grade);
}
