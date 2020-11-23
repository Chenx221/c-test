#include<iostream>
using namespace std;

void conv(int);

int csd,hsd;

int main() {
	
	cout << "Please enter a Celsius value: ";
	cin >> csd;
	conv(csd);
	cout << csd <<" degrees Celsius is "<<hsd<<" degrees Fahrenheit.";
	
	return 0;
	}

void conv(int c) {
	hsd = c*1.8+32.0;
	}
