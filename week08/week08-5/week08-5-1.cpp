//(SLJ-Looping-005) �������Z : ��J:�H�ƥH�ΨC�Ӿǥͪ����ƿ�X:���Z�������Z(�ܤp�Ʋ�2��) ��: 7 65 39 54 88 91 74 63 67.71
#include <stdio.h>
int main()
{
	int n;
	float ans=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		int a;
		scanf("%d", &a);
		ans+=a;
	}
	printf("%.2f", ans/n);
}
