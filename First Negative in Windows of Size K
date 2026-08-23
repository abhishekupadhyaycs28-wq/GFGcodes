
class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // code here
        
    /*    vector<int> arr1;
        
		int left = 0;
		int right = k - 1;

		while (right<arr.size()) {
		    
			for (int i = left; i <= right; i++) {
			    
				if (arr[i]<0) {
					arr1.push_back(arr[i]);
					break;
				}

				if(i==right && arr[i]>=0)
					arr1.push_back(0);
					
			}
			
			right++;
			left++;
			
		}
		
		return arr1;     */
		
		vector<int>ans;
		queue<int> q;
		
		int right = 0;
		int left = 0;
		
		while ( right < arr.size() ) {
		    
		    if ( arr[right] < 0 ) {
		        
		        q.push(right);
		        
		    }
		    
		    while (right-left+1 == k) {
		        
		        if (!q.empty() && q.front() < left) {
		            q.pop();
		        }
		        
		        if (!q.empty()) {
		            ans.push_back(arr[q.front()]);
		        }
		        else {
		            ans.push_back(0);
		        }
		        
		        left++;
		        
		    }
		    
		    right++;
		    
		}
		
		return ans;
        
    }
    
};
