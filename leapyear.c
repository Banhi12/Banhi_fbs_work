//write a progrm to check whether a given year is leap year 
void main(){
	int a;
	printf("Enter a year:");
	scanf("%d",&a);
	if(a%4==0){
		printf("Yes %d is a leap year",a);
	}
	else{
		printf("No %d is not a leap year",a);
	}
}
