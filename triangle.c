#include<stdio.h>
void main(){
	float h,w,area;
	printf("Enter hight of triangle:");
	scanf("%f",&h);
	printf("and width is:");
	scanf("%f",&w);
	area=0.5*h*w;
	printf("Area of triangle is:%.2f",area);
}
