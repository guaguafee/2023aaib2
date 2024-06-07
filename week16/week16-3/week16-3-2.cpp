///Week16-3-2.cpp
///SOLIT106_ADVANCE_007
///(SOIT106_ADVANCE_007) 進階題：迴文判斷 : 題目內容：從鍵盤讀入1個4位數的整數(1000-9999)。如果該數字構成廻文(即由左而右，由右而左，順序相同)，則顯示YES。如果該數字未構成廻文，則顯示NO。

#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	scanf("%s", s);
	int N = strlen(s);
	int bad = 0;
	for(int i=0; i<N; i++){
		if(s[i]!=s[N-1-i]){
			bad = 1;
		}
	}
	if(bad==1) printf("NO\n");
	else printf("YES\n");
}
