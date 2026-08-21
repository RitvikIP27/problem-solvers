class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> need;
        unordered_map<char,int> window;
       
        int start=0;
        int have=0;
        int left=0;
        int minlen=INT_MAX;
        for(char a:t){
            need[a]++;
        }//need array populated
        int required=need.size();
        for(int right=0;right<s.size();right++){
            char c=s[right];//current element
            window[c]++;
            if(need.count(c) && window[c]==need[c]){
                //freq and existance match
                have++;//req fulfill
            }
            while(have==required){
                //window reached nwo we shrink
                if(right-left+1<minlen){
                    minlen=right-left+1;
                    start=left;

                }
                char leftchar=s[left];
                window[leftchar]--;
                if(need.count(leftchar) && window[leftchar]<need[leftchar]){
                    //freq ya existence chage
                    have--;//window invaldi krdo
                }
                left++;//Yaha pr no else cu we want to shift to chekc anyhow for better windwo
            }
        }
        if(minlen==INT_MAX){
            return "";
        }
        return s.substr(start,minlen);

        
    }
};