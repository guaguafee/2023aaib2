///Week16-5a3/3.cpp SOLIT107_Base_015
///(SOIT107_Base_015) ��¦�D�G�Ʀr���� : ��J�@�Ӿ��N�A�Ч�X�o�ӼƦr������ơC
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while(n>9){
		n = n / 10;
	}
	printf("%d", n);
}
