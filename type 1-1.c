#include<stdio.h>
void add(){
	int a,b,sum=0;
	printf("Enter two number: ");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("Summation of %d and %d is:%d",a,b,sum);
}
void main(){
	add();
	
}
