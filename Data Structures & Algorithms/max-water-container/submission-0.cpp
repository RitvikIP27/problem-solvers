class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int area=0;
        while(i<j){
            int width=j-i;
            int length=min(heights[i],heights[j]);
            area=max(area,length*width);
            if(heights[i]<heights[j]){
                //i hegith dom change that
                i++;
            }
            else if(heights[i]>heights[j]){
                //j height dominant in area chage that
                j--;
            }
            else if(heights[i]==heights[j]){
                i++;
                j--;
            }
        }
        return area;

        
    }
};
