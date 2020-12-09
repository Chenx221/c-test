#include<iostream>
using namespace std;
int n[5];
void sort(int);
void show();
void reset(); 
int main()
{
    int pn;reset();
    cout << "学生数量：";
    cin >> pn;int score[pn];
    cout <<"键入成绩: "<<endl;
    for (int i =1;i<=pn;i++) {
        cin >>score[i];
        if (score[i]>100) {
			i--;
			cout <<"请输入0~100之间的分数"<<endl;
			continue;
		}
        sort(score[i]);
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
    for (int i=65,k=1;k<=5;i++,k++) {
		cout << (char) i<<"："<<n[k]<<endl;
	}
    }
void reset(void) {
	int i=1;
	while (i<=5) {
		n[i]=0;i++;
	}
}
