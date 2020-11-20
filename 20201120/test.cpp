#include<stdio.h>
#include<iostream>
int main() {
	using namespace std;
	int age,sex;
	cout << "请输入年龄"<< endl;
	cin >> age;
	cout << "请输入性别"<< endl;
	cin >> sex;
	switch (sex) {
		case 0: 
			if (age < 6) printf("女婴\n");
			else if (age <18) printf("女孩");
			else if (age <30) printf("女青年");
			else if (age <50) printf("阿姨");
			else printf("老婆婆");
			break;

		case 1: 
			if (age < 6) printf("男婴\n");
			else if (age <18) printf("骚年");
			else if (age <30) printf("男青年");
			else if (age <50) printf("叔叔");
			else printf("老爷爷");
			break;

		default: printf("异常输入");

}



}
