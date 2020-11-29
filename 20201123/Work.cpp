#include<stdio.h>
void reset(); 
int n[5];
int main() {
    int pn;reset();
    printf("学生数量：");
    scanf("%d",&pn);int score[pn];
    printf("键入成绩: \n");
    for (int i =1;i<=pn;i++) {
        scanf("%d",&score[i]);
        if (score[i]>100) {
			i--;
			printf("请输入0~100之间的分数\n");
			continue;
		}
        else if (score[i]>=90) n[1]++;
        else if (score[i]>=80) n[2]++;
        else if (score[i]>=70) n[3]++;
        else if (score[i]>=60) n[4]++;
        else n[5]++;
    }
        
    printf("********************分割线********************\n");
    for (int i=65,k=1;k<=5;i++,k++) {
		printf("%c：%d\n",i,n[k]);
	}
	
    return 0;
}
    
void reset(void) {
	int i=1;
	while (i<=5) {
		n[i]=0;i++;
	}
}
//////////////////////////////////////////////
