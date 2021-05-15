#include <stdio.h>
int is_digit(char c);
int main() {
    char input;

    printf("아무 문자나 숫자 하나를 입력하세요. : ");
    scanf("%c", &input);

    if (is_digit(input)) {
        printf("%c 는(은) 숫자 입니다. \n", input);
    } 
    else {
        printf("%c 는(은) 숫자가 아닙니다. \n", input);
    }

    return 0;
}

int is_digit(char c) {
	int returnValue = 0;
	
    if (48 <= c && c <= 57) {
        returnValue = 1//return 1;
    } 
    else {
        returnValue = 0;//return 0;
    }
}