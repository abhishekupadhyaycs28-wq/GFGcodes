class Solution {
  public:
    int distinct(vector<vector<int>>& mat) {
        // code here
        
        unordered_map<int,int>mp;
        unordered_map<int,int>cnt;
        int n = mat.size();
        
        for(int i = 0; i<n; i++) {
            
            for (int j = 0; j<n; j++) {
                    
                mp[mat[i][j]]++;
                    
            }
            for (int j = 0; j<n; j++) {
                
                if (mp[mat[i][j]]>0) {
                    
                    cnt[mat[i][j]]++;
                    mp[mat[i][j]]=0;
                    
                }
                
            }
            
        }
        
        int ans = 0;

        for (auto x : cnt) {
            if (x.second == n) {
                ans++;
            }
        }

        return ans;
        
    }
};