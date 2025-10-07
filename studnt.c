#include<stdio.h>
void main(){
	int pr;
	float dis=0.0,dif;
	char ch;
	printf("You are student or not then type Y and N:");
	scanf("%c",&ch);
	printf("Enter your purchase price:");
	scanf("%d",&pr);
	if(pr>500&&ch=='Y'||ch=='y'){
	  dis=(20.0/100)*pr;
	  	dif=(float) pr-dis;
	  	printf("The discount is %.2f and the price is %.2f",dis,dif);
	}
	else if(pr<500&&ch=='Y'||ch=='y'){
		dis=(10.0/100)*pr;
        dif=(float) pr-dis;
	  	printf("The discount is %.2f and the price is %.2f",dis,dif);
	}
	else if(pr>600&&ch=='y'||ch=='Y'){
		dis=(15.0/100)*pr;
		dif=(float)pr-dis;
		printf("The discount is %.2f and the price is %.2f",dis,dif);
	}
	else if(pr>600&&ch=='N'||ch=='n'){
	  dis=(20.0/100)*pr;
	  	dif=(float) pr-dis;
	  	printf("The discount is %.2f and the price is %.2f",dis,dif);
	}
	
}
