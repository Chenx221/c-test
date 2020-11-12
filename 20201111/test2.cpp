#include<stdio.h>
int sss,n1,n2;

int sum(int a,int b) {
	for (int i=a;i<=b;i++) {
		sss+=i;}
	return sss;
	}
	
void is_n1bign2(int m,int n) {
	int temp;
	if (m>n) {temp=m;m=n;n=temp;}
	n1=m;
	n2=n;
	return;
	
	}
	
int main() {
	scanf("%d %d",&n1,&n2);
	is_n1bign2(n1,n2);
	sum(n1,n2);
	printf("%d",sss);

	return 0;
	}
