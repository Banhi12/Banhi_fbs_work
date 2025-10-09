#include<stdio.h>
void avarage(){
	int a,b,c,d,e,avg;
	printf("Enter 5 numbers to check its average:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	avg=(a+b+c+d+e)/5;
	printf("The avarage is:%d",avg);
}
void main(){
	avarage();
}
