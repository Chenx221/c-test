#include<stdio.h>
int main() {
	int num=666;
	/*while (num>=667) {
		printf("%d\n",num);num/=2;}*/
	num=0;
	do {num+=1;
	if (num %2 ==0) continue;
	printf("%d\n",num);
	} while (num <=100);
	return 0;}
