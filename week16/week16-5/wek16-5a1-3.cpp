///Week16-5a3/3.cpp SOLIT107_Base_015
///(SOIT107_Base_015) 基礎題：數字之首 : 輸入一個整數N，請找出這個數字的首位數。
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
