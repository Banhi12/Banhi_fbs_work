#include<stdio.h>
void area(){
	int r,area;
	float pi;
	printf("Enter a radius of a cicle:");
	scanf("%d",&r);
	pi=22/7;
	area=r*r*pi;
	printf("The area is:%d",area);
}
void main(){
	area();
}
