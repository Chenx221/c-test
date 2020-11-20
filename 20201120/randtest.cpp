#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
int main() {
    using namespace std;
    int temp;
    for (int i=1;i<=100;i++) {
        Sleep(1000);
        srand((unsigned)time(NULL));
        temp = rand();
        cout << temp<< endl;
    }
    return 0;
}