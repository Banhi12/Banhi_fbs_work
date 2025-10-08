#include<stdio.h>
void main(){
	int n,i,count=0;
	printf("Enter a number to check it is prime or not:");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count>1){
		printf("%d is not a prime number.",n);
	}else{
		printf("%d is a prime number.",n);
	}
}
