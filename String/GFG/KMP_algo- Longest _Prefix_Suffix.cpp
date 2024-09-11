Input: str = "abab"
Output: 2
Explanation: "ab" is the longest proper prefix and suffix. 
Input: str = "aaaa"
Output: 3
Explanation: "aaa" is the longest proper prefix and suffix. 

NOTE: Prefix and suffix can be overlapping but they should not be equal to the entire string.





class Solution {
  public:
    int lps(string str) {
        // Your code goes here
        vector<int>lps (str.size(),0);
        int pre=0, suff=1;
        
        while(suff < str.size())
        {
            // Match
            
            if(str[pre] == str[suff] )
            {
               lps[suff] = pre+1;
                suff++,pre++;
            }
            
            // NOT match
            else
            {
                if(pre==0)
                {
                    lps[suff] = 0;
                    suff++;
                }
                else
                {
                    pre = lps[pre-1];
                    
                }
                
            }
            
            
        }
        return lps[str.size()-1];
    }
};

