//(SLJ-Looping-005) 平均成績 : 輸入:人數以及每個學生的分數輸出:全班平均成績(至小數第2位) 例: 7 65 39 54 88 91 74 63 67.71
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
