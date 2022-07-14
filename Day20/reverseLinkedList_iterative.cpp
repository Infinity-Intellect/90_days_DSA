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
      if(!head) {
        return head;
      }
      
      ListNode* prev = NULL;
      ListNode* curr = head;
      ListNode *currNext = curr->next;
      
      while(currNext!=NULL) {
        curr->next = prev;
        prev = curr;
        curr = currNext;
        currNext = currNext->next;
      }
      
      curr->next = prev;
      return curr;
    }
};
