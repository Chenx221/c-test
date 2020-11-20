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
		case 'A': printf("[A] 新增\n");break;
		case 'B': printf("[B] 修改\n");break;
		case 'C': printf("[C] 删除\n");break;
		case 'D': printf("[D] 显示所有学生信息\n");break;
		case 'E': printf("[E] 按学号查询学生信息\n");break;
		case 'F': printf("[F] 按姓名查询学生信息\n");break;
		case 'G': printf("[G] 查询身高在某区间的学生\n");break;
		case 'H': printf("[H] 查询所有男生信息\n");break;
		case 'I': printf("[I] 查询所有女生信息\n");break;
		case 'X': printf("[X] 退出\n");break;
		default: printf("输入错误\n程序已崩溃\n");Sleep(99999);
	}

	return 0;
}
void display() {
	using namespace std;
	cout <<"********************\n"<<"    欢迎使用<学生信息管理系统>   空壳版\n";
	cout <<"作者：Chenx221  chenx221@yandex.com 版权所有\n";
	cout <<"********************\n";
	printf("[A] 新增\n[B] 修改\n[C] 删除\n[D] 显示所有学生信息\n[E] 按学号查询学生信息\n[F] 按姓名查询学生信息\n[G] 查询身高在某区间的学生\n[H] 查询所有男生信息\n[I] 查询所有女生信息\n[X] Exit\n");
	cout <<"********************\n";
	cout <<"请输入要执行的功能前的字母（不区分大小写）：";
}
