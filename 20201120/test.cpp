#include<stdio.h>
#include<iostream>
int main() {
	using namespace std;
	int age,sex;
	cout << "����������"<< endl;
	cin >> age;
	cout << "�������Ա�"<< endl;
	cin >> sex;
	switch (sex) {
		case 0: 
			if (age < 6) printf("ŮӤ\n");
			else if (age <18) printf("Ů��");
			else if (age <30) printf("Ů����");
			else if (age <50) printf("����");
			else printf("������");
			break;

		case 1: 
			if (age < 6) printf("��Ӥ\n");
			else if (age <18) printf("ɧ��");
			else if (age <30) printf("������");
			else if (age <50) printf("����");
			else printf("��үү");
			break;

		default: printf("�쳣����");

}



}
