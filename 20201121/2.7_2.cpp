#include<iostream>
using namespace std;

int conv_ltom(int);

int main() {
	int longs,ma;
	
	cin >> longs;
	ma =conv_ltom(longs);
	cout << longs << " long=" << ma << " 码";
	
	return 0;
	}
	
int conv_ltom(int l) {
	return l*220;
	}
