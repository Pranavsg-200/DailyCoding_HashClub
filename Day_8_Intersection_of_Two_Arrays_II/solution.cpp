class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
       
      vector<int> cnt(1001, 0);
          for(auto x:nums1) 
              cnt[x]++;
        
              for(auto x:nums2){
                  if(cnt[x]>0){
                      ans.push_back(x);
                      cnt[x]--;
                  }
          } 
          return ans;
    }
};
