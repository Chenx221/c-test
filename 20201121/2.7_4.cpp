#include<iostream>
using namespace std;

void display_month(int);

int main() {
	int age;
	cin >> age;
	display_month(age);

	return 0;
	}

void display_month(int a) {
	cout << a*12;
	}
