//Week13-5b.cpp
//(SOIT106_ADVANCE_009) �i���D�G��ƤϧǱƦC�Ʀr : �]�p�@�Ө��f(n)�A�Ө�ƥi�H�Ǧ^���n���Ʀr�ϧǱƦC�Ҳզ�����ơC �Ʀr�d��G��� 1 �V 9999 (���t10������)
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while(n>0){
		printf("%d", n%10);
		n = n/10;
	}
	printf("\n");
}
