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
    ListNode *detectCycle(ListNode *head) {
      bool isThereCycle = false;
      
      ListNode* slow = head;
      ListNode* fast = head;
      
      while(fast!=NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
          isThereCycle = true;
          break;
        }
      }
      
      if(isThereCycle) {
        fast = head;
        
        while(1) {
          if(slow == fast) {
            return slow;
          }
          slow = slow->next;
          fast = fast->next;
        }
      }
      
      return NULL;
    }
};
