#include<stdio.h>
void vote()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>18){
		printf("Yes you can vote.");
	}else{
		printf("No you are too young so you can not vote");
	}
}
void main(){
	vote();
}
