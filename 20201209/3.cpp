#include<stdio.h>
#include<math.h>
float dist(float,float,float,float);
int main()
{
	int i=1;
	float x[2],y[2];
	while (i<=2) {
		printf("ÇëÊäÈëx%d\n",i);
		scanf("%f",&x[i-1]);
		printf("ÇëÊäÈëy%d\n",i);
		scanf("%f",&y[i-1]);
		printf("(%f,%f)\n",x[i-1],y[i-1]);
		i++;
	}
	printf("¾àÀëÎª%.2f",dist(x[0],y[0],x[1],y[1]));
	return 0;
}
float dist(float x1,float y1,float x2,float y2) {
	float s=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	return s;
}
