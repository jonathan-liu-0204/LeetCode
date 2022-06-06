/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(!headA || !headB){
            return NULL;
        }
        
        int lenA = GetLength(headA);
        int lenB = GetLength(headB);
        
        if(lenA > lenB){
            for(int i = 0; i < lenA-lenB; i++){
                headA = headA -> next;
            }
        }
        else{
            for(int i = 0; i < lenB-lenA; i++){
                headB = headB -> next;
            }
        }
        
        while(headA && headB && headA != headB){
            headA = headA -> next;
            headB = headB -> next;
        }
        
        if(headA == headB){
            return headA;
        }
        else{
            return NULL;
        }
    }
    
    int GetLength(ListNode *head){
        int cnt = 0;
        while(head){
            cnt++;
            head = head->next;
        }
        return cnt;
    }  
};

// Runtime: 51 ms, faster than 77.87% of C++ online submissions for Intersection of Two Linked Lists.
// Memory Usage: 14.7 MB, less than 31.40% of C++ online submissions for Intersection of Two Linked Lists.