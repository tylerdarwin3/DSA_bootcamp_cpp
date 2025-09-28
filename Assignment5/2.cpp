class Node {
public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {
private:
    Node* front;
    Node* rear;
    int currSize;
public:
    myQueue() {
        // Initialize your data members
        front = nullptr;
        rear = nullptr;
        currSize = 0;
    }

    bool isEmpty() {
        // check if the queue is empty
        return front == nullptr;
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        Node* new_Node = new Node(x);
        if (isEmpty()){
            front = rear = new_Node;
        } else{
            rear->next = new_Node;
            rear = new_Node;
        }
        currSize++;
    }

    void dequeue() {
        // Removes the front element of the queue
        if (isEmpty()){
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr){
            rear = nullptr;
        }
        delete temp;
        currSize--;
    }

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        if (isEmpty()){
            return -1;
        }
        return front->data;
    }

    int size() {
        // Returns the current size of the queue.
        return currSize;
    }
};