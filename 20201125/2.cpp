#include<stdio.h>
#define praise "You are an extraordinary being."

int main() {
	char name[40];
	printf("what's your name?");
	scanf("%s",name);
	printf("Hello, %s. %s\n",name,praise);

	return 0;}
