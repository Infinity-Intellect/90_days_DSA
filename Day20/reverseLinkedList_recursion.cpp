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
    ListNode* newHead;
    ListNode* reverseList(ListNode* head) {
      recurse(NULL, head);
      return newHead;
    }
  
    void recurse(ListNode* prev, ListNode* curr) {
      if(curr == NULL) {
        newHead = prev;
      }
      else {
        prev = curr;
        curr = curr->next;
        recurse(prev, curr);
        
        if(curr!=NULL) {
          curr->next = prev;
          prev->next = NULL;
        }
      }
    }
};
