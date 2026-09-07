class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }
            if((int)st.top()+2==(int)s[i] || (int)st.top()+1==(int)s[i]){
                st.pop();
                continue;
            }
            st.push(s[i]);
            
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }
};
