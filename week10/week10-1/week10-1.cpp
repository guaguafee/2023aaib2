///Week10-1 函式呼叫函式 Recursion 遞回n階層 C ver.
#include <stdio.h>
int func(int n)
{
    if(n==1) return 1; ///終止條件，像[數學歸納法] N=1成立
    return n * func(n-1); ///函式呼叫函式， 把大問題，蓋成去問[小問題]
}
int main()
{
    printf("請輸入N:");
    int N;
    scanf("%d", &N);
    int ans = func(N);
    printf("%d", ans);
}
