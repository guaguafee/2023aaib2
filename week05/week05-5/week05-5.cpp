/**
LeetCodec234.Palindrome Linked
List

Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
**/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    int a[100000], N=0; //陣列最多10萬個
    while(head!=NULL){
        a[N++] = head -> val;
        head = head ->next;
    }
    for(int i=0; i<N/2; i++){
        if(a[i] !=a[N-1-i]) return false;
    }
    return true;
}
