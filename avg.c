#include<stdio.h>
int main(){
	int a,b,c,d,e,avg;
	printf("Enter 5 numbers to check its average:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a>b && a>c && a>d && a>e){
		printf("The avrage among 5 numbers is:%d",a);
	}
	if(b>a && b>c && b>d && b>e){
		printf("The avrage among 5 numbers is:%d",b);
	}
	if(c>a&&c>b&&c>d&&c>e){
		printf("The avrage among 5 numbers is:%d",c);
	}
	if(d>a&&d>b&&d>c&&d>e){
		printf("The avrage among 5 numbers is:%d",d);
	}
	if(e>a&&e>b&&e>c&&e>d){
		printf("The avrage among 5 numbers is:%d",e);
	}
}
