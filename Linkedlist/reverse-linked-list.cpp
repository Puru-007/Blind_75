/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
const int FAST__ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr = new ListNode();
        ListNode *prev = new ListNode();
        ListNode *fwd = new ListNode();

        curr = head;
        prev = NULL;
        if(curr == NULL){
            return NULL;
        }
        
        while(curr -> next){
            fwd = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = fwd;
        }
        curr -> next = prev;
        return curr;
    }
};