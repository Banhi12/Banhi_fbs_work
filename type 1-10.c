#include<stdio.h>
void mark(){
	int a, b, c, d, e, tot;
    float per;

    printf("Enter marks (out of 100) for Geography, Science, Math, History, and English:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    tot = a + b + c + d + e;
    per = (tot / 500.0) * 100;

    printf("The total marks are %d and percentage is %.2f%%\n", tot, per);
}
void main(){
	mark();
}
