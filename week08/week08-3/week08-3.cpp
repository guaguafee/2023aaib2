#include <stdio.h>
#include <string.h>
int main()
{
    printf("please enter your English name: ");
    char s1[30];
    scanf("%s1", s1); ///字串宣告，可以不給值
    char s2[30]=" 你好!"; ///可在字串宣告時給值
    printf("%s %s\n", s1, s2);

    s1[0]='A'; ///把名字最前面的字母改成A
    printf("your name has been changed to %s\n", s1);

    printf("your English name's 長度 is %d\n", strlen(s1));
}
