#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter 3 digit to check the biggest one:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c){
		printf("%d is biggest.",a);
	}
	else if(b>a&&b>c){
		printf("%d is biggest.",b);
	}else
	  printf("%d is biggest.",c);
}
