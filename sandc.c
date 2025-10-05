#include<stdio.h>
void main(){
	int a,square,cube;
	printf("Enter a number for calculate square anmd cube:");
	scanf("%d",&a);
	square=a*a;
	cube=a*a*a;
	printf("The square and cube of %d is: %d and %d",a,square,cube);
}
