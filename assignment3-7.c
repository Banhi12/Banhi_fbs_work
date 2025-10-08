#include<stdio.h>
void main(){
	int n,fac=1,rem,temp,i;
	printf("Enter a number to check its factorial:");
	scanf("%d",&n);
	temp=n;
	for(i=1;i<=n;i++){
		fac*=i;
	}
	printf("The factorial of %d is %d",temp,fac);
}
