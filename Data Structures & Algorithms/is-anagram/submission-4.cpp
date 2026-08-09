class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char, int> one;
      unordered_map<char, int> two;
      if(s.size()!=t.size()){
        return false;
      }
      for(char x:s){
        one[x]++;//count frequency of characters in s
      }
      for(char y:t){
        two[y]++;//count frequency of characters in t
      }
      if(one==two){
        return true;
      }
      return false;

        
    }
};