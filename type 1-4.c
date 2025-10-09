#include<stdio.h>
void swap(){
	int a,b,temp;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a second number:");
	scanf("%d",&b);
	printf("The valuer of a is: %d and b is: %d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping the value will be a is:%d and b is:%d",a,b);
}
void main(){
	swap();
}
