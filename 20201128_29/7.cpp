#include<stdio.h>
int main() {
	char ch;
	//puts("tips:ctrl+z exit");
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}
	return 0;
} 
