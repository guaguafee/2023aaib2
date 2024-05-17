//Week13-5b.cpp
//(SOIT106_ADVANCE_009) 秈顶肈ㄧ计は逼计 : 砞璸ㄧ计f(n)赣ㄧ计肚俱计n计は逼┮舱Θ俱计 计絛瞅俱计 1  9999 (ぃ10计)
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
