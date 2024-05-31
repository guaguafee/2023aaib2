///LeetCode 3158. Find the XOR of Numbers Which Appear Twice [C ver.]
///тnums柑瞷2Ω计场ノXOR睼癬ㄓ
///计ぶ(程50)ざ1-50ぇ丁┮秨皚穌﹚
///癘计瞷Ω计街瞷2Ω
int duplicateNumbersXOR(int* nums, int numsSize) {
    int table[51] = {}; //皚眖0秨﹍杆1-50ぇ丁计┮秨51
    for(int i=0; i<numsSize; i++){
        table[nums[i]]++; //计瞷Ω计+1
    }
    int ans = 0;
    for(int i=1; i<=50; i++){ //皐癸table柑1-50计
        if(table[i]==2) ans = ans^i;
    }
    return ans;
}
