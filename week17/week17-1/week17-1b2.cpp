///Week17-1b.cpp
///�ƨg�{�]-----(SOIT107_ADVANCE_006) �i���D�G���c�Ⱥ� : ��J�@�Ӧr��A�N�Ҧ��r��2�h�����X�C
#include <stdio.h>
int main()
{
	char s[200];
	scanf("%s", s);
	for(int i=0; s[i]!=0; i++){
		if(s[i]!='2') printf("%c", s[i]);
	}
	printf("\n");
}
