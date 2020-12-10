#include<iostream>
using namespace std;
int sign(int);
int main()
{
    int n,s;
    cout<<"x="<<endl;
    cin >>n;
    s=sign(n);
    cout <<"f(x)="<<s;
    return 0;
}
int sign(int x) {
    if (x>0) return 1;
    else if (x<0) return -1;
    else return 0;
}