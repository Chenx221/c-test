#include<stdio.h>
int main()
{
    int a[4],temp,i,k;
    printf("请输入三个数进行升序排序\n格式：数 数 数\n");
    scanf("%d %d %d",&a[1],&a[2],&a[3]);
    for (k=1;k<=2;k++) {//冒泡排序 
        for (i=3;i>=1+k;i--) {
            if (a[i]<a[i-1]) {
                temp=a[i-1];a[i-1]=a[i];a[i]=temp;
            }
        }
    }
    printf("%d %d %d",a[1],a[2],a[3]);
    return 0;
}
