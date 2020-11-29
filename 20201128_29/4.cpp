#include<stdio.h>
#include<iso646.h>//enabled and,or,not
#include<stdbool.h>//enabled true,false
int abs(int);//only support integer 
int main() {
	bool isfinished=false;int num;
	if (1>2 or 2>1) printf("test ok\n");
	if (1+2==3) isfinished=true;
	if (isfinished) printf("exiting...\n");
	printf("求绝对数，仅支持整数输入\n");
	scanf("%d",&num);
	printf("|%d|=%d",num,abs(num)); 





	return 0;
}
int abs(int inputnum) {
	int result=(inputnum<0)? -inputnum : inputnum;
	return result;
}
//define * * 
