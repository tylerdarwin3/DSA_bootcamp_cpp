class MyStack {
private:
    queue<int> primary_queue;
    queue<int> secondary_queue;
public:
    MyStack() {

    }
    
    void push(int x) {
        secondary_queue.push(x);
        while(!primary_queue.empty()){
            secondary_queue.push(primary_queue.front());
            primary_queue.pop();
        }
        std::queue<int> temp_queue = primary_queue;
        primary_queue = secondary_queue;
        secondary_queue = temp_queue;
    }
    
    int pop() {
        if (primary_queue.empty()){
            return -1;
        }
        int x = primary_queue.front();
        primary_queue.pop();
        return x;
    }
    
    int top() {
        if (primary_queue.empty()){
            return -1;
        }
        return primary_queue.front();
    }
    
    bool empty() {
        return primary_queue.empty() && secondary_queue.empty();
    }
};