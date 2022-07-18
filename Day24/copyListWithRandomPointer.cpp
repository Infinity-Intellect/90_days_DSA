/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
      Node* dummy = new Node(0);
      Node* listPtr = head;
      Node* newListPtr = dummy;
      
      map<Node*, int> addressIndexMap;
      map<int, Node*> indexAddressMap;
      
      int index = 0;
      
      while(listPtr!=NULL) {
        Node* newNode = new Node(listPtr->val);
        newListPtr->next = newNode;
        newListPtr = newListPtr->next;
        
        indexAddressMap[index] = newListPtr;
        addressIndexMap[listPtr] = index;

        listPtr = listPtr->next;
        index+=1;
      }
      
      newListPtr = dummy->next;
      listPtr = head;
      
      while(newListPtr!=NULL) {
        if(listPtr->random != NULL) {
          int indexOfOriginal = addressIndexMap[listPtr->random];
          newListPtr->random = indexAddressMap[indexOfOriginal];
        }
          
        newListPtr = newListPtr->next;
        listPtr = listPtr->next;
      }
      
      return dummy->next;
    }
};
