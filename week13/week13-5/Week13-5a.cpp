//Week13-5a.cpp
//�ƨg�{�]-----(SOIT106_ADVANCE_009) �i���D�G��ƤϧǱƦC�Ʀr : �]�p�@�Ө��f(n)�A�Ө�ƥi�H�Ǧ^���n���Ʀr�ϧǱƦC�Ҳզ�����ơC �Ʀr�d��G��� 1 �V 9999 (���t10������)
#include <string.h>
#include <stdio.h>
int main()
{
	char line[20];
	scanf("%s", line);
	int N = strlen(line);
	for(int i=N-1; i>=0; i--){
		printf("%c", line[i]);
	}
	printf("\n");
}
