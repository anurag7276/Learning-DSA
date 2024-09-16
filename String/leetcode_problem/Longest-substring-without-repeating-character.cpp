Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool>count(256,0);
        int first=0,second=0 , len=0; 
        // chech character are repeating
        while(second<s.size())
        {
            while(count[s[second]])
            {
                count[s[first]]=0;
                first++;
            }
            count[s[second]]=1;//bcozjo character remove karna tha wo bhi 0 ho gaya hpga
            // use 1 karna padega kyuki exist kar raha hai wo

            len = max(len,second-first+1);
            second++;

        }
        return len;
    }
};
