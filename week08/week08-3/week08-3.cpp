#include <stdio.h>
#include <string.h>
int main()
{
    printf("please enter your English name: ");
    char s1[30];
    scanf("%s1", s1); ///�r��ŧi�A�i�H������
    char s2[30]=" �A�n!"; ///�i�b�r��ŧi�ɵ���
    printf("%s %s\n", s1, s2);

    s1[0]='A'; ///��W�r�̫e�����r���令A
    printf("your name has been changed to %s\n", s1);

    printf("your English name's ���� is %d\n", strlen(s1));
}
