class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //prefix-product of from start till psition
        //suffix-product from psotion till end
        //return 1 if out of bound
        vector<int> prefix;
        vector<int> sufix;
        int preprod=1;
        for(int i=0;i<nums.size();i++){
            preprod*=nums[i];
            prefix.push_back(preprod);
        }
        int postprod=1;
        for(int j=nums.size()-1;j>=0;j--){
            postprod*=nums[j];
            sufix.push_back(postprod);
        }
        reverse(sufix.begin(),sufix.end());
        vector<int> result;
        for(int k=0;k<nums.size();k++){
            if(k==0){
                result.push_back(sufix[k+1]);
            }
           
            else if(k>0 &&k<nums.size()-1){
                result.push_back(prefix[k-1]*sufix[k+1]);

            }
            else{
                result.push_back(prefix[k-1]);

            }
            
        }
        return result;



    }
};
