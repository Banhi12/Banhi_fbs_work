#include<stdio.h>
void Case(){
	char ch;
	printf("Enter a charchter to chek its lowercase and uppercase:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z'){
		printf("%c is uppercase",ch);
	}
	else if(ch>'a'&&ch<='z'){
		printf("%c is a lower case charachter",ch);
	}else{
		printf("%c is not a alphabet",ch);
	}
}
void main(){
	Case();
}
