///Week10-1 �禡�I�s�禡 Recursion ���^n���h C ver.
#include <stdio.h>
int func(int n)
{
    if(n==1) return 1; ///�פ����A��[�ƾ��k�Ǫk] N=1����
    return n * func(n-1); ///�禡�I�s�禡�A ��j���D�A�\���h��[�p���D]
}
int main()
{
    printf("�п�JN:");
    int N;
    scanf("%d", &N);
    int ans = func(N);
    printf("%d", ans);
}
