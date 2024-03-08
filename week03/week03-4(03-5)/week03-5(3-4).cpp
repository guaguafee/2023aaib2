/*LeetCode-----3005.Count Elements With Maximum Frequency

- You are given an array nums consisting of positive integers.Return the total frequencies of elements in nums such that those elements all have the maximum frequency.
The frequency of an element is the number of occurrences of that element in the array.*/

int maxFrequencyElements(int* nums, int numsSize) {
    int T[101] = {}; //陣列101個
    int best = 0; //最多次數
    for(int i=0; i<numsSize; i++){
        int num = nums[i];
        T[num] += 1;
        if(T[num] > best) best = T[num];
    }
    int total = 0;
    for(int i=0; i<101; i++){
        if(T[i]==best) total += T[i];
    }
    return total;
}