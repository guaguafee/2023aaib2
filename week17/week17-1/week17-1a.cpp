///Week17-1a.cpp 
///�ƨg�{�]-----(SOIT107_ADVANCE_005) �i���D�G�r����� : ��J��ӫܤj�������a�P b�A�p�Ga>b�h��X 1�A�p�G a<b�h��X -1, �p�G a=b �h��X 0�C (�t�ܡG�i�Φr���J�A�Φr�ꪺ�[�I�Ӥ�j�p�C)
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
