///�禡�̪��ܼ� vs. �禡�~���ܼ�
#include <stdio.h>
int myFuncA()
{
    int x = 200;
    printf("myFuncA()�̭����O%d\n", x);
}
int main()
{
    int x = 100;
    printf("main�̭���x�O%d\n", x);
    myFuncA();
    printf("main()�̭���x�O%d\n", x);
}
