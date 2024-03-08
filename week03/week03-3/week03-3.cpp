///week03-3.cpp
#include <stdio.h>
int main()
{
    int a = 5;

    while(a>0){
        printf("a is %d\n",a);
        a -= 1; ///新加: 讓a慢慢變小
    }
    for(int b = 5; b>0; b-=1){
        printf("b is %d\n",b);
    }
    for(int i = 0; i<5; i+=1){
        printf("i is %d\n",i);
    }
}
