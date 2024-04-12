//(SLJ-Looping-001) ¶¥­¼­pºâ : ¿é¤Jn(>=0)¡A¿é¥X n!
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
