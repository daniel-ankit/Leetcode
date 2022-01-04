class MyQueue {
public:
    stack<int> S, temp;
    MyQueue() {
        
    }
    
    void push(int x)
    {
        while(!S.empty())
        {
            temp.push(S.top());
            S.pop();
        }
        S.push(x);
        while(!temp.empty())
        {
            S.push(temp.top());
            temp.pop();
        }
    }
    
    int pop()
    {
        if(S.empty()) return -1;
        int N = S.top();
        S.pop();
        return N;  
    }
    
    int peek() {
        return S.top();
    }
    
    bool empty()
    {
        return S.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */