///Week16-3-1.cpp
///SOLIT107_ADVANCE_010
///(SOIT107_ADVANCE_010) 進階題：判斷迴文 : 讀入一個至多80個字的字串，判斷字串是否為迴文(即由左而右，由右而左，順序相同，大小寫字母視為相異)。如果是迴文則輸出YES，如果不是則輸出NO。

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
	if(bad==1) printf("NO");
	else printf("YES");
}
