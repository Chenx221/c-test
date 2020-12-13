#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
float dist(float,float,float,float);
int main()
{
	int i=1;
	float x[2],y[2];
	float *xp=x,*yp=y;
	while (xp<=&x[1]) {
		cout <<"请输入x" <<i <<endl;
		cin >>*xp;
		cout <<"请输入y" <<i <<endl;
		cin >>*yp;
		cout <<"(" <<*xp <<"," <<*yp <<")" <<endl;
		xp++;yp++;i++;
	}
	printf("距离为%.2f",dist(x[0],y[0],x[1],y[1]));
	return 0;
}
float dist(float x1,float y1,float x2,float y2) {
	float s=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	return s;
}