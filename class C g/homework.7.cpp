#include<stdio.h>

int main(){
	
	float score;
	char grade;
	
	printf("ENTER YOUR SCORE: ");
	scanf("%f", &score);
	
	if(score <= 95);
		if(score <= 85)
			if(score <= 75)
				if(score <= 65)
					if(score <= 50)
						if(score < 50)
							grade = 'F';
					else 
						grade = 'E';
				else
					grade = 'D';
			else
				grade = 'C';
		else
			grade = 'B';
	else 
		grade = 'A';
		
		
	printf("YOUR GRADE IS: %c", grade);
}
