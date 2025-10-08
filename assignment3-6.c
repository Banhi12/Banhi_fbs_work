#include<stdio.h>
void main(){
	int num,i,sum=0;
	printf("Enter a number to check it is perfect or not:");
	scanf("%d",&num);
	for(i=1;i<num;i++){
		if(num%i==0){
			sum+=i;
		}
	}
	if(sum==num){
		printf("%d is a perfect number.",num);
	}else{
		printf("%d is not a perfect number.",num);
	}
}
