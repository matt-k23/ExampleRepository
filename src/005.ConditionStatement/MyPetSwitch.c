#include <stdio.h>
int main()
{
	int input;
	
	printf("마이펫 업그레이드\n");
	printf("1. 밥주기 \n");
	printf("2. 씻기기 \n");
	printf("3. 재우기 \n");
	printf("무엇을 할 것인지 입력하세요 : ");
	
	scanf("%d", &input);
	
	switch (input)
	{
		case 1:
			printf("아이 맛있어 \n");
			break;
			
		case 2:
			printf("아이 시원해 \n");
			break;
			
		case 3:
			printf("zzz \n");
			break;
			
		default:
			printf("무슨 명령인지 못 알아듣겠어. 왈왈 \n");
			break;
	}
	
	return 0;
}