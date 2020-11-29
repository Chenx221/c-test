#include <iostream>

#define PI 3.1415
using namespace std;

int main() {
    float r, value;
    cout << "请输入半径：";
    cin >> r;
    value = PI * r * r;
    cout << "面积：" << value << endl;

    return 0;
}
