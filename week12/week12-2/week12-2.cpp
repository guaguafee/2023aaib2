///Week12-2.cpp
#include <stdio.h>
int main()
{
    int n = 2;
    int a[2][3] = { {10,20,30}, {11,22,33} };
    int b[2][3] = { {2,1}, {3,2} };
    int c[2][2];
    ///Part 1 �|Ūa[i][j]�C���]�n�A�N���ΦAŪ
    ///Part 2 �|Ūb[i][j]�C���]�n�A�N���ΦAŪ
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int * p1 = &a[i][j]; ///���F�bTutor�W�b�Y
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
}
