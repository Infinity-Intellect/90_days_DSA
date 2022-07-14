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
      ListNode* res = new ListNode();
      
      ListNode* resPtr = res;
      bool isThereCarry = false;
      
      while(l1!=NULL && l2!=NULL) {
        int sum = l1->val+l2->val;
        
        if(isThereCarry) {
          sum+=1;
        }
        
        if(sum/10 == 1) {
          isThereCarry = true;
        }
        else {
          isThereCarry = false;
        }
        
        
        resPtr->next = new ListNode();
        resPtr = resPtr->next;
        resPtr->val = sum%10;
        
        l1=l1->next;
        l2=l2->next;
        
      }
      
      while(l1!=NULL) {
        if(isThereCarry) {
          int sum = l1->val+1;
          
          if(sum/10 == 1) {
            isThereCarry = true;
          }
          else {
            isThereCarry = false;
          }
          
          resPtr->next = new ListNode();
          resPtr = resPtr->next;
          resPtr->val = sum%10;
        }
        else {
          resPtr->next = new ListNode();
          resPtr = resPtr->next;
          resPtr->val = l1->val;
        }
        l1=l1->next;
      }
      
       while(l2!=NULL) {
        if(isThereCarry) {
          int sum = l2->val+1;
          
          if(sum/10 == 1) {
            isThereCarry = true;
          }
          else {
            isThereCarry = false;
          }
          
          resPtr->next = new ListNode();
          resPtr = resPtr->next;
          resPtr->val = sum%10;

        }
        else {
          resPtr->next = new ListNode();
          resPtr = resPtr->next;
          resPtr->val = l2->val;

        }
        l2=l2->next;
      }
      
      if(isThereCarry) {
        resPtr->next = new ListNode(1);
      }
      
      
      return res->next;
      
      
    }
};
