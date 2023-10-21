#include <stdio.h>
#include <stdlib.h>


//실습1
/*
int main(void)
{
	int flag =1;
	while(flag!=0)
	{
		int y;
		y=3;
		flag=0;
	}
	y=4;
	return 0;
}
 y 변수는 루프 내부에서 선언되었기 때문에 루프 외부에서는 접근할 수 없습니다.
 루프 외부에서 y 변수를 접근하려면 y 변수를 루프 외부에서 선언해야 합니다. 
*/
#include <stdio.h>

int main(void)
{
    int flag = 1;
    int y; // y를 루프 외부에서 선언

    while (flag != 0)
    {
        y = 3; 
        flag = 0; 
    }

    y = 4;
     printf("y: %d\n", y); // y의 값을 출력
    return 0;
}
