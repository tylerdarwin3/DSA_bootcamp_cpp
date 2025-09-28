/* class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack {
private:
    Node* top;
    int currSize;

public:
    myStack() {
        // Initialize your data members
        top = NULL;
        currSize = 0;
    }

    bool isEmpty() {
        // check if the stack is empty
        return top == NULL;
    }

    void push(int x) {
        // Adds an element x at the top of the stack
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
        currSize++;
    }

    void pop() {
        // Removes the top element of the stack
        Node* temp = top;
        top = top->next;
        currSize--;
        delete temp;
    }

    int peek() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if (isEmpty()){
            return -1;
        }
        return top->data;
    }

    int size() {
        // Returns the current size of the stack.
        return currSize;
    }
};