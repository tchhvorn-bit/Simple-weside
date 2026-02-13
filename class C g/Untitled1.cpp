#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	
	int x, y, min;
	char ch;
	again:
		
		printf("iput X = ");
		scanf("%d", &x);
		
		printf("iput Y = ");
		scanf("%d", &y);/////
		
		min = (x < y) ? x : y;
		printf("Minimum is = %d\n", min);
		
		printf("\nPress Y to contiune, Any key to exit\n");
		ch = getch();
		if(ch == 'y' || ch == 'Y')
			goto again;
	
	
	
	
}
