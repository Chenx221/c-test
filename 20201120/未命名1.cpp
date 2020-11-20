#include<stdio.h>
int main()
{
	int month;
	scanf("%d",&month);
	if (month>=3 && month <= 5) printf("´º¼¾");
	else if (month>=6 && month <=8) printf("ÏÄ¼¾");
	else if (month>=9 && month <=11) printf("Çï¼¾");
	else if (month==12 || (month<=2 && month>=1) ) printf("¶¬¼¾");
	else printf("ÄãÕâÊäÈëµÄÊÇÉ¶?");
	
    return 0;
}
