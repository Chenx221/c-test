#include<stdio.h>
#include<iostream>
#include<Windows.h>
void display(); 
int main() {
	using namespace std;
	char key;
	display();
	
	cin >> key;
	
	if (key>='A' && key <='Z');
	else key= key -32;
	
	cout << endl;
	
	switch (key) {
		case 'A': printf("[A] ����\n");break;
		case 'B': printf("[B] �޸�\n");break;
		case 'C': printf("[C] ɾ��\n");break;
		case 'D': printf("[D] ��ʾ����ѧ����Ϣ\n");break;
		case 'E': printf("[E] ��ѧ�Ų�ѯѧ����Ϣ\n");break;
		case 'F': printf("[F] ��������ѯѧ����Ϣ\n");break;
		case 'G': printf("[G] ��ѯ�����ĳ�����ѧ��\n");break;
		case 'H': printf("[H] ��ѯ����������Ϣ\n");break;
		case 'I': printf("[I] ��ѯ����Ů����Ϣ\n");break;
		case 'X': printf("[X] �˳�\n");break;
		default: printf("�������\n�����ѱ���\n");Sleep(99999);
	}

	return 0;
}
void display() {
	using namespace std;
	cout <<"********************\n"<<"    ��ӭʹ��<ѧ����Ϣ����ϵͳ>   �տǰ�\n";
	cout <<"���ߣ�Chenx221  chenx221@yandex.com ��Ȩ����\n";
	cout <<"********************\n";
	printf("[A] ����\n[B] �޸�\n[C] ɾ��\n[D] ��ʾ����ѧ����Ϣ\n[E] ��ѧ�Ų�ѯѧ����Ϣ\n[F] ��������ѯѧ����Ϣ\n[G] ��ѯ�����ĳ�����ѧ��\n[H] ��ѯ����������Ϣ\n[I] ��ѯ����Ů����Ϣ\n[X] Exit\n");
	cout <<"********************\n";
	cout <<"������Ҫִ�еĹ���ǰ����ĸ�������ִ�Сд����";
}
