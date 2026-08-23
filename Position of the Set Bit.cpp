class Solution {
  public:
    int findPosition(int n) {
        // code here
        int count = 0;
        int pos = 0;
        //int x = n|0;
        while(n>0){
            
           
            if (n&1==1){
                count++;
            }
            n=n>>1;
            pos++; 
            
            
            
        }
        if (count==1){
            return pos;
        }
        return -1;
    }
};
