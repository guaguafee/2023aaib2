///Week17-1a.cpp
///瘋狂程設-----(SOIT107_ADVANCE_005) 進階題：字串長度 : 輸入兩個很大的正整數a與 b，如果a>b則輸出 1，如果 a<b則輸出 -1, 如果 a=b 則輸出 0。 (暗示：可用字串輸入，用字串的觀點來比大小。)
#include <stdio.h>
#include <string.h>
int main()
{
	char a[200], b[200];
	scanf("%s", a);
	scanf("%s", b);
	int L1=strlen(a);
	int L2=strlen(b);
	if(L1>L2) printf("1");
	else if(L1<L2) printf("-1");
	else printf("%d",strcmp(a,b));
}
