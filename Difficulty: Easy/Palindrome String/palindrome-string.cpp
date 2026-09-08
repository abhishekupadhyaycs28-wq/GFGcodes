class Solution {
  public:
    bool isPalindrome(string& s) {
        
        int i = 0;
        int n = s.size()-1;
        int count = 0;
        
        while (i<n) {
            
            if (s[i]!=s[n]) {
                count++;
            }
            
            i++;
            n--;
            
        }
        
        if (count != 0) return false;
        return true;
        
    }
};