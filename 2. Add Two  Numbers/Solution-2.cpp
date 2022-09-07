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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* ans = new ListNode(0);
        ListNode* current = ans;
        int carry = 0;
        
        while(l1 != NULL || l2 != NULL || carry != 0){
            
            int x = l1 ? l1 -> val : 0;
            int y = l2 ? l2 -> val : 0;
            
            int sum = carry + x + y;
            
            carry = sum / 10;
            
            current -> next = new ListNode(sum % 10);
            current = current -> next;
            
            l1 = l1 ? l1 -> next : nullptr;
            l2 = l2 ? l2 -> next : nullptr;
        }
            
        return ans -> next;
    }
};

// Runtime: 59 ms, faster than 47.11% of C++ online submissions for Add Two Numbers.
// Memory Usage: 71.5 MB, less than 12.65% of C++ online submissions for Add Two Numbers.