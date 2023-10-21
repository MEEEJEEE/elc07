#include <stdio.h>
#include <stdlib.h>


//실습2
int main(void)
{
	int i;
	int temp = 1; // temp 변수를 루프 외부에서 선언하고 1로 초기화
	for (i=0; i<5; i++)
	{
		printf("temp=%d\n", temp);
		temp++;
	}
	return 0;
}