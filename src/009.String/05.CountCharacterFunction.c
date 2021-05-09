#include <stdio.h>
int str_length(char *str) {
	int i = 0;
	while (str[i]) {
		i++;
	}
	
	return i;
}

int main() {
	char str[] = {"what is your name?"};
	
	int count = str_length(str);
	
	printf("%s \n", str);
	printf("위 문자열의 길이 : %d \n", str_length(str));
	
	return 0;
}