#include <stdio.h>

int main()
{
	int num;
	
	printf("아무 숫자나 입력해보세요 : ");
	scanf_s("%d", &num);
	
	if (num == 7)
	{
		printf("a 행운의 숫자 7이군요! \n");
	}
	if (num == 8)
	{
		printf("b 행운의 숫자 8이군요! \n");
	}
	if (num == 9)
	{
		printf("c 행운의 숫자 9이군요! \n");
	}
	if (num == 10)
	{
		printf("d 행운의 숫자 10이군요! \n");
	}
	
	return 0;
}