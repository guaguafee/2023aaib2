//(JY-E-03) [do...while]計算蝸牛爬牆天數 : 小學的數學問題，有一隻蝸牛每天白天能爬5公尺晚上會往下滑2公尺，請同學任意輸入高牆的高度，計算要幾天蝸牛才能爬到頂端(需要超越過頂端才算)？請使用do...while的結構思考。
#include <stdio.h>
int main ( void )
{
	int h,day=0;
	printf("請輸入蝸牛欲爬行的高度：");
	//your code
		scanf("%d", &h);
	while(h>0){
		day++;
		h -= 5;
		if(h<0) break;
		h += 2;
	}
	while(h>0);
    printf("%d天可爬到頂端",day);
}
