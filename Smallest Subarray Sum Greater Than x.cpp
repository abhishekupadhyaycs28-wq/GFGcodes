class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        
    /*    unordered_map<int,int>mp;
        int sum = 0;
        int n = arr.size();
        int min = INT_MIN;
        int temp = 0;
        
        for ( int i = 0; i<n; i++ ) {
            
            sum = sum + arr[i];
            
            if ( sum > x ) {
                temp = i+1;
                min = min(min,temp);
            }
            
            if (find.mp[(sum+1)-k] != mp.end()) {
                temp = 
            }
            
            if ( find.mp[sum] == mp.end() ) {
                mp[sum] = i;
            }
            
        }   */
        
        
        int right = 0;
        int left = 0;
        int min_ln = INT_MAX;
        int temp = 0;
        int n = arr.size();
        int sum = 0;
        
        while (right < n) {
            
            sum = sum+arr[right];
            
            while (sum > x) {
                temp = right-left+1;
                min_ln = min(temp,min_ln);
                sum = sum- arr[left];
                left++;
            }
            
            right++;
            
        }
        
        if (min_ln == INT_MAX) {
            return 0;
        }
        
        return min_ln;
        
    }
};
