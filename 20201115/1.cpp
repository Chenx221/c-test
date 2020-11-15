#include<stdio.h>

char c1,c2,c3,c4,c5;

int main() {
	starting();
	printf("%c%c%c%c%c",pullr4(c1),pullr4(c2),pullr4(c3),pullr4(c4),pullr4(c5));
	putchar(pullr4(c1));
	putchar(pullr4(c2));
	putchar(pullr4(c3));
	putchar(pullr4(c4));
	putchar(pullr4(c5));
	return 0;
}

void starting() {
	c1='C';
	c2='h';
	c3='i';
	c4='n';
	c5='a';
	}

char pullr4(char a) {
	if (a>86 && a<90) a=(a % 87 + 65);
	else if (a>118 && a<122) a=(a % 119 + 97);
	else return a+4;
	return a;
	}
