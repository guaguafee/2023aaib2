/*瘋狂程設-----(A021) N階乘 : 輸入一個非負整數 N 。輸出N!。*/

#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	
	int ans = 1;
	for(int i = 1; i<=a; i++){
		ans *= i;
	}
	printf("%d", ans);

}