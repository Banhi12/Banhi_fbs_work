#include<stdio.h>
void pallindrome(){
	int rev,rem,num,i,temp;
	printf("Enter a 3digit number is palindrome or not:");
	scanf("%d",&num);
	temp=num;
		while(num!=0){
			rem=num%10;
			rev=rev*10+rem;
			num/=10;
		}
		if(rev==temp){
			printf("%d is palindrome.",temp);
		}
		else{
			printf("%d is not a palindrome number, its reverse is:%d",temp,rev);
		}
}
void main(){
	pallindrome();
}
