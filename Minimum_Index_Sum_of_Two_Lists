class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> mp1;
        for (int i = 0; i < list1.size(); ++i)
        {
            mp1[list1[i]] = i + 1;
        }
        vector<string> ans;
        int minindex = INT_MAX;
        for (int i = 0; i < list2.size(); ++i)
        {
            if (mp1[list2[i]])
            {
                int sum = (mp1[list2[i]] - 1) + i;
                if (sum < minindex)
                {
                    minindex = sum;
                    ans.clear();
                    ans.push_back(list2[i]);
                }
                else if (sum == minindex)
                    ans.push_back(list2[i]);
            }
        }
        return ans;
    }
};
