#include<stdio.h>
void main(){
	int n,i;
	printf("Enter a digit for table:");
	scanf("%d",&n);
	for(i=1;i<11;i++){
		printf("%d * %d = %d \n",n,i,n*i);
	}
}
