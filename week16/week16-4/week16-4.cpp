///Week16-4.cpp
///SOIT106_ADVANCE_008_C
/**(SOIT106_ADVANCE_008_C) 進階題：絕對值函數 :
題目名稱：絕對值函數。
題目內容：設計一個函數f(n)，會回傳n的絕對值。
數字範圍：整數1 – 10000
程式限制：不得使用abs()函數。不得變更已給定的主程式。
主程式：
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
**/


#include <stdio.h>
int f(int n)
{
	if(n>0) return n;
	else return -n;
}

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
