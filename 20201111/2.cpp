#include<stdio.h>
int main() {
	double speed,limit;
	printf("�ڴ˼�����ĳ��ٺ͵�ǰ��·���ٶ�����\n");
	scanf("%lf%lf",&speed,&limit);
	if ((speed-limit)>=(limit*0.5)) printf("���س��٣���ʻ֤�ѱ�����");
	else if((speed-limit)>=(limit*0.5)) printf("���ѳ��٣������200Ԫ����");
	else printf("��ǰ���ٷ��Ϲ涨���������ʻ");
	


	return 0;
	} 
