#include <stdio.h>
int main()
{
    int arrSize = 10;
    //int arr[arrSize] = {1,2,3,4,5,6,7,8,9,10};
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;    
	
	// printf("arr 배열의 크기 : %ld \n", sizeof(arr) / sizeof(int));
	printf("arr 배열의 크기 : %ld \n", sizeof(arr) / sizeof(int));
	
	// for (i = 0; i < 10; i++)
	// {
	//	printf("%d 번째 배열 : %d \n", i + 1, arr[i]);
	// }

    return 0;
}