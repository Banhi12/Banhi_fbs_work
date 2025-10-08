#include<stdio.h>
void main(){
	int start,end,sum=0,i;
	printf("For range where it start please enter :");
	scanf("%d",&start);
	printf("And end:");
	scanf("%d",&end);
	for(i=start;i<=end;i++){
		sum=i+sum;
	}
	printf("The sum of the range from %d to %d is %d\n",start,end,sum);
}
