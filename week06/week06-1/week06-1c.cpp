///畫星星，重9x9乘法表開始
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){ ///左手i
        int star=i, space=n-star;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n", i); ///printf("i:%d\n", i)
    }
}
