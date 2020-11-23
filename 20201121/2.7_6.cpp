#include<iostream>
using namespace std;

double conv(double);

int main() {
	double ly,au;
	cout <<"Enter the number of light years: ";
	cin >> ly;
	au = conv(ly);
	cout <<ly<<" light years = "<<au<<" astronomical units.";

	return 0;
	}

double conv(double l) {
	return l*63240;
	}
