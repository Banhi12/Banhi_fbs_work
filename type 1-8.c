#include<stdio.h>
void rectangle(){
	 int h ,w,p;
    printf("Enter the hight of rectangle:");
    scanf("%d",&h);
    printf("and width:");
    scanf("%d",&w);
    p=2*(h+w);
    printf("The perimeter of rectangle is %d",p);
}
void main(){
	rectangle();
}
