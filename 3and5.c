#include<stdio.h>
void main(){
	int n;
	printf("Enter a number to check it is diviseble by 3 , 5 or both:");
	scanf("%d",&n);
    if(n%3==0&&n%5==0){
		printf("%d is divisble by 3 and 5.",n);
	}else if(n%3==0){
		printf("%d is divisble by 3.\n",n);
	}else if(n%5==0){
		printf("%d is divisble by 5.\n",n);
    }
}
