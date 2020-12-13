#include<stdio.h>
#include<iostream>
using namespace std;
int countdigit(long long int,int);
int main(){
	long long int num;
	printf("请输入一个数：\n");
	cin >>num;//没有找到合适的方式来用scanf传入long long int类型给sum 
	printf("有%d个2",countdigit(num,2));
	return 0;
}
int countdigit (long long int a,int b) {
	int t=0;
	while (a>0) {
		if (a%10==b) t++;
		a/=10;
	}
	return t;
}
