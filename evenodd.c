#include<stdio.h>
void main(){
	int a;
	printf("Enter a number to check it is even or odd:");
	scanf("%d",&a);
	if(a%2==0){
		printf("Yes %d is even.",a);
	}
	else{
		printf("Yes %d is odd.",a);
	}
}
