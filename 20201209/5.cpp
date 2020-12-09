#include<stdio.h>
#include<iostream>
using namespace std;
int countdigit(long long int,int);
int main(){
	long long int num;
	cout <<"请输入一个数："<<endl;
	cin >>num;
	int s=countdigit(num,2);
	cout <<"有"<<s<<"个2";
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