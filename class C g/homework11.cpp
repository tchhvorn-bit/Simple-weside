#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int a, b, max, min;
	char key;
	char word;
	
	back:
		system("cls");
		printf("ENTER '1' FOR FIND MAXIMUM.\n");
		printf("ENTER '2' FOR FIND MINIMUM.\n");
		printf("YOU CHOICE: ");
		key = getch();
		
		switch(key){
			case '1':
				printf("\nENTER YOUR NUMBER a: ");
				scanf("%d", &a);
		
				printf("\nENTER YOUR NUMBER b: ");
				scanf("%d", &b);
				
				if(a > b){
					max = a;
				}
				else{
					max = b;
				}
				printf("\nMAXIMUM IS: %d", max);
				break;
			case '2':
				printf("\nENTER YOUR NUMBER a: ");
				scanf("%d", &a);
		
				printf("\nENTER YOUR NUMBER b: ");
				scanf("%d", &b);
				
				if(b < a){
					min = b;
				}
				else{
					min = a;
				}
				printf("\nMANIMUM IS: %d", min);
				break;
		}
	printf("\nPRESS KEY 'E' OR 'e' TO RUN AGIAN, ANY TO EXIT.\n");
	printf("KEY: ");
	
	word = getch();
	
	if(word == 'E' || word == 'e'){
		goto back;
	}
	
}
