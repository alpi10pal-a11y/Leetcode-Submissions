class MyQueue {
public:
  stack<int>st1;
  stack<int>st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(st2.empty()){
        while(!st1.empty()){
            int x = st1.top();
            st1.pop();
            st2.push(x);
        }
        }
        int y = st2.top();
        st2.pop();
        return y ;
    }
    
    int peek() {
        if(st2.empty()){
          while(!st1.empty()){
            int x = st1.top();
            st1.pop();
            st2.push(x);
           }
        }
        int y = st2.top();
        return y;
    }
    
    bool empty() {
        if(st2.empty() && st1.empty()) return true;
        else return false;
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