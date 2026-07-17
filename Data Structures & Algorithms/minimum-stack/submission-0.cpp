class MinStack {
public:
    MinStack() {
    }
    
    void push(int val) {
        st.push_back(val);

        if (minst.empty()) {
            minst.push_back(val);
        } else {
            minst.push_back(min(minst.back(), val));
        }

    }
    
    void pop() {
        st.pop_back();
        minst.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        return minst.back();
    }

private:
    vector<int> st;
    vector<int> minst;

};
