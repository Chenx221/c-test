#include<stdio.h>
int main() {
	int isadult;
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	if (age<=18) isadult=0;
	else isadult=age;
	if (isadult) puts("adult");
	else puts("not adult");



	return 0;
} 
