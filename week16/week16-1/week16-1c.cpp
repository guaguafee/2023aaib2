///Week16-1c.cpp

#include <stdio.h>
void myPrint(int a[10]){
    for(int i=0; i<10; i++) printf("%d", a[i]);
    printf("\n");
}

int main()
{
    int a[10] = {9,8,7,6,5,4,3,2,1,0}; ///10�ӼơA9�Ӷ��j
    myPrint(a);

    for(int k=0; k<9; k++){
        for(int i=0; i<9; i++){ ///�q����k���@���A9�Ӷ��j
            if(a[i]>a[i+1]){ ///�۾F��j�p�A����
                int temp = a[i]; ///�N�洫
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    myPrint(a);
}
