///LeetCode 3158. Find the XOR of Numbers Which Appear Twice [C ver.]
///���nums�̭�n�X�{2�����ơA������XOR�V�_��
///�]�Ʀr�ܤ�(�̦h50��)�A����1-50�����A�ҥH�}�Ӱ}�C�A�d�w
///�O�U�Ʀr�X�{�����ơA�ݽ֥X�{2��
int duplicateNumbersXOR(int* nums, int numsSize) {
    int table[51] = {}; //�}�C�q0�}�l�A���ˤU1-50�������ơA�ҥH�}51��
    for(int i=0; i<numsSize; i++){
        table[nums[i]]++; //�Ʀr�X�{����+1
    }
    int ans = 0;
    for(int i=1; i<=50; i++){ //�w��table��1-50����
        if(table[i]==2) ans = ans^i;
    }
    return ans;
}
