//(SLJ-Looping-001) �����p�� : ��Jn(>=0)�A��X n!
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int ans=1;
	for(int i=1; i<=n; i++){
		ans *= i;
	}
	printf("%d", ans);
}
