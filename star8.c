#include<stdio.h>
void main(){
	int n=4,i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
		if(i==1||j==1||j==4||i==4){
			printf("* ");
		}
		else{
			printf("  ");
		}}
		printf("\n");
	}
}
