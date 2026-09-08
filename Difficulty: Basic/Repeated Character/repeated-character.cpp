class Solution {
  public:
    char firstRep(string s) {
        // code here.
        
        int fr[26] = {0};

        int n = s.size();

        for (int i = 0; i<n; i++) {

            fr[int(s[i])-97]++;

        }
        
        for (int i = 0; i<n; i++) {
            
            if (fr[int(s[i])-97] > 1) {
                return s[i];
            }
            
        }
        
        return '#';
        
    }
};