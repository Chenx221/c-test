#include<stdio.h>
#include<iostream>
int main() {
	using namespace std;
	int month;
	cin >> month;
	switch (month) {

		case 3: 
		case 4:
		case 5: printf("����");break;
		case 6:
		case 7:
		case 8: printf("�ļ�");break;
		case 9:
		case 10:
		case 11: printf("�＾");break;
		case 12:
		case 1:
		case 2: printf("����");break;
		default: printf("���������˸�ɶ");
	}
	return 0;
}
