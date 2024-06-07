//Week16-5b.cpp
//(SOIT106_ADVANCE_004) 進階題：大小寫轉換 : 讀入一個字串(至多10個字元)，將字串中的大小寫英文字母相互轉換(大寫轉為小寫，小寫轉為大寫)後輸出。
#include <stdio.h>
#include <string.h>
int main()
{
	char s[20];
	scanf("%s", s);
	int N = strlen(s);
	for(int i=0; i<N; i++){
		char c = s[i];
		if(c>='A' && c<='Z') c = c- 'A' + 'a';
		else if(c>='a' && c<='z')c = c - 'a' + 'A';
		printf("%c", c);
	}
	printf("\n");
}
