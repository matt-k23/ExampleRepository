// ____*
// ___**
// __***
// _****
// *****

#include <stdio.h>
int main()
{
	int i, j, k;
    int num;
	
	for (i = 0; i < num; i++)
    {
        for(k = 0; k < num - i - 1; k++)
        {
            printf(" ");
        }
        
        for(j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //    *
    //   ***
    //  *****
    // *******
    //*********
}