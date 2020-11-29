#include<iostream>

#define name_1 "Chenx221"

using namespace std;

int main() {
    const char *name_2="Chenx221";
    const int num =123; 
    cout << name_1<<endl;
    cout << name_2;
    name_2 = "123";
    cout << name_2;
    num =456;
    printf(num);
}
