#include<stdio.h>

int main(){
	
	int m, n, o, p, maximum;
	
	printf("Enter value for M: ");
	scanf("%d", &m);
	
	printf("Enter value for N: ");
	scanf("%d", &n);
	
	printf("Enter value for O: ");
	scanf("%d", &o);
	
	printf("Enter value for P: ");
	scanf("%d", &p);
	
	maximum = m;
	
	if(maximum < n){
		maximum = n;
	}
	if(maximum < o){
		maximum = o;
	}
	if(maximum < p){
		maximum = p;
	}
	
	printf("The Maximum number is: %d", maximum);
	
}
