class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i : s){
            st.push(i);
            if(i == 'c'){
                if(st.size() == 1) return false;
                int k = 0;
                while(st.size() > 0 && st.top() != 'a'){
                    if(st.top() == ('c' - k)){
                        k++;
                        // cout<<st.top()<<" ";
                        st.pop();
                    }
                    else return false;
                }
                if(k == 2 && st.size() > 0) st.pop();
                else if(k <= 2) return false;
            }
        }
        if(st.size() != 0) return false;
        return true;
    }
};