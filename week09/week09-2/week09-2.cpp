///函式裡的變數 vs. 函式外的變數
#include <stdio.h>
int myFuncA()
{
    int x = 200;
    printf("myFuncA()裡面的是%d\n", x);
}
int main()
{
    int x = 100;
    printf("main裡面的x是%d\n", x);
    myFuncA();
    printf("main()裡面的x是%d\n", x);
}
