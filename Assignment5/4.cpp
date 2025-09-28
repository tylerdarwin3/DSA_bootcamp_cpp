class MyQueue {
private:
    stack<int> s1, s2;
public:
    MyQueue() {

    }

    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if (s1.empty() && s2.empty()){
            cout << "Queue underflow" << endl;
            exit(0);
        }

        if (s2.empty()){
            while (!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }

        int x = s2.top();
        s2.pop();
        return x;
    }

    int peek() {
        if (!s2.empty()){
            return s2.top();
        }

        if (!s1.empty()){
            while (!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
        return -1;
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};
