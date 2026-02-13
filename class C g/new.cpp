#include<stdio.h>
#include<unistd.h>

int main(){
	
	int i = 10;
	
	while(i >=0){
		system("cls");
		if(i % 5 == 0){
			system("color 0C");
		}
		
		else if(i % 5 == 1){
			system("color 0E");
		}
		
		else if(i % 5 == 2){
			system("color 09");
		}

		else if(i % 5 == 3){
			system("color 0D");
		}
		
		else{
			system("color 0B");
		}
		
		printf("\t\n\n\n\n\n\n\n");
		
		printf("        ==========================     \n");
		printf("        * HEPPY KHMER NEW YEAR!! *\n");
		printf("        ==========================     \n");
		sleep(1);
		i--;
		
	}
	
}
