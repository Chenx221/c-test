#include<stdio.h>
int main()
{
	int month;
	scanf("%d",&month);
	if (month>=3 && month <= 5) printf("����");
	else if (month>=6 && month <=8) printf("�ļ�");
	else if (month>=9 && month <=11) printf("�＾");
	else if (month==12 || (month<=2 && month>=1) ) printf("����");
	else printf("�����������ɶ?");
	
    return 0;
}
