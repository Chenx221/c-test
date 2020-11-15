#include<stdio.h>

char c1,c2,c3,c4,c5;

void starting() {//初始化 
	c1='C';c2='h';c3='i';c4='n';c5='a';
}

char pullr4(char a) {//后移4位 
	if (a>86 && a<90) a=(a % 87 + 65);
	else if (a>118 && a<122) a=(a % 119 + 97);
	else return a+4;
	return a;
}
	
int main() {//主 
	starting();
	c1=pullr4(c1);c2=pullr4(c2);c3=pullr4(c3);c4=pullr4(c4);c5=pullr4(c5);
	printf("%c%c%c%c%c\n",c1,c2,c3,c4,c5);
	putchar(c1);
	putchar(c2);
	putchar(c3);
	putchar(c4);
	putchar(c5);
	return 0;
}

