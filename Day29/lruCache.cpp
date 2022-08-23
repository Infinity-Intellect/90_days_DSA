class Node {
  public:
    Node* next;
    Node* prev;
    int value;
    int key;
  
    Node(int k, int val) {
      key = k;
      value = val;
      next = NULL;
      prev = NULL;
    }
};
class LRUCache {
  Node* head;
  Node* tail;
  int totalCapacity;
  map<int, Node*> m;
public:
    LRUCache(int capacity) {
      totalCapacity = capacity;
      head = new Node(-1,0);
      tail = new Node(-1,0);
      head->next = tail;
      tail->prev = head;
    }
    
    int get(int key) {
      // cout<<"GET "<<key<<" "<<(m.find(key) == m.end())<<endl;
      
      if(m.find(key) == m.end()) {
        return -1;
      }
      else {
        Node* nodeOfGivenKey = m[key];
        int val = nodeOfGivenKey->value;
        deleteNode(nodeOfGivenKey);
        Node* newNode = insertNewNode(key, val);
        m[key] = newNode;
        return val;
      }
    }
    
    void put(int key, int value) {
      // cout<<"PUT "<<key<<" "<<value<<endl;
      
      if(m.find(key) != m.end()) {
        Node* nodeToDelete = m[key];
        deleteNode(nodeToDelete);
      }
      else if(m.size() == totalCapacity) {
        Node* lruNode = tail->prev;
        // cout<<"LRU Node "<<lruNode->value<<endl;
        if(lruNode != head) {
          deleteNode(lruNode);
        }
      }
      
      Node* newNode = insertNewNode(key, value);
      
      m[key] = newNode;
      
    }
  
    Node* insertNewNode(int key, int val) {
      Node* newNode = new Node(key, val);
      
      head->next->prev = newNode;
      newNode->next = head->next;
      newNode->prev = head;
      head->next = newNode;
      
      return newNode;
    }
  
    void deleteNode(Node* node) {
      // cout<<"Deleting node "<<node->value<<endl;
      node->prev->next = node->next;
      node->next->prev = node->prev;
      node->prev = NULL;
      node->next = NULL;
      
      m.erase(node->key);
      
      delete(node);
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
