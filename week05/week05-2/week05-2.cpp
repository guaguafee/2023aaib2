///瘋狂程設-----(A030) 百數反印 : 輸入100個正整數，反向印出此100個數。

#include <stdio.h>
int main()
{
	int a[100];
	for(int i=0; i<100; i++){
		scanf("%d",&a[i]);
	}
	for(int i=99; i>=0; i--){
		printf("%d\n", a[i]);
	}
}
