//统计输入的文本都是些什么玩意
//version 1.0
//last update:
#include<iostream>
#include<string.h>
using namespace std;

void process_all(int);
void sort(char);
void display();
char text[999];
int s1=0,s2=0,s3=0,s4=0;//小写 大写 数字 其他 

int main() {
	
	cout << "请输入文本"<<endl;
	cin >> text;
	process_all(strlen(text));
	display();
	return 0;
}

void process_all(int v1) {
	for (int i =1;i<=v1;i++) {
		sort(text[i-1]);//使用i-1的目的是字符串被传入text[]中从0开始而非1 
	}
}

void sort(char v2) {
	if (v2>='a' && v2<='z') s1++;
	else if (v2>='A' && v2<='Z') s2++; 
	else if (v2>='0' && v2<='9') s3++;
	else s4++;
}

void display() {
	cout <<"小写："<<s1<<endl<<"大写："<<s2<<endl<<"数字："<<s3<<endl<<"其他："<<s4<<endl;}
