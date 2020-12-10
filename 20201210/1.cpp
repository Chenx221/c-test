#include<stdio.h>
int sign(int);
int main()
{
    int n,s;
    printf("x=");
    scanf("%d",&n);
    s=sign(n);
    printf("f(x)=%d",s);
    return 0;
}
int sign(int x) {
    if (x>0) return 1;
    else if (x<0) return -1;
    else return 0;
}
