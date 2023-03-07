class MinStack {
    stack<int> S, temp;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        S.push(val);
        if(temp.empty() || temp.top()>=val)
            temp.push(val);
    }
    
    void pop() {
        if(S.empty()) return;
        if(S.top()==temp.top()) temp.pop();
        S.pop();
    }
    
    int top() {
        return S.top();
    }
    
    int getMin() {
        return temp.top();
    }
};