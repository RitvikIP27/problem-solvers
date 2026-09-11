class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> newarr(nums2.size(),-1);
        vector<int> array1;
        for(int i=0;i<nums2.size();i++){
            if(i==nums2.size()-1){
                continue;
            }
            
            for(int j=i+1;j<nums2.size();j++){
                if(nums2[j]>nums2[i]){
                    newarr[i]=nums2[j];
                    break;
                }
                
            }
            
        }//next greater wla full array is initialized
        for(int j=0;j<nums1.size();j++){
            for(int k=0;k<nums2.size();k++){
                if(nums1[j]==nums2[k]){
                    array1.push_back(newarr[k]);//corresponding array leem
                }
            }
        }
        return array1;
    }
};