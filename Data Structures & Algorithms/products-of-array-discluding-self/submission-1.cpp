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
        int suffixprod=1;
        vector<int> result(nums.size());
        for(int k=nums.size()-1;k>=0;k--){
            
            if(k==0){
                result[k]=suffixprod;
            }
            
            else{
                result[k]=prefix[k-1]*suffixprod;
            }
            suffixprod*=nums[k];
            
        }
        return result;



    }
};
