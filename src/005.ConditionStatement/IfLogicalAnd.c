#include <stdio.h>
int main()
{
	int a;
	printf("아무 숫자나 입력하세요 : ");
	scanf("%d", &a);
	
	if (a >= 10 && a < 20)
	{
		printf(" %d 는 10 이상, 20 미만인 수입니다. \n", a);
	}
	
	return 0;
}