//test
//version 2.0
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char name[20],age[5],sex[8];
	cout << "What's your name? "<<endl;
	cin >> name;
	cout << "How old are you?" <<endl;
	cin >> age;
	cout << "What's your gender?" <<endl;
	cin >> sex;
	cout <<"Hi, "<<name<<"\nYou are "<<age<<endl<<sex<<endl;
	cout <<"name:"<<strlen(name)<<endl<<"age:"<<strlen(age)<<endl<<"sex:"<<strlen(sex)<<endl;//get string longer

	return 0;
} 
