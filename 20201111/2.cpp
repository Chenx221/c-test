#include<stdio.h>
int main() {
	double speed,limit;
	printf("在此键入你的车速和当前道路的速度限制\n");
	scanf("%lf%lf",&speed,&limit);
	if ((speed-limit)>=(limit*0.5)) printf("严重超速，驾驶证已被吊销");
	else if((speed-limit)>=(limit*0.1)) printf("您已超速，请缴纳200元罚款");
	else printf("当前车速符合规定，请继续驾驶");
	


	return 0;
	} 
