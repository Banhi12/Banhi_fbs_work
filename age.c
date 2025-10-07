#include<stdio.h>
void main(){
	int age;
	printf("Enter a number to check age:");
	scanf("%d",&age);
	if(age<12)
	   printf("He / she is a child.");
	else if(age>=12&&age<=19)
	    printf("He /she is a teeneger.");
	else if(age>=20&&age<=25)
	    printf("He / she is a adult");
	else
	  printf("He / she is a senior");
}
