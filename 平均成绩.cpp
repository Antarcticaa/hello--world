#include<stdio.h>
int main(void)	
{
    int a,b,c,sum,avg;
	printf("请输入三个学生的成绩：\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("a,b,c");
	sum=a+b+c;
	avg=sum/3;
	printf("总成绩=%d.\t, 平均成绩=%d.\t",sum,avg);
	return 0;
 } 
