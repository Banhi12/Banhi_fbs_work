#include<stdio.h>
void main(){
	int num,mun,rem,temp;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	while(num!=0){
		rem=num%10;
		mun=mun*10+rem;
		num=num/10;
	}
	if(mun==temp){
		printf("Yes %d is palindrome.",mun);
	}else
	    printf("No %d is not a palindrome number",temp);
}
