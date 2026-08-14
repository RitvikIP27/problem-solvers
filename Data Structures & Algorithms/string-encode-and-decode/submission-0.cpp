class Solution {
public:

    string encode(vector<string>& strs) {
        string re;
        for(const string& s:strs){
            re.append(to_string(s.size()));
            re.push_back('#');
            re.append(s);

        }
        return re;

    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> res;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int length=stoi(s.substr(i,j-i)); // i not 1 NOTE IT DOWN WE NEED LENGTH NOT INDEX TI WILL CRASH AT FIRST INDEX ASKING FOR ZERO LENGTH
            i=j+1;
            j=i+length;
            res.push_back(s.substr(i,length));
            i=j;
        }
        return res;

    }
};
