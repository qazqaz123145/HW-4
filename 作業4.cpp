#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int qqq,qqq2,sec,min,hour;
	printf("�п�J���\n");
	scanf("%d",&qqq);

	sec=qqq%60;
	qqq2=qqq/60;
	min=qqq2%60;
	hour=qqq2/60;
	printf("%d��,%d��,%d��\n",hour,min,sec);
	
	system("pause");
	return 0;
}

