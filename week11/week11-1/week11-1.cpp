///week11-1.cpp �Q�n�ոլݽ�ƪ��z�l�k�A���ոլ��¤�k
///�Q�Ƥ@�U10000�H�U���X�ӽ��
#include <stdio.h>
int isPrime(int n)
{
    for(int i=2; i<n; i++){
        if(n%i==0) return 0; ///�Q�㰣�A���O���
    }
    return 1;
}

int main()
{///�Q��BOUND�ܼơA�ݬݨ쩳�n�]�h�j���d��A30�U�~����2�U�ӽ��
    int BOUND = 300000, ans = 0;
    for(int i=2; i<=BOUND; i++){
        if(isPrime(i)){
            printf("%d ", i); ///�L�X���
            ans++; ///�P�ɦh�[�@�ӽ��
        }
    }
    printf("��Ʀ�:%2d��\n", ans);
}
