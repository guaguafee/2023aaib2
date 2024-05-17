//Week13-5a.cpp
//浩╣祘砞-----(SOIT106_ADVANCE_009) 秈顶肈ㄧ计は逼计 : 砞璸ㄧ计f(n)赣ㄧ计肚俱计n计は逼┮舱Θ俱计 计絛瞅俱计 1  9999 (ぃ10计)
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
