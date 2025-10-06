#include<stdio.h>
void main(){
	int n,i,j;
	printf("Engter digit u have a square box:");
	scanf("%d",&n);
	for(i=1;i<=4;i++){
		for(j=1;j<=4;j++){
			printf("* ");
		}
		printf("\n");
	}
}
