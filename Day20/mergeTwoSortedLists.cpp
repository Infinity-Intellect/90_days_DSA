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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
      ListNode* ptr1 = list1;
      ListNode* ptr2 = list2;
      
      ListNode* ans;
      
      if(ptr1 == NULL) {
        return ptr2;
      }
      else if(ptr2 == NULL) {
        return ptr1;
      }
      
      if(ptr1->val > ptr2->val) {
        swap(ptr1, ptr2);
      }
      ans = ptr1;
      
      ListNode* temp;
      while(ptr1!=NULL && ptr2!=NULL) {
        
        while(ptr1!=NULL && ptr1->val <= ptr2->val) {
          temp = ptr1;
          ptr1 = ptr1->next;
        }
        
        temp->next = ptr2;
        swap(ptr1, ptr2);
        
      }
      return ans;
    }
};
