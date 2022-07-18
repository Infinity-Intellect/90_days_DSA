class Queue {
public:
    vector<int> queue;
    Queue() {
        // Implement the Constructor
        queue.clear();
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return queue.empty();
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        queue.push_back(data);
    }

    int dequeue() {
        // Implement the dequeue() function
        int poppedElement = -1;
       if(!isEmpty()) {
           poppedElement = queue[0];
           queue.erase(queue.begin());
       }
        return poppedElement;
    }

    int front() {
        // Implement the front() function
        if(!isEmpty()) {
            return queue[0];
        }
        else {
            return -1;
        }
    }
};
