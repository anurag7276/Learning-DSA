class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0);// create vector for count occurance of letter
        vector<int>upper(26,0);
        int odd = 0;// if any odd letter present then odd = 1 and add result bcoz only one letter include of result
        int sum= 0;

      // for find occurance 
        for(int i=0;i<s.size();i++){
            if(s[i]>='a')
            lower[s[i]-'a']++;
            else
                upper[s[i]-'A']++;
         }

// if lower or upper contains even no. of letters then add direct
// if odd no. contain then add odd-1  and also result +1 
     for(int i=0;i<26;i++0{
        if(lower[i]%2==0)
        sum+=lower[i];
        else{
            sum+=lower[i]-1;
            odd = 1
        }

        if(upper[i]%2==0)
        sum+=upper[i];
        else{
            sum+=upper[i]-1;
            odd = 1
        }
     })    
        return sum+odd;
        
    }
};
