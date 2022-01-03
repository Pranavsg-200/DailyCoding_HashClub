class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       vector<int>in_degree(n);
       vector<int>out_degree(n);
       for(int i=0; i<(int)trust.size(); i++){
           in_degree[trust[i][1]-1]++;
           out_degree[trust[i][0]-1]++;
       }
       for(int i=0; i<n; i++){
           if(in_degree[i]==(n-1) && out_degree[i]==0) return (i+1);
       } 
       return -1; 
    }
};
