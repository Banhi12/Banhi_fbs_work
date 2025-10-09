#include<stdio.h>
void temp(){
	int c,f;
	printf("Enter the celcius of your environment:");
	scanf("%d",&c);
	f=(c*(9/5))+32;
	printf("The fahrenhit is:%d",f);
}
void main(){
	temp();
}
