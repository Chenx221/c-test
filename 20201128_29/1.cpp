#include<stdio.h>
#include<ctype.h>
void show(int);
char result[100];
int main() {
	char ch;
	int i=0;
	printf("Tips:1��ֻ����1���ַ����ַ�֮��ո����\n"); 
	while ((ch=getchar()) !='\n') {
		getchar();
		if (isupper(ch)) {//alnum��ĸ������ //�˴�������ĸ�Ϳո񣬴�д��ת����Сд 
			result[i]=tolower(ch);
			i++;
		}
		else if (islower(ch) || isblank(ch)) {
			result[i]=ch;
			i++;
		}
		//debug
		printf("ch= %c ,result[%d]= %c ,i= %d ,full result =%s \n",ch,i,result[i],i,result);
	}
	
	
	show(i);



	return 0;
}
void show(int i) {
	for (int k =0;k<=i;k++) {
		printf("%c",result[k]);
	}
}
