#include<stdio.h>

int main(){
	
	int t, y, u, i, minimum;
	
	printf("Enter value for T: ");
	scanf("%d", &t);
	
	printf("Enter value for Y: ");
	scanf("%d", &y);
	
	printf("Enter value for U: ");
	scanf("%d", &u);
	
	printf("Enter value for I: ");
	scanf("%d", &i);
	
	minimum = t;
	
	if(minimum > y){
		minimum = y;
	}
	if(minimum > u){
		minimum = u;
	}
	if(minimum > i){
		minimum = i;
	}
	
	printf("The minimum number is: %d", minimum);
	
}
