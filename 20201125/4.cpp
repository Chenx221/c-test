//ͳ��������ı�����Щʲô����
//version 1.0
//last update:
#include<iostream>
#include<string.h>
using namespace std;

void process_all(int);
void sort(char);
void display();
char text[999];
int s1=0,s2=0,s3=0,s4=0;//Сд ��д ���� ���� 

int main() {
	
	cout << "�������ı�"<<endl;
	cin >> text;
	process_all(strlen(text));
	display();
	return 0;
}

void process_all(int v1) {
	for (int i =1;i<=v1;i++) {
		sort(text[i-1]);//ʹ��i-1��Ŀ�����ַ���������text[]�д�0��ʼ����1 
	}
}

void sort(char v2) {
	if (v2>='a' && v2<='z') s1++;
	else if (v2>='A' && v2<='Z') s2++; 
	else if (v2>='0' && v2<='9') s3++;
	else s4++;
}

void display() {
	cout <<"Сд��"<<s1<<endl<<"��д��"<<s2<<endl<<"���֣�"<<s3<<endl<<"������"<<s4<<endl;}
