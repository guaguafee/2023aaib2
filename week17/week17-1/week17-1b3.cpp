///Week17-1b.cpp 
///瘋狂程設-----(SOIT107_ADVANCE_006) 進階題：除惡務盡 : 輸入一個字串，將所有字元2去除後輸出。
#include <stdio.h>
#include <string.h>
int main()
{
	char s[200];
	scanf("%s", s);
	int N=strlen(s);
	for(int i=0; i<N; i++){
		if(s[i]!='2') printf("%c", s[i]);
	}
	printf("\n");
}
