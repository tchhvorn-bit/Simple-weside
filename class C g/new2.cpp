#include<stdio.h>
#include<windows.h>
#include<unistd.h>

void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
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
		gotoxy(60,12);
		printf("%d", i);
		sleep(1);
		i--;
	}
	int j = 0;
	while(j <= 10){
		system("cls");
		if(j % 5 == 0){
			system("color 0C");
		}
		
		else if(j % 5 == 1){
			system("color 0E");
		}
		
		else if(j % 5 == 2){
			system("color 09");
		}

		else if(j % 5 == 3){
			system("color 0D");
		}
		
		else{
			system("color 0B");
		}
		gotoxy(40,12);
		printf("	==========================	");
		gotoxy(40,13);
		printf("	* HAPPY KHMER NEW YEAR! * ");
		gotoxy(40,14);
		printf("	==========================	");
		sleep(1);
		j++;
	}
}
