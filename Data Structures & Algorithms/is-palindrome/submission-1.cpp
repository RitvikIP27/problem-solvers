class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> str; // you need char assembly nto string assembly
        for(char i:s){
            if (isalnum(i)) {
                str.push_back(tolower(i));
}

        }
        int j=0;
        int k=str.size()-1;
        while(j<k){
            if(str[j]!=str[k]){
                return false;
            }
            j++;
            k--;
        }
        return true;
        
    }
};
