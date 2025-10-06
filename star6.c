#include<stdio.h>
void main(){
	int n=4,i,j,q=1;
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("%d ",q);
			q++;
		}
		printf("\n");
	}
	
}
