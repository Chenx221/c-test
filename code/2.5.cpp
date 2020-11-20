//2.5
#include<iostream>

void call(int);

int main() {
	using namespace std;
	int times;
	cin >> times;
	call(times);
	
	return 0;
	}

void call(int i){
	using namespace std;
	
	for (int k=1;k<=i;k++) {
		cout << "now ,it's " << k <<" times!";
		cout << endl;
	}
	}
