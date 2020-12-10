#include<iostream>
using namespace std;
int even(int);
int main()
{
    int temp,sum=0;
    cin>>temp;
    while (temp>0) {
        if (!even(temp)) sum+=temp;
        cin>>temp;
    }
    cout<<"奇数和为"<<sum;
        
    return 0;
}
int even(int n) {
    int s=((n%2==1)? 0:1);
    return s;
}
