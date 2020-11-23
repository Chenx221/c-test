#include<iostream>
using namespace std;
int n[999];
void sort(int);
void show();
int main()
{
    int pn,score[999];
    /*
    n[] 1a 2b 3c 4d 5e
    */

    cout << "学生数量：";
    cin >> pn;
    cout <<"键入成绩: "<<endl;
    for (int i =1;i<=pn;i++) {
        cin >>score[i];
        sort(score[i]);
        getchar();
        }
    show();
    return 0;
}
void sort(int k) {
    if (k>=90) n[1]++;
    else if (k>=80) n[2]++;
    else if (k>=70) n[3]++;
    else if (k>=60) n[4]++;
    else n[5]++;
}
void show() {
    cout <<"********************分割线********************"<<endl;
    cout <<"A: "<<n[1]<<endl<<"B: "<<n[2]<<endl<<"C: "<<n[3]<<endl<<"D: "<<n[4]<<endl<<"E: "<<n[5]<<endl;
    }
