#include<stdio.h>
int even(int);
int main()
{
    int temp,sum=0;
    while (scanf("%d",&temp),temp>0) {
        if (!even(temp)) sum+=temp;
    }
    printf("ÆæÊıºÍÎª%d",sum);
    return 0;
}
int even(int n) {
    int s=((n%2==1)? 0:1);
    return s;
}
