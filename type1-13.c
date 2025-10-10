#include<stdio.h>
void leapyear(){
	int a;
	printf("Enter a year:");
	scanf("%d",&a);
	if(a%4==0){
		printf("Yes %d is a leap year",a);
	}
	else{
		printf("No %d is not a leap year",a);
	}
}
void main(){
	leapyear();
}
