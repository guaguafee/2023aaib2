///week10-2 ����۰��k
///a�j b�� c�p greatest common divisor
#include <stdio.h>
int gcd(int a, int b)
{
    if(a==0) return b;
    if(b==0) return a; ///���H�|�ٲ��o�@��
    return gcd(b, a%b); ///�ѤG->�Ѥj �ѤT->�ѤG
}
int main()
{
    printf("�п�J a b ��ӼƦr: ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("�̤j���]�ƬO: %d\n", gcd(a, b));
}