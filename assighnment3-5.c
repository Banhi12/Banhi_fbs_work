#include<stdio.h>
void main(){
	int n,cube,sum,temp,rev,rem;
	printf("Enter a number to check it is armstrong or not:");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		rem=n%10;
		cube=rem*rem*rem;
		sum=sum+cube;
		n=n/10;
	}
	if(sum==temp){
		printf("%d is a armstrong number.",temp);
	}else
	    printf("%d is not a armstrong number.",temp);
}
