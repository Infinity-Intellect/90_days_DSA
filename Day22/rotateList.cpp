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
    ListNode* rotateRight(ListNode* head, int k) {
      
      if(head == NULL) {
        return head;
      }
      
      ListNode* slow = head;
      ListNode* fast = head;
      
      int listSize = 0;
      
      while(slow!=NULL) {
        slow = slow->next;
        listSize+=1;
      }
      
      k = k%listSize;
      
      
      for(int i=1;i<=k;i++) {
        fast = fast->next;
      }
      
      slow = head;
      
      while(fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next;
      }
      
      fast->next = head;
      head = slow->next;
      slow->next = NULL;
      
      return head;
    }
};
