class Solution {
    public:
        int trap(vector<int>& height) {
        vector<int>left;
        vector<int>right;
        int maxl=INT_MIN;
        int maxr=INT_MIN;
        int sum=0;
        for(int i=0;i<height.size();i++)
        {
            if(height[i]>maxl)
            maxl=height[i];
            if(height[height.size()-1-i]>maxr)
                maxr=height[height.size()-1-i];
                left.push_back(maxl-height[i]);
                right.push_back(maxr-height[height.size()-1-i]);
       
        }
        reverse(right.begin(),right.end());
        for(int i=0;i<height.size();i++)
        {
            sum+=min(left[i],right[i]);
        }
        return sum;
    } 
};
