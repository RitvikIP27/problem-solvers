class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> leftmax(height.size());
        vector<int> rightmax(height.size());
        leftmax[0]=height[0];
        rightmax[height.size()-1]=height[height.size()-1];
        for(int i=1;i<height.size();i++){
            leftmax[i]=max(height[i],leftmax[i-1]);
            // leftmax[i]=max(leftmax[i],leftmax[i-1]); nmot this
        }
        for(int j=height.size()-2;j>=0;j--){
            rightmax[j]=max(height[j],rightmax[j+1]); // cuz we compare dynamically no there we were doing ti static
            // rightmax[j]=max(rightmax[j],rightmax[j+1]);

        }//right left max of their aray assigned
        int sum=0;
        for(int k=0;k<height.size();k++){
            int maxh=min(leftmax[k],rightmax[k])-height[k];
            sum+=maxh;
        }
        return sum;
        
    }
};
