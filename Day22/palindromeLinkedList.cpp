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
    bool isPalindrome(ListNode* head) {
      ListNode* mid = head;
      ListNode* ptr = head;
      
      while(ptr->next!=NULL && ptr->next->next!=NULL) {
        mid = mid->next;
        ptr = ptr->next->next;
      }
            
      mid->next = reverseLinkedList(mid->next);
      ptr = head;
      mid = mid->next;
      while(mid!=NULL) {
        if(ptr->val != mid->val) {
          return false;
        }
        ptr=ptr->next;
        mid = mid->next;
      }
      return true;
      
    }
  
    ListNode* reverseLinkedList(ListNode* node) {
      ListNode* prev = NULL;
      ListNode* nex = NULL;
      
      while(node!=NULL) {
        nex = node->next;
        node->next = prev;
        prev = node;
        node = nex;
      }
      
      return prev;
    }
};
