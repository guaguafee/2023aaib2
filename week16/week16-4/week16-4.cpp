///Week16-4.cpp
///SOIT106_ADVANCE_008_C
/**(SOIT106_ADVANCE_008_C) �i���D�G����Ȩ�� :
�D�ئW�١G����Ȩ�ơC
�D�ؤ��e�G�]�p�@�Ө��f(n)�A�|�^��n������ȡC
�Ʀr�d��G���1 �V 10000
�{������G���o�ϥ�abs()��ơC���o�ܧ�w���w���D�{���C
�D�{���G
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
