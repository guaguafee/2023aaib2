#include <stdio.h>
int main()
{
    printf("please enter your name: ");
    char s[30];
    scanf("%s", s); ///不用加&，因為已經有s了
    printf("%s 你好!", s);
}
