#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int qqq,qqq2,sec,min,hour;
	printf("請輸入秒數\n");
	scanf("%d",&qqq);

	sec=qqq%60;
	qqq2=qqq/60;
	min=qqq2%60;
	hour=qqq2/60;
	printf("%d時,%d分,%d秒\n",hour,min,sec);
	
	system("pause");
	return 0;
}

