#include<stdio.h>
void main(){
	int m;
	printf("Enter the mark:");
	scanf("%d",&m);
	if(m>=75)
	    printf("%d is distinction.",m);
	else if(m>=65)
	    printf("%d is first class.",m);
	else if(m>=55)
	    printf("%d is second class.",m);
	else if(m>=40)
	    printf("%d is pass class.",m);
	else if(m<40)
	    printf("%d is fail.",m);
}
