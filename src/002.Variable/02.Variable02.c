#include <stdio.h>

int main()
{
	int a = 127;
	
	// printf(127)의 (177)은 (8)진수 표현입니다.
	// printf("%o의 %x 진수 표현은 : %d \n", a, 8, a);
	// printf("%d의 %d 진수 표현은 : %d \n", a, 10, a);
	// printf("%d의 %d 진수 표현은 : %x \n", a, 16, a);

	// (127)의 (177)은 (8)진수 표현입니다
	printf("%d의 %o은 %d진수 표현입니다. \n", a, a, 8);
	printf("%d의 %d은 %d진수 표현입니다. \n", a, a, 10);
	printf("%d의 %x은 %d진수 표현입니다. \n", a, a, 16);
	
	return 0;
}