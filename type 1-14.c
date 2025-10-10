#include<stdio.h>
void vowelorconsonant(){
	char a;
	printf("Enter a charchter to check it is vowel or consonent:");
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
		printf("Yes %c is vowel",a);
	}else{
		printf("Yes %c is a consonent",a);
	}
}
void main(){
	vowelorconsonant();
}
