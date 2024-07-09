class MinStack {
public:
   stack<int>stack1;
    stack<int>min1;

    MinStack() {
       
    }
    
    void push(int val) {
        if(min1.empty() || val<=min1.top())
        min1.push(val);
        stack1.push(val);
    }
    
    void pop() {
        if(min1.top() == stack1.top())
        min1.pop();
        stack1.pop();
    }
    
    int top() {
         return stack1.top();
    }
    
    int getMin() {
        return min1.top();
    }

    
    
};

/**
 * Your Minstack1 object will be instantiated and called as such:
 * Minstack1* obj = new Minstack1();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
