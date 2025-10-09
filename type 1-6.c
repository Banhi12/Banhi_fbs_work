#include<stdio.h>
void square(){
		int a,square,cube;
	printf("Enter a number for calculate square :");
	scanf("%d",&a);
	square=(a*a);
	printf("The square of %d is: %d\n",a,square);
}
void cube(){
		int a,square,cube;
	printf("Enter a number for calculate cube:");
	scanf("%d",&a);
	cube=(a*a)*a;
	printf("The cube of %d is: %d",a,cube);
}
void main(){
	square();
	cube();
}
