//Week16-5b.cpp
//(SOIT106_ADVANCE_004) �i���D�G�j�p�g�ഫ : Ū�J�@�Ӧr��(�ܦh10�Ӧr��)�A�N�r�ꤤ���j�p�g�^��r���ۤ��ഫ(�j�g�ର�p�g�A�p�g�ର�j�g)���X�C
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
