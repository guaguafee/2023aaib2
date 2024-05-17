///Week13-2b.cpp 希望字串很長，<10位數
///Q1: 有多長? Q2: 怎麼判斷?
#include <string.h>
#include <stdio.h>
int main()
{
	char line[20]; ///長一點比較保險
	scanf("%s", line);
	int N = strlen(line); ///知道字串長度
	int bad = 0; ///一開始沒壞掉
	for(int i=0; i<N/2; i++){ ///逐個字母檢查
        if(line[i]!=line[N-1-i]) bad = 1;
	} ///若前後對應字母不同則失敗
	/// 0123456789 共10個數字
	/// ^        ^ 相加是9
	///  1      8
    ///   2    7
    ///    3  6
    ///     45
    ///     45
    ///    3  6
    ///   2    7
    ///  1      8
	if(bad==1) printf("NO\n");
	else printf("YES\n");
}
