class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        
        int n = arr.size();
        int sum = 0;
        int right = k;
        int left = 0;
        
        while (left<k) {
            sum = sum + arr[left];
            left++;
        }
        
        left = 0;
        int maxsum = sum;
        
        while (right < n) {
            
            sum = sum + arr[right];
            sum = sum - arr[left];
            maxsum = max(maxsum,sum);
            right++;
            left++;
            
        }
        
        return maxsum;
        
    }
};
