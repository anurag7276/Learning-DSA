Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:

Input: sentence = "leetcode"
Output: false

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool>alpha(26,0);
        for(int i=0; i<sentence.size();i++)
        {
            alpha[sentence[i]-'a']=1;//fill by 1 all index of alpha 26 

        }
        // to check if anyone index contain 0 then return 0 (false)
        for(int i=0;i<26;i++)
        {
            if(alpha[i]==0)
            return 0;
        }

        return 1;


    }
};
