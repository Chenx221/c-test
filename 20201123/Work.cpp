#include<stdio.h>
int main() {
    int pn,score[999],temp,i,n[7];
    /*
    n[] 1a 2b 3c 4d 5e
    */
    printf("学生数量：");
    scanf("%d",&pn);
    printf("键入成绩: \n");
    for (i =1;i<=pn;i++) {
        scanf("%d",&score[i]);
        getchar();
        if (score[i]>=90) n[1]++;
        else if (score[i]>=80) n[2]++;
        else if (score[i]>=70) n[3]++;
        else if (score[i]>=60) n[4]++;
        else n[5]++;
        }
    printf("********************分割线********************\n");
    printf("A: %d\nB: %d\nC: %d\nD: %d\nE: %d\n",n[1],n[2],n[3],n[4],n[5]);

    return 0;
    }
