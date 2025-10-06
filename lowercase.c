//given a charcheter to check it is upper case or lower case
#include<stdio.h>
int main(){
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
